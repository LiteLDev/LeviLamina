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

### 注册指令

`mc.newCommand(cmd,description[,permission,flag,alias])`
- 参数：
  - cmd : `String`  
    待注册的命令
  - description : `String`  
    命令描述文本  
  - permission : `PermType`  
    （可选参数）指令执行所需权限，默认值 `Any`
  - flag : `Integer`  
    （可选参数）默认值 `0x80` 
- 返回值：指令对象
- 返回值类型：`Command`

## 指令对象 API

### 指令对象 - 函数

#### 设置指令别名

`Command.setAlias(alias)`
- 参数：
  - alias : `String`  
    指令别名
- 返回值：是否成功设置
- 返回值类型：`Boolean`

#### 设置指令枚举选项

`Command.setEnum(name,values)`
- 参数：
  - name : `String`  
    枚举名，用于设置参数时区分枚举
  - values : `Array<String>`  
    枚举值
- 返回值：是否成功设置
- 返回值类型：`Boolean`

#### 设置必选参数

`Command.mandatory(name,type[,enumName,identifier,enumOptions])`
- 参数：
  - name : `String`  
    参数名，用于执行指令时识别参数
  - type : `ParamType`  
    参数类型
  - enumName : `String`  
    枚举名，仅 `ParamType` 为 `Enum` 时有效，用于区分枚举选项
  - identifier : `String`  
    参数标识，特殊情况下用于唯一识别参数，一般可用 `enumName` 或 `name` 代替
  - enumOptions : `Integer`  
    枚举选项，设置为 `1` 可在指令提示中展开枚举选项，如 `<action : TagChangeAction>` 会变成 `<add|remove>`
- 返回值：是否成功设置
- 返回值类型：`Boolean`

#### 设置可选参数

`Command.optional(name,type[,enumName,identifier,enumOptions])`
- 参数：
  - name : `String`  
    参数名，用于执行指令时识别参数
  - type : `ParamType`  
    参数类型
  - enumName : `String`  
    枚举名，仅 `ParamType` 为 `Enum` 时有效，用于区分枚举选项
  - identifier : `String`  
    参数标识，特殊情况下用于唯一识别参数，一般可用 `enumName` 或 `name` 代替
  - enumOptions : `Integer`  
    枚举选项，设置为 `1` 可在指令提示中展开枚举选项，如 `<action : TagChangeAction>` 会变成 `<add|remove>`
- 返回值：是否成功设置
- 返回值类型：`Boolean`

#### 设置指令重载

`Command.overload(params)`
- 参数：
  - params : `Array<String>`  
    参数标识符，重载所用到的参数列表，可用 参数标识符、枚举名、参数名，注意不能使用无法区分具体参数的标识符，如两个参数都叫 `action` 但枚举选项不同，此时应该使用枚举名而不是参数名
- 返回值：是否成功设置
- 返回值类型：`Boolean`

#### 设置指令回调

`Command.setCallback(callback)`
- 参数：
  - callback : `Function(cmd,origin,output,results)`  
    注册的这个命令被执行时，接口自动调用的回调函数。
- 返回值：是否成功设置
- 返回值类型：`Boolean`

> `results` 为 `paramName-value` 键值对，其中值的类型和参数类型对应关系如下

| 参数类型         | 值类型|含义|
| ------------ | -------------- | ---|
| `ParamType.Bool`      | `Boolean`|布尔值|     
| `ParamType.Int`       | `Integer`|整数|     
| `ParamType.Float`     | `Float`|浮点数|   
| `ParamType.String`    | `String`|字符串|   
| `ParamType.Actor`     | `Array<Actor>`|实体目标选择器|   
| `ParamType.Player`    | `Array<Player>`|玩家目标选择器|   
| `ParamType.BlockPos`  | `IntPos`|整数坐标|   
| `ParamType.Vec3`      | `FloatPos`|浮点数坐标|     
| `ParamType.RawText`   | `String`|原始字符串（可包含特殊字符，如逗号空格）|   
| `ParamType.Message`   | `String`|消息类型，同 `/say` 指令参数，会自动展开目标选择器等|   
| `ParamType.JsonValue` | `String`|`json`字符串|   
| `ParamType.Item`      | `Item`|物品类型| 
| `ParamType.Block`     | `Block`|方块类型|   
| `ParamType.Effect`    | `String`|效果类型|   
| `ParamType.Enum`      | `String`|枚举|   
| `ParamType.SoftEnum`  | `String`|可变枚举|   
| `ParamType.ActorType` | `String`|实体类型|   
| `ParamType.Command`   | `String`|指令名称，*测试|   

#### 安装指令

`Command.setup()`
- 参数：
- 返回值：是否成功设置
- 返回值类型：`Boolean`

## CommandOrigin 对象 API

`CommandOrigin` 表示执行指令的主体。

### CommandOrigin 对象 - 属性

对于某个特定的 `CommandOrigin` 对象`ori`，有以下这些属性

| 属性         | 含义                        | 类型             |
| ------------ | --------------------------- | ---------------- |
| ori.type      | 指令执行主体类型              | `OriginType`     |
| ori.name      | 指令执行主体的名称             | `String`        |
| ori.pos       | 指令执行主体的坐标             | `FloatPos`       |
| ori.blockPos  | 指令执行主体的方块坐标          | `IntPos`         |
| ori.entity    | 执行指令的实体（可空）          | `Entity`         |
| ori.player    | 执行指令的玩家（可空）          | `Player`         |

## CommandOrigin 对象 API

`CommandOrigin` 用于控制指令输出。

### CommandOrigin 对象 - 函数

#### 添加成功信息

`outp.success(msg)`

- 参数：
  - msg : `String`  
    要添加的输出的信息
- 返回值：是否成功添加
- 返回值类型：`Boolean`

#### 添加错误信息

`outp.error(msg)`

- 参数：
  - msg : `String`  
    要添加的输出的信息
- 返回值：是否成功添加
- 返回值类型：`Boolean`

#### 添加普通信息

`outp.addMessage(msg)`

- 参数：
  - msg : `String`  
    要添加的输出的信息
- 返回值：是否成功添加
- 返回值类型：`Boolean`

## 假指令 API

### 注册一个新的玩家命令（假指令）  

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

### 注册一个新的后台控制台命令（假指令）  

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
