# Command（命令系统）

`ll/api/command/` · **通用**

## 概述

Command 模块提供了在 Minecraft 基岩版中注册自定义命令的高级 API。支持类型化参数、枚举、软枚举（Soft Enum）、运行时枚举、命令别名、权限等级和重载。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/command/CommandRegistrar.h` | 命令注册器单例 |
| `ll/api/command/CommandHandle.h` | 单个命令的句柄，用于添加重载和别名 |
| `ll/api/command/Command.h` | 命令基类模板 |
| `ll/api/command/Overload.h` | 流式重载构建器，包含参数链 |
| `ll/api/command/OverloadData.h` | 重载元数据存储 |
| `ll/api/command/RuntimeOverload.h` | 动态运行时重载创建 |
| `ll/api/command/ParamTraits.h` | 参数类型信息和解析 |
| `ll/api/command/EnumName.h` | 命令参数的枚举到名称映射 |
| `ll/api/command/SoftEnum.h` | 软枚举包装类型 |
| `ll/api/command/Optional.h` | 可选参数包装器 |

## 核心类

### CommandRegistrar

管理所有命令注册的单例，通过 `getInstance()` 获取。

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

由 `getOrCreateCommand()` 返回。用于添加重载和别名。

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

用于定义命令参数和执行处理器的流式构建器。

```cpp
namespace ll::command {
template <reflection::Reflectable Params>
class Overload {
public:
    Overload& optional(ParamName name);   // 标记参数为可选
    Overload& required(ParamName name);   // 标记参数为必需
    Overload& text(std::string_view text); // 添加文本字面量

    template <class Fn>
    void execute(Fn&& fn);               // 设置执行回调
};
}
```

执行回调 `Fn` 可以有以下签名：

- `void(CommandOrigin const&, CommandOutput&, Params const&, ::Command const&)` — 完整上下文
- `void(CommandOrigin const&, CommandOutput&, Params const&)` — 带参数
- `void(CommandOrigin const&, CommandOutput&)` — 无参数
- `void()` — 无参数

## 使用方法

### 基本命令注册

```cpp
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/command/CommandHandle.h"

#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandPermissionLevel.h"

void registerMyCommand() {
    auto& cmd = ll::command::CommandRegistrar::getInstance(false)
        .getOrCreateCommand("hello", "打个招呼", CommandPermissionLevel::Any);

    cmd.overload().execute([](CommandOrigin const& origin, CommandOutput& output) {
        output.success("Hello, World!");
    });
}
```

### 带参数的命令

定义一个结构体，其成员将成为命令参数：

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
        .getOrCreateCommand("greet", "问候某人");

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

### 带枚举参数的命令

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

    // 注册枚举
    registrar.tryRegisterEnum<GameMode>();

    auto& cmd = registrar.getOrCreateCommand("setmode", "设置游戏模式");

    cmd.overload<ModeParams>()
        .required("mode")
        .execute([](CommandOrigin const& origin, CommandOutput& output, ModeParams const& params) {
            output.success("模式已设置为 {}", (int)params.mode);
        });
}
```

### 软枚举

软枚举允许在运行时动态添加/删除值：

```cpp
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/command/SoftEnum.h"

void registerDynamicEnum() {
    auto& registrar = ll::command::CommandRegistrar::getInstance(false);

    registrar.tryRegisterSoftEnum("warps", {"spawn", "home", "shop"});

    // 稍后，动态添加更多值
    registrar.addSoftEnumValues("warps", {"arena"});

    // 删除值
    registrar.removeSoftEnumValues("warps", {"shop"});
}
```

### 命令别名

```cpp
void registerWithAlias() {
    auto& cmd = ll::command::CommandRegistrar::getInstance(false)
        .getOrCreateCommand("teleport", "传送玩家");

    cmd.alias("tp");

    cmd.overload().execute([](CommandOrigin const& origin, CommandOutput& output) {
        output.success("正在传送...");
    });
}
```

### 多重载

```cpp
struct TeleportCoords {
    int x, y, z;
};

struct TeleportPlayer {
    std::string target;
};

void registerMultiOverload() {
    auto& cmd = ll::command::CommandRegistrar::getInstance(false)
        .getOrCreateCommand("warp", "传送命令");

    // 重载 1: /warp <x> <y> <z>
    cmd.overload<TeleportCoords>()
        .required("x").required("y").required("z")
        .execute([](CommandOrigin const&, CommandOutput& output, TeleportCoords const& p) {
            output.success("传送到 {}, {}, {}", p.x, p.y, p.z);
        });

    // 重载 2: /warp <target>
    cmd.overload<TeleportPlayer>()
        .required("target")
        .execute([](CommandOrigin const&, CommandOutput& output, TeleportPlayer const& p) {
            output.success("传送到玩家 {}", p.target);
        });
}
```

## 权限等级

| 等级 | 说明 |
|------|------|
| `CommandPermissionLevel::Any` | 所有玩家 |
| `CommandPermissionLevel::GameDirectors` | 管理员（OP） |
| `CommandPermissionLevel::Admin` | 服务器管理员 |
| `CommandPermissionLevel::Host` | 服务器主机 |
| `CommandPermissionLevel::Owner` | 服务器拥有者 |
| `CommandPermissionLevel::Internal` | 内部使用 |

## 相关模块

- [Event（事件系统）](event.zh.md) — `ExecuteCommandEvent` 用于拦截命令
- [操作指南：命令](../developer_guides/how_to_guides/command_guide.md) — 分步教程
