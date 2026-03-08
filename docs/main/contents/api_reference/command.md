# Command

`ll/api/command/` · **Common**

## Overview

The Command module provides a high-level API for registering custom commands in Minecraft Bedrock Edition. It supports typed parameters, enums, soft enums, runtime enums, command aliases, permission levels, and overloads.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/command/CommandRegistrar.h` | Singleton command registrar |
| `ll/api/command/CommandHandle.h` | Per-command handle for adding overloads and aliases |
| `ll/api/command/Command.h` | Base command template |
| `ll/api/command/Overload.h` | Fluent overload builder with parameter chain |
| `ll/api/command/OverloadData.h` | Overload metadata storage |
| `ll/api/command/RuntimeOverload.h` | Dynamic runtime overload creation |
| `ll/api/command/ParamTraits.h` | Parameter type information and parsing |
| `ll/api/command/EnumName.h` | Enum-to-name mapping for command parameters |
| `ll/api/command/SoftEnum.h` | Soft enum wrapper type |
| `ll/api/command/Optional.h` | Optional parameter wrapper |

## Key Classes

### CommandRegistrar

Singleton that manages all command registrations. Accessed via `getInstance()`.

```cpp
namespace ll::command {
class CommandRegistrar {
public:
    static CommandRegistrar& getInstance(bool isClientSide);

    CommandHandle& getOrCreateCommand(
        std::string const&      name,
        std::string const&      description = {},
        CommandPermissionLevel  requirement = CommandPermissionLevel::Any,
        CommandFlag             flag        = CommandFlagValue::NotCheat,
        std::weak_ptr<mod::Mod> mod         = mod::NativeMod::current()
    );

    bool hasEnum(std::string const& name);
    bool tryRegisterEnum(name, values, type, parser);
    bool addEnumValues(name, values, type);

    template <std::is_enum T> bool tryRegisterEnum();
    template <std::is_enum T> bool tryRegisterRuntimeEnum();

    bool hasSoftEnum(std::string const& name);
    bool tryRegisterSoftEnum(name, values);
    bool addSoftEnumValues(name, values);
    bool removeSoftEnumValues(name, values);
    bool setSoftEnumValues(name, values);

    template <Specializes<SoftEnum> T> bool tryRegisterSoftEnum();
};
}
```

### CommandHandle

Returned by `getOrCreateCommand()`. Used to add overloads and aliases.

```cpp
namespace ll::command {
class CommandHandle {
public:
    template <reflection::Reflectable Params = EmptyParam>
    Overload<Params> overload(std::weak_ptr<mod::Mod> mod = mod::NativeMod::current());

    RuntimeOverload runtimeOverload(std::weak_ptr<mod::Mod> mod = mod::NativeMod::current());

    std::vector<std::string> alias() const;
    CommandHandle& alias(std::string_view alias);
};
}
```

### Overload\<Params\>

Fluent builder for defining command parameters and execution handler.

```cpp
namespace ll::command {
template <reflection::Reflectable Params>
class Overload {
public:
    Overload& optional(ParamName name);   // Mark parameter as optional
    Overload& required(ParamName name);   // Mark parameter as required
    Overload& text(std::string_view text); // Add a text literal

    template <class Fn>
    void execute(Fn&& fn);               // Set the execution callback
};
}
```

The execution callback `Fn` can have the following signatures:

- `void(CommandOrigin const&, CommandOutput&, Params const&, ::Command const&)` — Full context
- `void(CommandOrigin const&, CommandOutput&, Params const&)` — With parameters
- `void(CommandOrigin const&, CommandOutput&)` — Without parameters
- `void()` — No arguments

## Usage

### Basic Command Registration

```cpp
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/command/CommandHandle.h"

#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandPermissionLevel.h"

void registerMyCommand() {
    auto& cmd = ll::command::CommandRegistrar::getInstance(false)
        .getOrCreateCommand("hello", "Say hello", CommandPermissionLevel::Any);

    cmd.overload().execute([](CommandOrigin const& origin, CommandOutput& output) {
        output.success("Hello, World!");
    });
}
```

### Command with Parameters

Define a struct whose members become command parameters:

```cpp
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/Optional.h"

#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOutput.h"

struct GreetParams {
    std::string name;
    ll::command::Optional<int> count;
};

void registerGreetCommand() {
    auto& cmd = ll::command::CommandRegistrar::getInstance(false)
        .getOrCreateCommand("greet", "Greet someone");

    cmd.overload<GreetParams>()
        .required("name")
        .optional("count")
        .execute([](CommandOrigin const& origin, CommandOutput& output, GreetParams const& params) {
            int n = params.count.has_value() ? params.count.value() : 1;
            for (int i = 0; i < n; ++i) {
                output.success("Hello, {}!", params.name);
            }
        });
}
```

### Command with Enum Parameters

```cpp
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/command/CommandHandle.h"

enum class GameMode : int {
    Survival = 0,
    Creative = 1,
    Adventure = 2,
};

struct ModeParams {
    GameMode mode;
};

void registerModeCommand() {
    auto& registrar = ll::command::CommandRegistrar::getInstance(false);

    // Register the enum
    registrar.tryRegisterEnum<GameMode>();

    auto& cmd = registrar.getOrCreateCommand("setmode", "Set game mode");

    cmd.overload<ModeParams>()
        .required("mode")
        .execute([](CommandOrigin const& origin, CommandOutput& output, ModeParams const& params) {
            output.success("Mode set to {}", (int)params.mode);
        });
}
```

### Soft Enums

Soft enums allow values to be added/removed at runtime:

```cpp
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/command/SoftEnum.h"

void registerDynamicEnum() {
    auto& registrar = ll::command::CommandRegistrar::getInstance(false);

    registrar.tryRegisterSoftEnum("warps", {"spawn", "home", "shop"});

    // Later, add more values dynamically
    registrar.addSoftEnumValues("warps", {"arena"});

    // Remove values
    registrar.removeSoftEnumValues("warps", {"shop"});
}
```

### Command Aliases

```cpp
void registerWithAlias() {
    auto& cmd = ll::command::CommandRegistrar::getInstance(false)
        .getOrCreateCommand("teleport", "Teleport player");

    cmd.alias("tp");

    cmd.overload().execute([](CommandOrigin const& origin, CommandOutput& output) {
        output.success("Teleporting...");
    });
}
```

### Multiple Overloads

```cpp
struct TeleportCoords {
    int x, y, z;
};

struct TeleportPlayer {
    std::string target;
};

void registerMultiOverload() {
    auto& cmd = ll::command::CommandRegistrar::getInstance(false)
        .getOrCreateCommand("warp", "Warp command");

    // Overload 1: /warp <x> <y> <z>
    cmd.overload<TeleportCoords>()
        .required("x").required("y").required("z")
        .execute([](CommandOrigin const&, CommandOutput& output, TeleportCoords const& p) {
            output.success("Warping to {}, {}, {}", p.x, p.y, p.z);
        });

    // Overload 2: /warp <target>
    cmd.overload<TeleportPlayer>()
        .required("target")
        .execute([](CommandOrigin const&, CommandOutput& output, TeleportPlayer const& p) {
            output.success("Warping to player {}", p.target);
        });
}
```

## Permission Levels

| Level | Description |
|-------|-------------|
| `CommandPermissionLevel::Any` | All players |
| `CommandPermissionLevel::GameDirectors` | Operators (OP) |
| `CommandPermissionLevel::Admin` | Server admin |
| `CommandPermissionLevel::Host` | Server host |
| `CommandPermissionLevel::Owner` | Server owner |
| `CommandPermissionLevel::Internal` | Internal use |

## Related

- [Event](event.md) — `ExecuteCommandEvent` for intercepting commands
- [How-to Guide: Commands](../developer_guides/how_to_guides/command_guide.md) — Step-by-step tutorial
