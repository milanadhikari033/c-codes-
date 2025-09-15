#include <iostream>
#include <fstream>

int main() {
    std::ofstream file("Intelligent_vs_Dumb_Instrumentation.txt");

    if (!file) {
        std::cerr << "Error creating file!" << std::endl;
        return 1;
    }

    file << "Comparison of Intelligent vs Dumb Instrumentation\n\n";

    file << "1. Definitions\n";
    file << "-----------------------------------\n";
    file << "Dumb Instrumentation:\n";
    file << "Basic devices that measure a value (e.g., temperature, pressure) and send raw data to another system without any processing.\n\n";
    file << "Intelligent Instrumentation:\n";
    file << "Advanced devices that measure, process, analyze, and sometimes act on data. Include microprocessors or embedded software.\n\n";

    file << "2. Functions\n";
    file << "-----------------------------------\n";
    file << "Dumb Instrumentation:\n";
    file << "- Measures signals\n";
    file << "- Sends raw analog output\n";
    file << "- No data processing or decision-making\n\n";

    file << "Intelligent Instrumentation:\n";
    file << "- Measures and processes data\n";
    file << "- Converts analog to digital\n";
    file << "- Supports self-diagnostics and communication\n\n";

    file << "3. Key Characteristics\n";
    file << "-----------------------------------\n";
    file << "Dumb:\n";
    file << "- Simple, analog\n";
    file << "- Manual calibration\n";
    file << "- Low cost, low flexibility\n\n";

    file << "Intelligent:\n";
    file << "- Digital, uses microcontrollers\n";
    file << "- Remote diagnostics and updates\n";
    file << "- More flexible and efficient\n\n";

    file << "4. Examples\n";
    file << "-----------------------------------\n";
    file << "Temperature: Dumb = Mercury thermometer, Intelligent = Digital sensor\n";
    file << "Pressure: Dumb = Bourdon gauge, Intelligent = Smart transmitter\n";
    file << "Flow: Dumb = Rotameter, Intelligent = Ultrasonic flow meter\n";
    file << "Electrical: Dumb = Analog voltmeter, Intelligent = Digital multimeter\n\n";

    file << "5. Summary\n";
    file << "-----------------------------------\n";
    file << "Dumb: Only measures and sends data\n";
    file << "Intelligent: Measures + Processes + Communicates + Makes decisions\n";

    file.close();
    std::cout << "File 'Intelligent_vs_Dumb_Instrumentation.txt' created successfully.\n";

    return 0;
}
