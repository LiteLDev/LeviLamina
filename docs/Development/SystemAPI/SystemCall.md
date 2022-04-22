## 📡 System Call API 

The following APIs provide interfaces to perform some system calls:

### Invoke the Shell to Execute the Specified System Command

`system.cmd(cmd,callback[,timeLimit])`

- Parameters:
  - cmd : `String`  
    The executed system command.
  - callback : `Function`  
    The callback function used to return data after the system process ends.
  - timeLimit : `Integer`  
    (Optional parameter) The maximum time for the command to run, in milliseconds.
    The default is `-1`, i.e. unlimited runtime 
- Return value: Whether the command was successfully started.
- Return value type: `Boolean`

Note: The prototype of the callback function of the parameter callback: `function(exitcode,output)`  

- exitcode : `Integer`    
  The process exit code.
- output : `String`  
  The contents of standard output and standard error.

Notice! What is executed here is not the command of the MC command system.
This function works asynchronously. It will not wait for the system to execute the command before returning, but the engine will automatically call the given callback function to return the result. 

<br>

### Run the Specified Location Program

`system.newProcess(process,callback[,timeLimit])`

- Parameters:
  - process : `String`  
    The path of the program to run (with command line arguments).
  - callback : `Function`  
    The callback function used to return data after the program process ends.
  - timeLimit : `Integer`  
    (Optional parameter) The maximum time limit for the program process to run, in milliseconds.  
    The default is `-1`, i.e. unlimited runtime.
- Return value: Whether the process was successfully started.
- Return value type: `Boolean`

Note: The prototype of the callback function of the parameter callback: `function(exitcode,output)`  

- exitcode : `Integer`    
  Process exit code.
- output : `String`  
  The contents of the program's standard output and standard error output.

This function works asynchronously. It will not wait for the system to execute the command before returning, but the engine will automatically call the given callback function to return the result.

<br>