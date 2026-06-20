Task-3: Simple Shell



Goal
Build a command runner that accepts user input and executes system commands.

Features
1. Process Creation: Uses `system()` to run commands
2. Error Handling: 
   - Empty input ignored
   - Invalid commands show error message
   - Graceful exit with `exit`
3. Built-in Commands: `exit`, `clear`/`cls`

How to Compile & Run
g++ shell.cpp -o shell.exe
.\shell.exe
