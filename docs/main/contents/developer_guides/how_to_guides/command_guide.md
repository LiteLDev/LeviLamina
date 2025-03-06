# Command Guide

LeviLamina provides an easy-to-use command registration system, divided into compile-time and runtime registration. This
guide only introduces the compile-time command registration system. If you want to implement your own scripting engine,
runtime command registration might be useful for you. Before this guide includes a section on runtime command
registration, you can refer to the implementation
of [LegacyScriptEngine](https://github.com/LiteLDev/LegacyScriptEngine/blob/e14c9aa33b87e90c7aa1bbf2ab1ec2cc0bbedda3/src/legacy/api/CommandAPI.cpp#L231)
or
the [CommandTest](https://github.com/LiteLDev/LeviLamina/blob/0e47aab32d734245c5ac42dd71b08b3eb77884f6/src-test/server/testCommand.cpp#L134)
in LeviLamina. Additionally, LegacyScriptEngine is a scripting engine that has existed since LiteLoaderBDS v1, and many
of its approaches are now outdated.

## Usage

1. Include the necessary header files:
    ```cpp
    #include "ll/api/command/CommandHandle.h"
    #include "ll/api/command/CommandRegistrar.h"
    ```
2. Call the `CommandRegistrar::getInstance().getOrCreateCommand` method to obtain or create a command and assign it to
   `auto& command`.
3. Call `command.overload` to overload the command. If you don't need a command that accepts parameters, you can omit
   the template parameters, for example: `command.overload()`.
4. Use the `required` method to add a mandatory parameter. This method and the `optional` method require passing the
   variable names from the corresponding structure. Use the `optional` method to add an optional parameter, but ensure
   to check whether the user has provided it. Call `text` to add a subcommand. Other methods can be referenced in
   `ll/api/command/Overload.h` and through Intellisense.
5. Call `execute` to pass in the command's callback function. The callback function parameters can be referenced in the
   example below.

## Example

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

In this example, we define a structure named `NewCommand`, which stores the command parameters. Using the
`getOrCreateCommand` method, we create a command named **new**. Through `overload` method, we overload a subcommand
named **text**,
along with an enumeration, a string, and an integer parameter. The in-game usage appears as follows:

```
/new test <enum1> <str> [number]
```

