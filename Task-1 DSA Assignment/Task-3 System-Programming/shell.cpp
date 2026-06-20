#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    string command;

    cout << "Simple Shell - Type 'exit' to quit\n";
    cout << "InternSpark Task-3\n";

    while (true) {
        cout << "myshell> ";
        getline(cin, command);

        // Edge case 1: Empty input
        if (command.empty()) {
            continue;
        }

        // Exit condition
        if (command == "exit") {
            cout << "Exiting shell...\n";
            break;
        }

        // Edge case 2: Clear screen command
        if (command == "clear" || command == "cls") {
            system("cls");
            continue;
        }

        // Execute command using system()
        int result = system(command.c_str());

        // Error handling: Command failed
        if (result!= 0) {
            cout << "Error: Command '" << command << "' failed or not found\n";
        }
    }

    return 0;
}
