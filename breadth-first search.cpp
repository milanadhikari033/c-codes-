#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void bfs(int start, vector< vector<int> >& graph, int n) {
    vector<bool> visited(n, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while(!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current << " ";

        // Use traditional for-loop
        for(int i = 0; i < graph[current].size(); i++) {
            int neighbor = graph[current][i];
            if(!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int n = 6;
    vector< vector<int> > graph(n);

    graph[0].push_back(1);
    graph[0].push_back(2);

    graph[1].push_back(0);
    graph[1].push_back(3);

    graph[2].push_back(0);
    graph[2].push_back(4);
    graph[2].push_back(5);

    graph[3].push_back(1);
    graph[4].push_back(2);
    graph[5].push_back(2);

    bfs(0, graph, n);
    return 0;
}

