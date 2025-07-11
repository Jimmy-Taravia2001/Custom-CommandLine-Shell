# Custom Command-Line Shell

A simple interactive shell implementation built in C++ that demonstrates basic command-line interface concepts.

## Features

- Interactive command prompt with `myshell>` interface
- Built-in commands: `help` and `exit`
- Input validation and error handling
- Object-oriented design using C++ classes

## Setup

### Prerequisites
- Linux environment (WSL, Ubuntu, or any Linux distribution)
- G++ compiler

### Build and Run
```bash
git clone https://github.com/yourusername/custom-shell.git
cd custom-shell
g++ shell.cpp -o shell
./shell
```

## Usage

```
myshell> help
Available commands:
  exit - Exit the shell
  help - Show this help message

myshell> exit
Goodbye!
```

## Technical Details

- **Language**: C++
- **Core Class**: SimpleShell - handles command processing and user interaction
- **Key Concepts**: String processing, control flow, user I/O handling
