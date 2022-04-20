# LiteLoader ScriptEngine - Script Assist Interface Documentation

> A large number of **helper functions** are provided here, including log functions, loader function interfaces, and more.

They make it easier and more natural for you to develop scripts and avoid a lot of unnecessary details.

## 📅 Generic logging API 

In the past, it was a very troublesome thing to output logs in a certain format to a specified location. 
Today, LLSE provides you with a convenient generic logging interface. 

### Concept: About log output levels

In order to rank the priority and importance of logs, we introduce the concept of **log output level**.
The higher the log output level, the more detailed the content of the log, but the larger the amount of logs output at the same time. 
See the table below for details: 

| Log Output Level | Log Severity | Log Description                         |
| ------------ | ------------ | ------------------------------------------- |
| 0            | Slient       | No log output.                              |
| 1            | Fatal        | Only critical error messages.               |
| 2            | Error        | Only error and critical error messages.     |
| 3            | Warn         | Output arnings, errors, critical errors.    |
| 4            | Info         | Output everythng except debug info.         |
| 5            | Debug        | Output everything. |

With the **Log output level** setting, you can easily filter out some unnecessary information in the production environment.

The default value of the log output level is `4`, that is, all kinds of logs other than debug information will be output. 
With some APIs given below, you can adjust the log output level to your own desired value. 

<br>

### Set Output Configuration

Before using the general log interface, you need to modify some configuration settings of the log output according to your needs.

You can freely choose to send the log to the console, file or even a player by modifying the settings.
These settings can exist at the same time, for example, you can set to send to the console and file at the same time.
If you don't change any settings, by **default** the log will only be output to the console. 

#### Set whether the log is output to the console

`logger.setConsole(isOpen[,logLevel])`

- Parameter:
  - isOpen : `Boolean`  
    Set whether the log is output to the console
    The switch is on by default.  
  - logLevel : `Integer`  
    (optional parameter) the log output level of the console, the default is `4` 
- Return value: none 

<br>

#### Set whether the log is output to a file

`logger.setFile(filepath[,logLevel])`

- Parameter:
  - filepath : `String`  
    Set the file path where logs are output. 
    If you pass in an empty string or `Null`, then output to a file is closed.
    The switch is off by default.
  - logLevel : `Integer`  
    (optional parameter) the minimum log output level of the file, the default is `4` 
- Return value: none 

If you want to output to a file, we recommend that you output the log uniformly to `BDS_Root_Directory/logs/` folder for easy organization and inspection.

<br>

#### Set whether the log is output to a certain player

`logger.setPlayer(player[,logLevel])`

- Parameter:
  - player : `Player`  
    Set the target player object for sending logging output.
    If it returns `Null`, output to the player is closed.
    The switch is off by default
  - logLevel : `Integer`  
    (optional parameter) The player's minimum log output level, defaults to `4`    
- Return value: none 

This is a function designed to facilitate in-game debugging. The log output to the player will be treated as a chat message and displayed on the target player's screen.

<br>

 ### Output Log Function

After the setup is complete, you can use the function here to output the log.

`logger.log(data1,data2,...)` -> Output normal text  
`logger.debug(data1,data2,...)` -> Output debugging information  
`logger.info(data1,data2,...)`  -> Output prompt information  
`logger.warn(data1,data2,...)`  -> Output warning message  
`logger.error(data1,data2,...)`  -> Output error messages  
`logger.fatal(data1,data2,...)`  -> Output critical error message

- Parameter:
  - Variable or data to be output  
    Can be of any type, and the number of parameters can be any number.
- Return value: none 

Among them, **ordinary text** will be output as it is when output, while other output interfaces will append the **current time and log type.**
For example: you call `logger.error("Fail to transport the player")`  
The result of the log output is: 

```
[2021-05-21 19:41:03 Error] Fail to transport the player
```

<br>

### Other Settings

In addition, there are other settings to change the format of the output log 

#### Set custom log message headers  

`logger.setTitle(title)`

- Parameter:
  - title : `String`  
    Set custom headers
- Return value: none 

"Header" is the text at the beginning of the log output entry, which is used to visually distinguish the output source of the log. 
By default, message headers are empty by default, i.e. output without headers. 

For example: set a custom header as `logger.setTitle("LiteLoader")`  
Then the following log output will become like: 

```
20:05:26 ERROR [LiteLoader] Fail to transport the player
```

If you want to turn off the header after setting it, do `logger.setTitle("")`

<br>

#### Unified modification log output level

`logger.setLogLevel(level)`

- Parameter:
  - level : `Integer`  
    Log output level    
- Return value: none 

Unified reset of log output levels for various output directions 

<br>