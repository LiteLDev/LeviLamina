## 🎯 Command Related API

The following APIs provide interfaces for registering and listening to custom commands in the game:

### Execute a Background Command  

`mc.runcmd(cmd)`

- Parameters: 
  - cmd : `String`  
    The command to be executed.  
- Return value: Whether the execution was successful.
- Return value type:  `Boolean`

```Javascript
[JS]
mc.runcmd("say Hello!");
[Lua]
mc.runcmd("say Hello!")
```

### Execute a Background Command (Enhanced Version) 

`mc.runcmdEx(cmd)`

- Parameters: 

  - cmd : `String`  
    The command to be executed.  
- Return value: Command Execution Result `Object` 
- Return value type:  `Object<Boolean,String>`

  - For a returned execution result object res, there are the following members:  

  | Members     | Meaning                 | Data Type      |
  | ----------- | ----------------------- | --------- |
  | res.success | Whether the execution was successful.            | `Boolean` |
  | res.output  | The output result after BDS executes the command. | `String`  |


> [!NOTE]
>
> The implementation of runcmdEx is very different from ordinary runcmd. The Enhanced version has a **hidden execution** mechanism, and the execution result will not be output to the console. Therefore, if necessary, you must manually use the log function to output the result.

```Javascript
[JS]
var result = mc.runcmdEx("say Hello!");
log(result.output);
[Lua] 
```

## Command Registration API

An interface for registering custom commands is provided here. By docking with the built-in command system of BDS, the commands you register can be used by players, consoles, command blocks, NPCs and other objects that can execute commands in games. In addon, you can also use the commands registered here.

### Register a Top-Level Command

`mc.newCommand(cmd,description[,permission,flag,alias])`

- Parameters: 

  - cmd : `String`  
    The command that will be registered.
  - description : `String`  
    The description text for the command.  
  - permission : `PermType`  
    (Optional parameter)   

    | Execution Permission   | Meaning                     |
    | ---------------------- | -------------------------- |
    | `PermType.Any`         | Anyone can execute the command.   |
    | `PermType.GameMasters` | Only the OP can execute the command.     |
    | `PermType.Console`     | Only the console can execute the command. |

    Defaults to `PermType.GameMasters`, indicating that anyone can execute the command.
  - flag : `Integer`  
    (Optional parameter) Default value is `0x80`   
    At present, you can directly press this input, and related modifications will be made in the future.
  - alias : `String`  
    (Optional argument) Add an alias for the command.
    Multiple aliases can be set for a command, which is equivalent to triggering the same command when executed.
- Return value: Command Object.
- Return value type: `Command`

> [!TIP]
>
> Top-level commands, i.e. something like `list` `gamerule`, the first input after the `/` character.
>
> After registering the top-level command, this function returns a command object. Next, the function expansion of this command needs to be carried out in this command object.

### Command Object - Function

Through the command object, you can register various forms and functions for this command. Suppose there is a `Command`. The command object has the following member functions.

#### Set Command Alias

`Command.setAlias(alias)`
- Parameters: 
  - alias : `String`  
    Command alias.
- Return value: Whether creating the alias succeeded or not.
- Return value type: `Boolean`

#### Add Command Enumerations

`Command.setEnum(name,values)`
- Parameters: 
  - name : `String`  
    Enumeration name, used to distinguish the enumeration when setting parameters.
  - values : `Array<String>`  
    Valid values ​​for enumeration.
- Return value: Whether setting succeeded or not.
- Return value type: `Boolean`

#### Add a Required Parameter

`Command.mandatory(name,type[,enumName,identifier,enumOptions])`
- Parameters: 
  - name : `String`  
    Parameter name, used to identify the parameter when executing the command.
  - type : `ParamType`  
    Command parameter type.
  - enumName : `String`  
    Enumeration name (only valid when `ParamType` is `Enum`, used to distinguish enumeration options).
  - identifier : `String`  
    Parameter identifier, used to uniquely identify parameters in special cases, generally can be replaced by `enumName` or `name`.
  - enumOptions : `Integer`  
    Parameter options, set to `1` to expand enumeration options in the command prompt.  
    For example `<action : TagChangeAction>` will become `<add|remove>`.
- Return value: Whether setting succeeded or not.
- Return value type: `Boolean`

#### Add an Optional Parameter

`Command.optional(name,type[,enumName,identifier,enumOptions])`

- Parameters: 
  - name : `String`  
    Parameter name, used to identify the parameter when executing the command.
  - type : `ParamType`  
    Command parameter type.
  - enumName : `String`  
    Enumeration name (only valid when `ParamType` is `Enum`, used to distinguish enumeration options).
  - identifier : `String`  
    Parameter identifier, used to uniquely identify parameters in special cases, generally can be replaced by `enumName` or `name`.
  - enumOptions : `Integer`  
    Parameter options, set to `1` to expand enumeration options in the command prompt.  
    For example `<action : TagChangeAction>` will become `<add|remove>`.
- Return value: Whether setting succeeded or not.
- Return value type: `Boolean`

#### Valid Command Parameter Types and Explanations 

| Command Parameter Type| Meaning                |
| --------------------- | ---------------------------------------------------------- |
| `ParamType.Bool`      | Boolean Parameter    |
| `ParamType.Int`       | Integer Parameter    |
| `ParamType.Float`     | Floating point Parameter   |
| `ParamType.String`    | String Parameter    |
| `ParamType.Actor`     | Entity Target Selector Parameter    |
| `ParamType.Player`    | Player Target Selector Parameter    |
| `ParamType.BlockPos`  | Integer Coordinate Parameters       |
| `ParamType.Vec3`      | Floating Point Coordinate Parameter |
| `ParamType.RawText`   | Raw String Arguments (May Contain Special Characters Like Comma Spaces) |
| `ParamType.Message`   | Message Type Parameter (Same as `/Say` Command Parameter, Will Automatically Expand the Target Selector, Etc.) |
| `ParamType.JsonValue` | `JSON` string parameter    |
| `ParamType.Item`      | Item Type Parameter        |
| `ParamType.Block`     | Block Type Parameter       |
| `ParamType.Effect`    | Effect Type Parameter      |
| `ParamType.Enum`      | Enum Parameter             |
| `ParamType.SoftEnum`  | Variable Enum Parameter    |
| `ParamType.ActorType` | Entity Type Parameter      |
| `ParamType.Command`   | Command Name Parameter (For Testing Only) |

#### Add a New Command Overload

`Command.overload(params)`

- Parameters: 
  - params : `Array<String>`  
    Parameter identifier, parameter list used by overloading, available parameter identifier, enumeration name, parameter name.
    Note that you cannot use identifiers that cannot distinguish specific parameters. For example, both parameters are called `action` but the enumeration options are different. In this case, the enumeration name should be used instead of the parameter name.
- Return value: Whether setting succeeded or not.
- Return value type: `Boolean`

> [!TIP]
>
> Command overloading is the method used by BDS to distinguish different command forms, and each different command form corresponds to a command overloading.
> As you can see, the parameter names provided in the command overload form a new command form.

#### Set Command Callback

`Command.setCallback(callback)`
- Parameters: 
  - callback : `Function(cmd,origin,output,results)`  
    When the registered command is executed, the interface automatically calls the callback function.
- Return value: Whether setting succeeded or not.
- Return value type: `Boolean`

> [!TIP]
>
> The parameters of the command callback function are relatively complex, which will be explained in detail below.

#### Installation Instructions

After all the configuration of the command is completed, use this function to register the command to the BDS command system.

`Command.setup()`

- Return value: Whether the installation was successful.
- Return value type: `Boolean`

## Command Callback Function

The **command callback function** mentioned above is a relatively complex callback function, and some explanations of the parameters are given below.
Command callback function prototype: `Function(cmd,origin,output,results)`

#### Parameters `cmd` : Own Command Object

This parameter gives the directive object with which you registered this command.

#### Parameters `origin` : The Executor of the Command

The parameter `origin` is of type `CommandOrigin` object. This object represents the executor of this command. Through this object, some operations can be performed on the executor.
For a particular `CommandOrigin` object `ori`, there are the following properties:

| Members       | Meaning                        | Data Types       |
| ------------  | ---------------------------    | ---------------- |
| ori.type      | Command Execution Body Type    | `OriginType`     |
| ori.name      | The name of the command execution body| `String`        |
| ori.pos       | The coordinates of the command exection body| `FloatPos`       |
| ori.blockPos  | The block coordinates of the command execution body| `IntPos`         |
| ori.entity    | The entity that executes the command (may be `Null`)| `Entity`         |
| ori.player    | The player who executed the command (may be `Null`)| `Player`         |

#### Parameter `output` : Output the Execution Result of the Command to the Command Executor

Parameter `output` is of type `CommandOutput` object. Through this object, the execution result of the command can be output to the command executor.
For a particular `CommandOutput` object `outp`, the following member methods are available:

##### Output a Success Message

`outp.success(msg)`

- Parameters: 
  - msg : `String`  
    The message to output.
- Return value: Whether the output is successful.
- Return value type: `Boolean`

##### Output an Error Message

`outp.error(msg)`

- Parameters: 
  - msg : `String`  
    The message to output.
- Return value: Whether the output is successful.
- Return value type: `Boolean`

##### Output a General Message

`outp.addMessage(msg)`

- Parameters: 
  - msg : `String`  
    The message to output.
- Return value: Whether the output is successful.
- Return value type: `Boolean`

#### Parameter `result` : The Result Obtained by Each Parameter of the Command 

The content of `results` is `object<command parameter name-data value>` key-value pair. The `command parameter name` is the `name` value of the parameter set when the command is registered, and the `data value` is the content filled in by the executor in the position of the current command parameter.

The relationship between command parameter types and data value types is as follows:

| Command Parameter Type| Data Value Type | Meaning  |
| --------------------- | --------------- | ------------------------------------------------------------ |
| `ParamType.Bool`      | `Boolean`       | Boolean Value |
| `ParamType.Int`       | `Integer`       | Integer Value |
| `ParamType.Float`     | `Float`         | Floating Point Value |
| `ParamType.String`    | `String`        | String|
| `ParamType.Actor`     | `Array<Actor>`  | The entity selected by the entity target selector |
| `ParamType.Player`    | `Array<Player>` | The entity selected by the player's target selector |
| `ParamType.BlockPos`  | `IntPos`        | Integer Coordinate Object|
| `ParamType.Vec3`      | `FloatPos`      | Floating Point Coordinate Object |
| `ParamType.RawText`   | `String`        | Raw string (may contain special characters like comma spaces) |
| `ParamType.Message`   | `String`        | Message Type String (same as `/say` command parameters, will automatically expand target selectors, etc.) |
| `ParamType.JsonValue` | `String`        | `JSON` String |
| `ParamType.Item`      | `Item`          | Item Type |
| `ParamType.Block`     | `Block`         | Block Type |
| `ParamType.Effect`    | `String`        | Effect Type String |
| `ParamType.Enum`      | `String`        | Enumerated String |
| `ParamType.SoftEnum`  | `String`        | Mutable Enumerated String |
| `ParamType.ActorType` | `String`        | Entity Type String |
| `ParamType.Command`   | `String`        | Command Name (For testing only) |

### Command Registration Example 

```javascript
[JS]
mc.listen("onServerStarted", () => {
    let cmd = mc.newCommand("manager", "Command Description", PermType.GameMasters);
    cmd.setAlias("mgr");
    cmd.setEnum("ChangeAction", ["add", "remove"]);
    cmd.setEnum("ListAction", ["list"]);
    cmd.mandatory("action", ParamType.Enum, "ChangeAction", 1);
    cmd.mandatory("action", ParamType.Enum, "ListAction", 1);
    cmd.mandatory("name", ParamType.RawText);
    cmd.overload(["ChangeAction", "name"]);
    cmd.overload(["ListAction"]);
    cmd.setCallback((_cmd, _ori, out, res) => {
        switch (res.action) {
            case "add":
                return out.success(`add "${res.name}"`);
            case "remove":
                return out.success(`remove "${res.name}"`);
            case "list":
                return out.success(`Name List:`);
        }
    });
    cmd.setup();
});
```

## Fake Command API 

The fake command API here is reserved for **downward compatibility**. It is recommended to use the **true command** API written in the above document.

> [!WARNING]
>
> Although it looks relatively simple, fake commands have some important disadvantages, including that they can only be executed by the player or console, other objects (such as command blocks, NPCs, etc.) cannot be executed, all parameter data needs to be parsed by themselves, etc.
>
> Please try to use the real command API.

### Register a New Player Command (Fake Command)  

`mc.regPlayerCmd(cmd,description,callback[,level])`

- Parameters: 
  - cmd : `String`  
    The command that will be registered.
  - description : `String`  
    Command Description Text.  
  - callback : `Function(player,args)`  
    When the registered command is executed, the interface automatically calls the callback function. 
  - level : `Integer`  
    (Optional parameter) The registration level of the command, the default is 0, that is, everyone can execute it.
    If the command registration level is set to 1, only the OP can execute this command.
- Return value: Whether the registration was successful.
- Return value type: `Boolean`

Note: The callback function prototype of the parameter callback: `function(player, args)`

- player : `Player`  
  The player that executes the command.
- args : `Array<String,String...>`    
  Arguments following the target command. Divide by spaces to form a string array.  
If a custom command `land set` is registered, when `/land set abc 2333` is executed, the value of args will be `[ "abc","2333" ]`

```javascript
[JS]
mc.regPlayerCmd("fly on","Turn on the fly mode",function(pl,args){
    pl.tell("Flying enabled.");
    //......
});

```


### Register a New Background Console Command (Fake Command)  

`mc.regConsoleCmd(cmd,description,callback)`

- Parameters: 
  - cmd : `String`  
    The command that will be registered.

  - description : `String`  
    Command Description Text.  

  - callback : `Function`  
    When the registered command is executed, the interface automatically calls the callback function.   
- Return value: Whether the registration was successful.
- Return value type: `Boolean`

Note: The callback function prototype of the parameter callback: `function(args)`

- args : `Array<String,String...>`      
Arguments following the target command. Divide by spaces to form a string array.
   If a custom command `land set` is registered, when `/land set abc 2333` is executed, the value of args will be `['abc','2333']`

```Javascript
[JS]
mc.regConsoleCmd("backup","Start the backup",function(args){
    log("ID of this backup is:",args[0]);
    //......
});

```

> [!TIP|label:Instructions on Fake Order Registration]
>
> After setting the callback function, the callback function will be called when the fake command you registered is executed.  
> LLSE will automatically split the command arguments into arrays for you before calling them.  
>
> Take the JavaScript language as an example:
>
> Execute command
> `mc.regPlayerCmd("land buy", "land buy", function(pl,args){ .... }, 0 );`
> after that,
> This callback function will be called when you use the command `/land buy abcde 12345`.
> The parameter args of the callback function is passed in an array: [ "abcde" , "12345" ]
> As you can see, the values contained in `args` are **sequentially split** command arguments.
> If you have quotes in your command (for example to handle player names with spaces in them), LLSE will also do this when splitting.

<br>

## Other APIs Related to the Command System

### The Simulation Produces a Console Command Output

`mc.sendCmdOutput(output)`

- Parameters: 
  - output : `String`  
    The command output produced by the simulation.

- Return value: Whether the exection was successful.
- Return value type: `Boolean`
