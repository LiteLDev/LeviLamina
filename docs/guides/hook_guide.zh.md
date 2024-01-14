# Hook指南

## 介绍

Hook 是一种在运行时修改函数行为的技术。通常用于在不修改源代码的情况下修改函数行为。

wikipedia 关于 Hook 的解释：[Hooking](https://en.wikipedia.org/wiki/Hooking)

在 LeviLamina 中，我们提供了封装好的Hook API，使得你可以快速便捷地对 Minecraft 基岩专用服务器（下文称为```BDS```）中的游戏函数进行行为修改。

## Hook的类型

在 [```ll/api/memory/Hook.h```](https://github.com/LiteLDev/LeviLamina/blob/develop/src/ll/api/memory/Hook.h#L180C1-L180C1) 中，我们定义了以下几种Hook 宏：

```cpp
#define LL_TYPE_STATIC_HOOK(DEF_TYPE, PRIORITY, TYPE, IDENTIFIER, RET_TYPE, ...)

#define LL_STATIC_HOOK(DEF_TYPE, PRIORITY, IDENTIFIER, RET_TYPE, ...)

#define LL_TYPE_INSTANCE_HOOK(DEF_TYPE, PRIORITY, TYPE, IDENTIFIER, RET_TYPE, ...)

#define LL_INSTANCE_HOOK(DEF_TYPE, PRIORITY, IDENTIFIER, RET_TYPE, ...)

#define LL_AUTO_TYPE_STATIC_HOOK(DEF_TYPE, PRIORITY, TYPE, IDENTIFIER, RET_TYPE, ...)

#define LL_AUTO_STATIC_HOOK(DEF_TYPE, PRIORITY, IDENTIFIER, RET_TYPE, ...)

#define LL_AUTO_TYPE_INSTANCE_HOOK(DEF_TYPE, PRIORITY, TYPE, IDENTIFIER, RET_TYPE, ...)

#define LL_AUTO_INSTANCE_HOOK(DEF_TYPE, PRIORITY, IDENTIFIER, RET_TYPE, ...)
```

其中，AUTO 标注的 Hook 会自动注册，即运行时自动调用hook()函数进行注册。
TYPED 标注的 Hook 会给你的 DEF_TYPE 继承到你指定的类型。

### STATIC_HOOK

针对静态函数的Hook。

### INSTANCE_HOOK

针对成员函数的Hook。

## Hook的参数解释

```DEF_TYPE```：你给你这个 Hook 的起的类型名。

```PRIORITY```：[Hook的优先级](https://github.com/LiteLDev/LeviLamina/blob/develop/src/ll/api/memory/Hook.h#L73)，例如```ll::memory::HookPriority::Normal```

!!! note
    一般不是特殊需求，我们不推荐过高的优先级，Normal 即可。

```TYPE```：你的定义的 DEF_TYPE 继承到的类型。

```IDENTIFIER```：Hook 的查询函数使用的标识符，可以为：[函数修饰后名称](https://learn.microsoft.com/zh-cn/cpp/build/reference/decorated-names?view=msvc-170)，函数的字节码，函数定义。

```RET_TYPE```：Hook 的函数的返回值类型。

```...```：Hook 的函数的参数列表。

## Hook的使用

你可以查阅静态程序分析工具，例如 IDA Pro，来获取你想要Hook的函数的符号或特征码。

或者查阅 LeviLamina 提供的[```Fake Header```](https://github.com/LiteLDev/LeviLamina/tree/develop/src/mc)来获取你想要 Hook 的函数的符号或者定义。

### 简单的Hook示例

```cpp
#include "ll/api/Logger.h"
#include "mc/server/common/DedicatedServer.h"

ll::Logger dedicatedServerLogger("DedicatedServer");

LL_AUTO_TYPE_INSTANCE_HOOK(
    DedicatedServerHook,
    ll::memory::HookPriority::Normal,
    DedicatedServer,
    "??0DedicatedServer@@QEAA@XZ",
    void
) {
    origin();
    dedicatedServerLogger.info("DedicatedServer::DedicatedServer");
}
```

这段代码会 Hook DedicatedServer 的构造函数，并在构造函数被调用时打印一条日志。

解析：

根据查阅 LeviLamina 提供的[```DedicatedServer.h```](https://github.com/LiteLDev/LeviLamina/blob/cccef6a0307cdcd89342d25f4826271ac298b6a8/src/mc/server/common/DedicatedServer.h#L59C31-L59C32) ，我们可以知道 DedicatedServer 的构造函数的符号为 ```??0DedicatedServer@@QEAA@XZ```。

又由于构造函数是类的成员函数，所以我们使用了 ```INSTANCE_HOOK```类型的 Hook，这使我们不需要填写由编译器产生的第一个[```this指针```](https://zh.cppreference.com/w/cpp/language/this)参数。

又由于我们希望在插件被加载的时候自动注册，所以我们使用了 ```AUTO```标注的 Hook。

最后由于方便，我们使用了 ```TYPE```标注的 Hook，使得我们可以直接在函数体内调用 DedicatedServer 类型下的函数，虽然在这段代码中我们并没有使用到，但是这是一个好习惯。

### Hook的注册和卸载

#### 注册

针对非自动注册的 Hook，你需要在你插件需要注册 Hook 的时机调用```hook()```函数进行注册。

#### 卸载

所有的 Hook 都会在 BDS 卸载时自动卸载，你也可以在你插件需要卸载 Hook 的时机调用```unhook()```函数进行卸载。

## 写在最后

Hook 是一种非常强大的技术，但是也是一把双刃剑，如果使用不当，可能会导致BDS本体崩溃，或者插件崩溃，严重的甚至会对存档产生影响。

所以请在使用 Hook 的时候一定要谨慎，仔细检查你的代码，避免出现不必要的错误。
