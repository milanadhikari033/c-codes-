#include<iostream>
using namespace std; 
int main()
{
    int i,key,arr[30],n;
    cout<<"Enter the number of the elements"<<endl;
    cin>>n;
    cout<<"Enter the "<<n<<" elements"<<endl;
   for(i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    cout<<"Enter the key element"<<endl;
    cin>>key;
    for(i=0;i<n;i++)
    {
	
        if(arr[i]==key)
        {
        cout<<"Key is found at the index "<<i+1<<endl;
        break;
        }
    }
    
    if(i==n)
	{
        cout<<"The key element is not found in the array"<<endl;
    }

    return 0;
}
