# Memory & Hook（内存与钩子）

`ll/api/memory/` · **通用**

## 概述

Memory 模块提供了底层内存操作、带优先级控制的函数钩子、签名扫描和符号解析。它使模组能够在二进制层面拦截和修改游戏行为。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/memory/Hook.h` | 函数钩子宏和注册 |
| `ll/api/memory/Memory.h` | 内存操作工具 |
| `ll/api/memory/Signature.h` | 二进制模式匹配 |
| `ll/api/memory/Symbol.h` | 符号名称解析 |

## 核心函数

### 钩子注册

```cpp
namespace ll::memory {
enum class HookPriority {
    Highest = 0,
    High    = 100,
    Normal  = 200,
    Low     = 300,
    Lowest  = 400,
};

int hook(
    void* target,
    void* detour,
    void** originalFunc,
    HookPriority priority = HookPriority::Normal,
    bool suspendThreads = true
);

bool unhook(void* target, void* detour, bool suspendThreads = true);
}
```

### 钩子宏

```cpp
// 静态函数钩子
LL_STATIC_HOOK(HookName, HookPriority::Normal, ReturnType, FunctionPointer, ParamTypes...) {
    // 钩子实现
    // 调用原函数: origin(args...)
}

// 实例方法钩子
LL_INSTANCE_HOOK(HookName, ClassName, HookPriority::Normal, ReturnType, &ClassName::MethodName, ParamTypes...) {
    // 钩子实现
    // 调用原函数: origin(args...)
}

// 自动钩子（自动注册）
LL_AUTO_STATIC_HOOK(HookName, ReturnType, FunctionPointer, ParamTypes...) {
    // ...
}

LL_AUTO_INSTANCE_HOOK(HookName, ClassName, ReturnType, &ClassName::MethodName, ParamTypes...) {
    // ...
}
```

### 内存工具

```cpp
namespace ll::memory {
// 使内存可写，执行回调，恢复保护
void modify(void* ptr, size_t len, brstd::function_ref<void()> callback);

// 调用地址处的函数
template <class R = void, class... Args>
R addressCall(void const* address, auto&&... args);

// 调用虚函数
template <class R = void, class... Args>
R virtualCall(void const* self, ptrdiff_t vIndex, auto&&... args);

// 访问偏移处的成员
template <class T>
T& dAccess(void* ptr, ptrdiff_t off);
}
```

## 使用方法

### 基本钩子

```cpp
#include "ll/api/memory/Hook.h"
#include "mc/server/ServerInstance.h"

LL_AUTO_STATIC_HOOK(
    ServerStartHook,
    void,
    &ServerInstance::start  // 函数指针
) {
    // 原函数之前的代码
    origin();  // 调用原函数
    // 原函数之后的代码
}
```

### 实例方法钩子

```cpp
#include "ll/api/memory/Hook.h"
#include "mc/world/actor/player/Player.h"

LL_AUTO_INSTANCE_HOOK(
    PlayerAttackHook,
    Player,
    void,
    &Player::attack,  // 方法指针
    Actor& target
) {
    // 'this' 是 Player 实例
    if (shouldAllowAttack(target)) {
        origin(target);  // 调用原函数
    }
}
```

### 带优先级的钩子

```cpp
LL_STATIC_HOOK(
    HighPriorityHook,
    ll::memory::HookPriority::High,
    bool,
    &SomeClass::someFunction  // 函数指针
) {
    // 在 Normal 优先级钩子之前运行
    return origin();
}
```

### 内存修改

```cpp
#include "ll/api/memory/Memory.h"

void patchMemory() {
    int* someValue = getValuePointer();
    
    ll::memory::modify(someValue, sizeof(int), [&] {
        *someValue = 42;  // 修改只读内存
    });
}
```

### 虚函数调用

```cpp
#include "ll/api/memory/Memory.h"

void callVirtual(void* obj) {
    // 调用索引为 5 的虚函数
    auto result = ll::memory::virtualCall<int>(obj, 5, arg1, arg2);
}
```

## 平台说明

- 使用函数指针（`&ClassName::method`）而不是符号名称
- 钩子优先级决定执行顺序（数字越小越早执行）

## 相关模块

- [操作指南：钩子](../developer_guides/how_to_guides/hook_guide.md) — 分步教程
- [操作指南：查找函数](../developer_guides/how_to_guides/find_function_guide.md) — 逆向工程指南
