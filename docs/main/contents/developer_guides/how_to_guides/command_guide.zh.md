# 命令指南

LeviLamina提供了一套易用的命令注册系统，分为编译期和运行时，本指南仅介绍编译期命令注册系统。如果你想要实现自己的脚本引擎，运行时命令注册对你可能有用，在本指南加入运行时命令注册的部分之前，你可以参考[LegacyScriptEngine的实现](https://github.com/LiteLDev/LegacyScriptEngine/blob/e14c9aa33b87e90c7aa1bbf2ab1ec2cc0bbedda3/src/legacy/api/CommandAPI.cpp#L231)
或是LeviLamina中的[CommandTest](https://github.com/LiteLDev/LeviLamina/blob/0e47aab32d734245c5ac42dd71b08b3eb77884f6/src-test/server/testCommand.cpp#L134)
。此外，LegacyScriptEngine是一个从LiteLoaderBDS v1就存在的脚本引擎，其中的很多做法已经过时。

## 使用方法

1. 引用必要的头文件
    ```cpp
    #include "ll/api/command/CommandHandle.h"
    #include "ll/api/command/CommandRegistrar.h"
    ```
2. 调用`CommandRegistrar::getInstance().getOrCreateCommand`方法获取或创建一个命令，并将其赋值为`auto& command`
3. 调用`command.overload`重载命令，如果你不需要一个可以传入参数的命令，可以不传入模板参数，比如: `command.overload()`
4. 调用`required`方法来添加一个必须的参数，该方法和`optional`方法需要传入对应结构中的变量名称。调用`optional`
   方法来添加一个可选参数，但需要注意判断用户是否传入了参数。调用
   `text`来添加一个子命令。其它方法可以参考`ll/api/command/Overload.h`和Intellisense。
5. 调用`execute`传入命令的回调函数，回调函数的参数可以参考下列示例

## 示例

```cpp
#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"

struct NewCommand {
    enum class NewEnum { a = 0, b = 1, c = 2 } enum1;
    std::string str;
    int         number = 1;
};

void registerCommand() {
    using namespace ll::command;
    auto& command = CommandRegistrar::getInstance().getOrCreateCommand("new", "A example command");
    command.overload<NewCommand>().text("test").required("enum1").required("str").optional("number").execute(
        [](CommandOrigin const& origin, CommandOutput& output, NewCommand const& param) {
            output.success("test! {} {} {}", param.enum1, param.str, param.number);
        }
    );
}
```

在此示例中，我们定义了一个名为`NewCommand`的结构，其中存储了命令的各项参数。通过`getOrCreateCommand`
方法创建了一个名为**new**的命令，通过`overload`方法重载了名为**text**的子命令、枚举、字符串和整数参数。在游戏中的效果如下:

```
/new test <enum1> <str> [number]
```