#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>
#include <sys/wait.h>
#include <cstring>

using namespace std;

class SimpleShell {
private:
    bool running;
    
public:
    SimpleShell() : running(true) {}
    
    void run() {
        cout << "Welcome to MyShell (C++ Version)!" << endl;
        cout << "Type 'exit' to quit." << endl;
        
        string input;
        while (running) {
            cout << "myshell> ";
            
            // Read user input
            if (!getline(cin, input)) {
                break;
            }
            
            // Handle empty input
            if (input.empty()) {
                continue;
            }
            
            // Process the command
            processCommand(input);
        }
    }
    
private:
    void processCommand(const string& input) {
        // Handle built-in commands
        if (input == "exit") {
            cout << "Goodbye!" << endl;
            running = false;
            return;
        }
        
        if (input == "help") {
            showHelp();
            return;
        }
        
        // For now, just echo what user typed
        cout << "You typed: " << input << endl;
    }
    
    void showHelp() {
        cout << "Built-in commands:" << endl;
        cout << "  exit - Exit the shell" << endl;
        cout << "  help - Show this help message" << endl;
    }
};

int main() {
    SimpleShell shell;
    shell.run();
    return 0;
}