# 🔍 如何：使用静态指令

>以下示例显示如何使用静态指令。静态指令相较于动态指令具有更好的可读性，其编写方式也相对比较简单。不像动态指令，静态指令采用了声明式的注册方法。

<br>

- 此示例具有 `4` 个部分

<br>

1. 声明指令类主体
2. 声明指令枚举
3. 定义指令参数
4. 注册指令

<br>

**进阶：**

1. 设置指令重载
2. 设置空指令重载
3. 设置可选参数
4. 获取指令注册信息

<br>

## 声明指令类主体

<br>

>声明指令类主体的方式如下：  

<br>

C#
```cs
// command.cs

using System;
using LLNET.DynamicCommand;

namespace Example;

//须继承ICommand接口

[Command("examplecmd")]
public class ExampleCommand: ICommand
{
    public void Execute(CommandOrigin origin, CommandOutput output)
    {
        
    }
}
```

>其中CommandAttribute为指令类提供了指令名称这一信息，继承ICommand接口并实现Execute方法为指令类提供了回调函数，也就是指令的运行逻辑主体。

<br>

让我们来添加更多东西！

<br>

C#
```cs
// command.cs

using System;
using LLNET.DynamicCommand;

namespace Example;

[Command("examplecmd", Description = ".NET example command", Permission = CommandPermissionLevel.Any)]
public class ExampleCommand: ICommand
{
    public void Execute(CommandOrigin origin, CommandOutput output)
    {
        
    }
}
```

>此时的CommandAttribute提供了指令名称、指令描述、指令权限。将指令权限设置为Any，将使得所有玩家都可以使用此指令。

<br>

<br>

## 声明指令枚举

<br>

在声明指令主体的基础上，声明指令枚举的方式如下：

<br>

C#
```cs
// command.cs

using System;
using LLNET.DynamicCommand;

namespace Example;

[Command("examplecmd", Description = ".NET example command", Permission = CommandPermissionLevel.Any)]
public class ExampleCommand: ICommand
{

    //使用CommandEnumAttribute声明指令枚举
    [CommandEnum]
    enum ExampleEnum{ add, remove, list };

    public void Execute(CommandOrigin origin, CommandOutput output)
    {
    }
}
```

<br>

<br>

## 定义指令参数

<br>

>有了之前所作的准备工作，此时我们可以开始定义指令参数。相关示例如下：

<br>

C#
```cs
// command.cs

using System;
using LLNET.DynamicCommand;

namespace Example;

[Command("examplecmd", Description = ".NET example command", Permission = CommandPermissionLevel.Any)]
public class ExampleCommand: ICommand
{

    [CommandEnum]
    enum ExampleEnum{ add, remove, list };

    //使用CommandParameterAttribute定义指令参数
    [CommandParameter(ParamType.Enum)]
    ExampleEnum Mode{ get; set; }

    [CommandParameter(ParamType.Int)]
    int Count{ get; set; }

    public void Execute(CommandOrigin origin, CommandOutput output)
    {
        Console.WriteLine($"Mode: {Mode},Count: {Count}");
    }
}
```

<br>

<br>

## 注册指令

<br>

>使用DynamicCommand.RegisterCommand\<TCommand\>方法注册指令。

<br>

C#
```cs
// command.cs

using System;
using LLNET.DynamicCommand;

namespace Example;

[Command("examplecmd", Description = ".NET example command", Permission = CommandPermissionLevel.Any)]
public class ExampleCommand: ICommand
{

    [CommandEnum]
    enum ExampleEnum{ add, remove, list };

    //使用CommandParameterAttribute定义指令参数
    [CommandParameter(ParamType.Enum)]
    ExampleEnum Mode{ get; set; }

    [CommandParameter(ParamType.Int)]
    int Count{ get; set; }

    public void Execute(CommandOrigin origin, CommandOutput output)
    {
        Console.WriteLine($"Mode: {Mode},Count: {Count}");
    }
}
```
```cs
// plugin.cs

using LLNET.DynamicCommand;
using Example;

namespace PluginMain
{
    class Plugin
    {
        public static void OnPostInit()
        {
            DynamicCommand.RegisterCommand<ExampleCommand>();
        } 
    }
}
```

# 进阶

<br>

>以下为进阶内容。使用这些内容可以编写出功能更为强大的指令。

<br>

## 设置指令重载

<br>

>**不同的指令参数组合可形成指令的不同重载形式**。每一个指令参数都具有一个或多个指令重载标识。若未在 `CommandParameterAttribute` 中指明 `OverloadId` 属性，则指令参数的默认重载标识为 `0` 。使用 `CommandOverloadIdAttribute` 可以为参数指明多个重载标识。标识可以为任意 `Int32` 值，LL.NET将会把具有相同重载表示的指令参数添加到同一个指令重载中。

<br>

>以下示例基于前面的内容演示如何使用指令重载：

<br>

C#
```cs
// command.cs

using System;
using LLNET.DynamicCommand;

namespace Example;

[Command("examplecmd", Description = ".NET example command", Permission = CommandPermissionLevel.Any)]
public class ExampleCommand: ICommand
{

    [CommandEnum]
    enum ExampleEnum{ add, remove, list };



    [CommandParameter(ParamType.Enum, 
     OverloadId = 0,
     /*使用CommandParameterOption.EnumAutocompleteExpansion将枚举参数展开*/
     Option = CommandParameterOption.EnumAutocompleteExpansion
     )]
    [CommandParameterOverload(1)]

    ExampleEnum Mode{ get; set; }



    [CommandParameter(ParamType.Int, OverloadId = 1)]

    int Count{ get; set; }


    //   此时的指令重载列表
    //   /examplecmd <add|remove|list>
    //   /examplecmd <add|remove|list> <int>
    //   当然，也可以将list单独作为一个枚举声明，在此只是作为演示。


    public void Execute(CommandOrigin origin, CommandOutput output)
    {
        switch(this.Mode)
        {
            case ExampleEnum.add:
            {
                Console.WriteLine("added. Count:" + Count.ToString());
            }
            break;
            case ExampleEnum.remove:
            {
                Console.WriteLine("removed. Count:" + Count.ToString());
            }
            break;
            case ExampleEnum.list:
            {
                Console.WriteLine("listed.")
            }
            break;
        }
    }
}
```
```cs
// plugin.cs

using LLNET.DynamicCommand;
using Example;

namespace PluginMain
{
    class Plugin
    {
        public static void OnPostInit()
        {
            DynamicCommand.RegisterCommand<ExampleCommand>();
        } 
    }
}
```

<br>

<br>

## 设置空指令重载

<br>

>有时，指令并不需要设置任何参数，如BDS中的 /list /stop 等指令。对此，可以选择对其设置空指令重载以满足需求。

<br>

>以下示例演示如何使用空指令重载：

<br>

C#
```like
using System;
using LLNET.DynamicCommand;
using MC;

namespace Example;


[Command("killallplayers")]

//使用CommandEmptyOverloadAttribute指明此指令具有空重载
[CommandEmptyOverload]

public class KillAllPlayersCommand: Icommand
{
    public void Execute(CommandOrigin origin, CommandOutput output)
    {
        Level.RunCmdEx("kill @a");
    }
}

//省略注册过程...
```

<br>

>同时， `CommandEmptyOverloadAttribute` 与一般的指令重载兼容，在此不再赘述。

<br>

<br>

## 设置可选参数

<br>

>可让指令参数作为可选参数供使用者决定是否输入。

<br>

>以下示例演示如何设置可选参数：

<br>

C#
```like
using System;
using LLNET.DynamicCommand;

namespace Example;


[Command("examplecmd")]

//使用CommandEmptyOverloadAttribute指明此指令具有空重载
[CommandEmptyOverload]

public class ExampleCommand: Icommand
{

    //设置为可选
    //若参数未在本次调用中被设置，则其值为上一次设置的值或默认值
    //现阶段并未实现查询参数是否被设置的方法
    //使用指令重载时可能会导致同样的状况
    [CommandParameter(ParamType.Int, IsMandatory = false)]
    int Test{ get; set; }

    public void Execute(CommandOrigin origin, CommandOutput output)
    {
    }
}
```

<br>

<br>

## 获取指令注册信息

<br>

>通过继承ICommandEvent或ICommandData，可获取到指令注册前后的动态指令实例与内部表示该指令的数据。

<br>

### 继承ICommandEvent

<br>

C#
```cs
using System;
using LLNET.DynamicCommand;

namespace Example;


[Command("examplecmd")]
public class ExampleCommand: Icommand, ICommandEvent
{
    public void Execute(CommandOrigin origin, CommandOutput output)
    {
    }

    //实现接口方法
    //在方法结束后动态指令实例便会被销毁
    //若想长期保存该实例，请使用DynamicCommandInstance.Release通用方法释放原始指针，并使用构造函数 DynamicCommandInstance(global::DynamicCommandInstance* p) 重新构造该实例。

    public void BeforeCommandSetup(DynamicCommandInstance cmd)
    {
        //do something...
    }

    //setup之后的实例只建议进行查询等操作，试图调用改变当前实例的方法可能会造成一些未知的效果或错误。（未经测试）

    public void AfterCommandSetup(DynamicCommandInstance cmd)
    {
        //do something...
    }
}
```

<br>

<br>

### 继承ICommandData

<br>

>继承此接口可获取到内部表示的指令注册信息。获取更多信息请查阅 [LLNET.DynamicCommand.Internal] 命名空间。

<br>

C#
```cs
using System;
using LLNET.DynamicCommand;

namespace Example;


[Command("examplecmd")]
public class ExampleCommand: Icommand, ICommandEvent
{
    public void Execute(CommandOrigin origin, CommandOutput output)
    {
    }

    //实现接口方法
    //在方法结束后动态指令实例便会被销毁
    //若想长期保存该实例，请使用DynamicCommandInstance.Release通用方法释放原始指针，并使用构造函数 DynamicCommandInstance(global::DynamicCommandInstance* p) 重新构造该实例。

    public void BeforeCommandSetup(CommandManager.CommandData cmdData, DynamicCommandInstance cmd)
    {
        //do something...
    }

    //setup之后的实例只建议进行查询等操作，试图调用改变当前实例的方法可能会造成一些未知的效果或错误。（未经测试）

    public void AfterCommandSetup(CommandManager.CommandData cmdData, DynamicCommandInstance cmd)
    {
        //do something...
    }
}
```





