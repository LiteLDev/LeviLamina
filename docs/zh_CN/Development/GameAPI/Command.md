## 🎯 命令相关 API

下面这些API提供了在游戏中注册、监听自定义命令的接口

### 执行一条后台命令  

`mc.runcmd(cmd)`

- 参数：
  - cmd : `String`  
    待执行的命令  
- 返回值：是否执行成功
- 返回值类型： `Boolean`

```clike
[Js]
mc.runcmd("say Hello!");
[Lua]
mc.runcmd("say Hello!")
```

### 执行一条后台命令（强化版）  

`mc.runcmdEx(cmd)`

- 参数：

  - cmd : `String`  
    待执行的命令  

- 返回值：命令执行结果`Object` 

- 返回值类型： `Object<Boolean,String>`

  - 对于返回的某个执行结果对象res，有如下这些成员：  

  | 成员        | 含义                    | 类型      |
  | ----------- | ----------------------- | --------- |
  | res.success | 是否执行成功            | `Boolean` |
  | res.output  | BDS执行命令后的输出结果 | `String`  |


> 注：runcmdEx 与普通 runcmd 实现区别非常大，在于 Ex 版本拥有**隐藏执行**的机制，执行结果不会输出至控制台，因此如果有需要，要手动用 log 函数将结果输出

```clike
[Js]
var result = mc.runcmdEx("say Hello!");
log(result.output);
[Lua] 
```

### 注册一个新的玩家命令  

`mc.regPlayerCmd(cmd,description,callback[,level])`

- 参数：
  - cmd : `String`  
    待注册的命令
  - description : `String`  
    命令描述文本  
  - callback : `Function(player,args)`  
    注册的这个命令被执行时，接口自动调用的回调函数。
  - level : `Integer`  
    （可选参数）命令的注册等级，默认为 0 ，即所有人都可以执行  
    如果设置命令注册等级为1，则只有OP可以执行此命令  
- 返回值：是否成功注册
- 返回值类型：`Boolean`

注：参数callback的回调函数原型：`function(player,args)`  

- player : `Player`  
  执行命令的玩家对象
- args : `Array<String,String...>`    
  目标命令后面的参数。按空格为分界分割，组成字符串数组。  
  如注册了自定义命令 `land set`，当执行 `/land set abc 2333` 时，args的值将为 `[ "abc","2333" ]`

```clike
[Js]
mc.regPlayerCmd("fly on","Turn on the fly mode",function(pl,args){
    pl.tell("Flying enabled.");
    //......
});

```

### 注册一个新的后台控制台命令  

`mc.regConsoleCmd(cmd,description,callback)`

- 参数：
  - cmd : `String`  
    待注册的命令

  - description : `String`  
    命令描述文本  

  - callback : `Function`  
    注册的这个命令被执行时，接口自动调用的回调函数。  
- 返回值：是否成功注册
- 返回值类型：`Boolean`

注：参数callback的回调函数原型：`function(args)`  

- args : `Array<String,String...>`      
  目标命令后面的参数。按空格为分界分割，组成字符串数组。  
  如注册了自定义命令 `land set`，当执行 `/land set abc 2333` 时，args的值将为 `['abc','2333']`

```clike
[Js]
mc.regConsoleCmd("backup","Start the backup",function(args){
    log("ID of this backup is:",args[0]);
    //......
});

```

### 命令注册相关说明

设置了回调函数之后，在你注册的这个命令被执行的时候，回调函数就会被调用。  
在调用之前，LLSE会自动帮你把命令参数分割成数组。  

以Js语言为例：执行注册`mc.regPlayerCmd("land buy", "购买领地", function(pl,args){ .... }, 0 );` 之后，  
当你使用命令`/land buy abcde 12345`的时候，这个回调函数就会被调用。  
回调函数的参数args被传入一个数组：[ "abcde" , "12345" ]  
正如所见，`args` 中包含的值是被 **按顺序分割好的** 命令参数。  
如果你的命令中有引号（比如说为了处理含有空格的玩家名字），LLSE在分割时也会做处理。

<br>

### 模拟产生一个控制台命令输出

`mc.sendCmdOutput(output)`

- 参数：
  - output : `String`  
    模拟产生的命令输出

- 返回值：是否成功执行
- 返回值类型：`Boolean`
