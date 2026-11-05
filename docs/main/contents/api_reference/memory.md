# Memory & Hook

`ll/api/memory/` · **Common**

## Overview

The Memory module provides low-level memory manipulation, function hooking with priority control, signature scanning, and symbol resolution. It enables mods to intercept and modify game behavior at the binary level.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/memory/Hook.h` | Function hooking macros and registration |
| `ll/api/memory/Memory.h` | Memory manipulation utilities |
| `ll/api/memory/Signature.h` | Binary pattern matching |
| `ll/api/memory/Symbol.h` | Symbol name resolution |

## Key Functions

### Hook Registration

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

### Hook Macros

```cpp
// Static function hook
LL_STATIC_HOOK(HookName, HookPriority::Normal, ReturnType, FunctionPointer, ParamTypes...) {
    // Hook implementation
    // Call original: origin(args...)
}

// Instance method hook
LL_INSTANCE_HOOK(HookName, ClassName, HookPriority::Normal, ReturnType, &ClassName::MethodName, ParamTypes...) {
    // Hook implementation
    // Call original: origin(args...)
}

// Auto-hook (registers automatically)
LL_AUTO_STATIC_HOOK(HookName, ReturnType, FunctionPointer, ParamTypes...) {
    // ...
}

LL_AUTO_INSTANCE_HOOK(HookName, ClassName, ReturnType, &ClassName::MethodName, ParamTypes...) {
    // ...
}
```

### Memory Utilities

```cpp
namespace ll::memory {
// Make memory writable, execute callback, restore protection
void modify(void* ptr, size_t len, brstd::function_ref<void()> callback);

// Call function at address
template <class R = void, class... Args>
R addressCall(void const* address, auto&&... args);

// Call virtual method
template <class R = void, class... Args>
R virtualCall(void const* self, ptrdiff_t vIndex, auto&&... args);

// Access member at offset
template <class T>
T& dAccess(void* ptr, ptrdiff_t off);
}
```

## Usage

### Basic Hook

```cpp
#include "ll/api/memory/Hook.h"
#include "mc/server/ServerInstance.h"

LL_AUTO_STATIC_HOOK(
    ServerStartHook,
    void,
    &ServerInstance::start  // Function pointer
) {
    // Code before original
    origin();  // Call original function
    // Code after original
}
```

### Instance Method Hook

```cpp
#include "ll/api/memory/Hook.h"
#include "mc/world/actor/player/Player.h"

LL_AUTO_INSTANCE_HOOK(
    PlayerAttackHook,
    Player,
    void,
    &Player::attack,  // Method pointer
    Actor& target
) {
    // 'this' is the Player instance
    if (shouldAllowAttack(target)) {
        origin(target);  // Call original
    }
}
```

### Virtual Functions from a Secondary Base

On Windows, when a class overrides a virtual function inherited from a base other than its first one, the game calls
the override with `this` pointing at that base instead of at the start of the object. `ServerNetworkHandler`, for
example, gets its `handle` functions from `NetEventCallback`, which is not its first base, so the game calls them with
`this` 16 bytes into the object.

The Bedrock headers list these functions with `LL_VIRTUAL_THIS_BASE` after the class. When the hooked function is
listed, the instance hook macros move `this` back to the start of the object before your code runs and pass the base
pointer again in `origin`, so `this` is an ordinary `ServerNetworkHandler`:

```cpp
LL_AUTO_TYPE_INSTANCE_HOOK(
    ChatHook,
    ll::memory::HookPriority::Normal,
    ServerNetworkHandler,
    &ServerNetworkHandler::$handle,
    void,
    NetworkIdentifier const& identifier,
    TextPacket const&        packet
) {
    if (auto player = _getServerPlayer(identifier, packet.mSenderSubId)) {
        // ...
    }
    origin(identifier, packet);
}
```

`thisFor<T>()` keeps returning the right object, so hooks written before a function was listed still work. Do not
adjust `this` by hand. For a function the headers do not list yet, add the entry yourself at global namespace scope
before the hook, giving the class, the function, its signature and the base it comes from:

```cpp
LL_VIRTUAL_THIS_BASE(
    ::ServerNetworkHandler,
    $handle,
    void(::NetworkIdentifier const&, ::TextPacket const&),
    ::NetEventCallback
);
```

Wrap a class or base whose name contains a comma in `LL_VA_EXPAND(...)`.

### Hook with Priority

```cpp
LL_STATIC_HOOK(
    HighPriorityHook,
    ll::memory::HookPriority::High,
    bool,
    &SomeClass::someFunction  // Function pointer
) {
    // This runs before Normal priority hooks
    return origin();
}
```

### Memory Modification

```cpp
#include "ll/api/memory/Memory.h"

void patchMemory() {
    int* someValue = getValuePointer();
    
    ll::memory::modify(someValue, sizeof(int), [&] {
        *someValue = 42;  // Modify read-only memory
    });
}
```

### Virtual Function Call

```cpp
#include "ll/api/memory/Memory.h"

void callVirtual(void* obj) {
    // Call virtual function at index 5
    auto result = ll::memory::virtualCall<int>(obj, 5, arg1, arg2);
}
```

## Platform Notes

- Use function pointers (`&ClassName::method`) instead of symbol names
- Hook priority determines execution order (lower number = earlier)
- `LL_VIRTUAL_THIS_BASE` only takes effect on Windows; on Linux these functions already receive the whole object

## Related

- [How-to Guide: Hooks](../developer_guides/how_to_guides/hook_guide.md) — Step-by-step tutorial
- [How-to Guide: Finding Functions](../developer_guides/how_to_guides/find_function_guide.md) — Reverse engineering guide
