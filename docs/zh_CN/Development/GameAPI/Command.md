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


> [!NOTE]
>
> runcmdEx 与普通 runcmd 实现区别非常大，在于 Ex 版本拥有**隐藏执行**的机制，执行结果不会输出至控制台，因此如果有需要，要手动用 log 函数将结果输出

```clike
[Js]
var result = mc.runcmdEx("say Hello!");
log(result.output);
[Lua] 
```

## 命令注册 API

这里提供了注册自定义命令的接口。通过对接 BDS 内置的命令系统，你注册的命令可以由玩家、控制台、命令方块、NPC等各种游戏中可以执行命令的对象所使用，在 addon 中，也可以使用这里所注册的命令。

### 注册一条顶层命令

`mc.newCommand(cmd,description[,permission,flag,alias])`

- 参数：

  - cmd : `String`  
    待注册的命令

  - description : `String`  
    命令描述文本  

  - permission : `PermType`  
    （可选参数）指令执行所需权限  

    | 执行权限               | 含义                       |
    | ---------------------- | -------------------------- |
    | `PermType.Any`         | 任何人都可以执行这条指令   |
    | `PermType.GameMasters` | 只有OP可以执行这条指令     |
    | `PermType.Console`     | 只有控制台可以执行这条指令 |

    默认值 `PermType.GameMasters`，表示任何人都可以执行这个命令

  - flag : `Integer`  
    （可选参数）默认值 `0x80`   
    目前直接按此输入即可，后续会进行相关修改

  - alias : `String`  
    （可选参数）命令的别名  
    可以为命令设置多个别名，执行的时候相当于触发同一条命令

- 返回值：指令对象

- 返回值类型：`Command`

> [!TIP]
>
> 顶层命令，也就是类似 `list` `gamerule` 这种，在 / 之后第一个输入的部分  
>
> 注册完顶层命令后，此函数会返回一个指令对象。接下来，对于这个命令的功能扩展都需要在这个指令对象中进行

### 指令对象 - 函数

通过指令对象，你可以为这个命令注册各式各样的形式、功能。假设有一个叫 `Command` 的指令对象，则有下面这些成员函数

#### 设置指令别名

`Command.setAlias(alias)`
- 参数：
  - alias : `String`  
    指令别名
- 返回值：是否成功设置
- 返回值类型：`Boolean`

#### 新增一个指令枚举选项

`Command.setEnum(name,values)`
- 参数：
  - name : `String`  
    枚举名，用于设置参数时区分枚举
  - values : `Array<String>`  
    枚举的有效值
- 返回值：是否成功设置
- 返回值类型：`Boolean`

#### 新增一个必选参数

`Command.mandatory(name,type[,enumName,identifier,enumOptions])`
- 参数：
  - name : `String`  
    参数名，用于执行指令时识别参数
  - type : `ParamType`  
    命令参数类型
  - enumName : `String`  
    枚举名（仅 `ParamType` 为 `Enum` 时有效，用于区分枚举选项）
  - identifier : `String`  
    参数标识，特殊情况下用于唯一识别参数，一般可用 `enumName` 或 `name` 代替
  - enumOptions : `Integer`  
    参数选项，设置为 `1` 可在指令提示中展开枚举选项  
    如 `<action : TagChangeAction>` 会变成 `<add|remove>`
- 返回值：是否成功设置
- 返回值类型：`Boolean`

#### 新增一个可选参数

`Command.optional(name,type[,enumName,identifier,enumOptions])`

- 参数：
  - name : `String`  
    参数名，用于执行指令时识别参数
  - type : `ParamType`  
    命令参数类型
  - enumName : `String`  
    枚举名（仅 `ParamType` 为 `Enum` 时有效，用于区分枚举选项）
  - identifier : `String`  
    参数标识，特殊情况下用于唯一识别参数，一般可用 `enumName` 或 `name` 代替
  - enumOptions : `Integer`  
    参数选项，设置为 `1` 可在指令提示中展开枚举选项  
    如 `<action : TagChangeAction>` 会变成 `<add|remove>`
- 返回值：是否成功设置
- 返回值类型：`Boolean`

#### 有效的命令参数类型及解释

| 命令参数类型          | 含义                                                       |
| --------------------- | ---------------------------------------------------------- |
| `ParamType.Bool`      | 布尔值参数                                                 |
| `ParamType.Int`       | 整数参数                                                   |
| `ParamType.Float`     | 浮点数参数                                                 |
| `ParamType.String`    | 字符串参数                                                 |
| `ParamType.Actor`     | 实体目标选择器参数                                         |
| `ParamType.Player`    | 玩家目标选择器参数                                         |
| `ParamType.BlockPos`  | 整数坐标参数                                               |
| `ParamType.Vec3`      | 浮点数坐标参数                                             |
| `ParamType.RawText`   | 原始字符串参数（可包含特殊字符，如逗号空格）               |
| `ParamType.Message`   | 消息类型参数（同 `/say` 指令参数，会自动展开目标选择器等） |
| `ParamType.JsonValue` | `Json`字符串参数                                           |
| `ParamType.Item`      | 物品类型参数                                               |
| `ParamType.Block`     | 方块类型参数                                               |
| `ParamType.Effect`    | 效果类型参数                                               |
| `ParamType.Enum`      | 枚举参数                                                   |
| `ParamType.SoftEnum`  | 可变枚举参数                                               |
| `ParamType.ActorType` | 实体类型参数                                               |
| `ParamType.Command`   | 指令名称参数（仅供测试）                                   |

#### 新增一条指令重载

`Command.overload(params)`

- 参数：
  - params : `Array<String>`  
    参数标识符，重载所用到的参数列表，可用 参数标识符、枚举名、参数名。  
    注意不能使用无法区分具体参数的标识符，如两个参数都叫 `action` 但枚举选项不同，此时应该使用枚举名而不是参数名
- 返回值：是否成功设置
- 返回值类型：`Boolean`

> [!TIP]
>
> 指令重载是 BDS 区分不同指令形式的方法，每一种不同的指令形式对应着一种指令重载。  
> 如你所见，指令重载中提供的各项参数名组成了一种新的指令形式

#### 设置指令回调

`Command.setCallback(callback)`
- 参数：
  - callback : `Function(cmd,origin,output,results)`  
    注册的这个命令被执行时，接口自动调用的回调函数。
- 返回值：是否成功设置
- 返回值类型：`Boolean`

> [!TIP]
>
> 指令回调函数的参数相对复杂，在下面将进行详细解释

#### 安装指令

在对命令的所有配置完成之后，使用此函数将命令注册到 BDS 的命令系统当中

`Command.setup()`

- 返回值：是否成功安装
- 返回值类型：`Boolean`

## 指令回调函数

上文提到的 **指令回调函数** 是一个比较复杂的回调函数，下面对其中的各项参数进行一些解释  
指令回调函数原型： `Function(cmd,origin,output,results)`

#### 参数 `cmd` ： 自身的指令对象

这个参数给出了你注册这个命令时使用的指令对象。

#### 参数 `origin` ：命令的执行者

参数 `origin`的类型为 `CommandOrigin` 对象。此对象表示此次命令的执行者，通过这个对象，可以对执行者进行一些操作  
对于某个特定的 `CommandOrigin` 对象`ori`，有以下这些属性

| 属性         | 含义                        | 类型             |
| ------------ | --------------------------- | ---------------- |
| ori.type      | 指令执行主体类型              | `OriginType`     |
| ori.name      | 指令执行主体的名称             | `String`        |
| ori.pos       | 指令执行主体的坐标             | `FloatPos`       |
| ori.blockPos  | 指令执行主体的方块坐标          | `IntPos`         |
| ori.entity    | 执行指令的实体（可空）          | `Entity`         |
| ori.player    | 执行指令的玩家（可空）          | `Player`         |

#### 参数 `output` ：向命令执行者输出命令的执行结果

参数`outout`的类型为`CommandOutput` 对象。通过这个对象，可以向命令执行者输出命令的执行结果。  
对于某个特定的 `CommandOutput` 对象`outp`，有以下这些成员方法

##### 输出一条成功信息

`outp.success(msg)`

- 参数：
  - msg : `String`  
    要输出的信息
- 返回值：是否成功输出
- 返回值类型：`Boolean`

##### 输出一条错误信息

`outp.error(msg)`

- 参数：
  - msg : `String`  
    要输出的信息
- 返回值：是否成功输出
- 返回值类型：`Boolean`

##### 输出一条普通信息

`outp.addMessage(msg)`

- 参数：
  - msg : `String`  
    要输出的信息
- 返回值：是否成功输出
- 返回值类型：`Boolean`

#### 参数 `result` ：命令各项参数获取的结果

`results` 的内容为 `object<命令参数名-数据值>` 键值对。其中 `命令参数名` 为命令注册时设置的参数的 `name`值，而`数据值`即为执行者在当前命令参数的位置填上的内容 

命令参数类型 和 数据值类型 的对应关系如下

| 命令参数类型          | 数据值类型      | 含义                                                         |
| --------------------- | --------------- | ------------------------------------------------------------ |
| `ParamType.Bool`      | `Boolean`       | 布尔值                                                       |
| `ParamType.Int`       | `Integer`       | 整数                                                         |
| `ParamType.Float`     | `Float`         | 浮点数                                                       |
| `ParamType.String`    | `String`        | 字符串                                                       |
| `ParamType.Actor`     | `Array<Actor>`  | 实体目标选择器 选中的实体                                    |
| `ParamType.Player`    | `Array<Player>` | 玩家目标选择器 选中的实体                                    |
| `ParamType.BlockPos`  | `IntPos`        | 整数坐标对象                                                 |
| `ParamType.Vec3`      | `FloatPos`      | 浮点数坐标对象                                               |
| `ParamType.RawText`   | `String`        | 原始字符串（可包含特殊字符，如逗号空格）                     |
| `ParamType.Message`   | `String`        | 消息类型字符串（同 `/say` 指令参数，会自动展开目标选择器等） |
| `ParamType.JsonValue` | `String`        | `Json`字符串                                                 |
| `ParamType.Item`      | `Item`          | 物品类型                                                     |
| `ParamType.Block`     | `Block`         | 方块类型                                                     |
| `ParamType.Effect`    | `String`        | 效果类型字符串                                               |
| `ParamType.Enum`      | `String`        | 枚举字符串                                                   |
| `ParamType.SoftEnum`  | `String`        | 可变枚举字符串                                               |
| `ParamType.ActorType` | `String`        | 实体类型字符串                                               |
| `ParamType.Command`   | `String`        | 指令名称（仅供测试）                                         |

### 命令注册样例

```javascript
[Js]
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

## 假命令 API

这里的假命令API为 **向下兼容** 而留存，推荐使用上面文档所写的的 **真命令** API

> [!WARNING]
>
> 尽管看起来比较简单，但是假命令有一些很重要的缺点，包括只能由玩家或控制台执行，其他对象（如命令方块、NPC等）都无法执行、所有参数数据都需要自行解析等等。
>
> 请尽量使用 真命令API

### 注册一个新的玩家命令（假命令）  

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


### 注册一个新的控制台命令（假命令）  

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

> [!TIP|label:假命令注册相关说明]
>
> 设置了回调函数之后，在你注册的这个假命令被执行的时候，回调函数就会被调用。  
> 在调用之前，LLSE会自动帮你把命令参数分割成数组。  
>
> 以Js语言为例：
>
> 执行命令  
> `mc.regPlayerCmd("land buy", "购买领地", function(pl,args){ .... }, 0 );`   
> 之后，  
> 当你使用命令  `/land buy abcde 12345`的时候，这个回调函数就会被调用。  
> 回调函数的参数args被传入一个数组：[ "abcde" , "12345" ]  
> 正如所见，`args` 中包含的值是被 **按顺序分割好的** 命令参数。  
> 如果你的命令中有引号（比如说为了处理含有空格的玩家名字），LLSE在分割时也会做处理。

<br>

## 其他与命令系统有关的 API

### 模拟产生一个控制台命令输出

`mc.sendCmdOutput(output)`

- 参数：
  - output : `String`  
    模拟产生的命令输出

- 返回值：是否成功执行
- 返回值类型：`Boolean`
