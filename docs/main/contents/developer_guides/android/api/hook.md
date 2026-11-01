# Hook API

## Purpose

Hook API installs function detours in the current process.

## Header

```cpp
#include <pl/memory/Hook.hpp>
```

## Types

```cpp
namespace pl::memory {
using FuncPtr = void *;

enum class HookPriority : int {
  Highest = 0,
  High = 100,
  Normal = 200,
  Low = 300,
  Lowest = 400,
};
}
```

Lower priority values run earlier in the hook chain.

## Functions

```cpp
int hook(FuncPtr target, FuncPtr detour, FuncPtr *originalFunc,
         HookPriority priority = HookPriority::Normal);

bool unhook(FuncPtr target, FuncPtr detour);
```

`hook()` returns `0` on success and `-1` on invalid input or install failure.
`originalFunc` receives the function pointer that the detour should call to
continue the chain.

## RAII Handle

Use `pl::memory::HookHandle` when a hook should be removed automatically during
`disable()` or object destruction.

```cpp
#include <pl/memory/Hook.hpp>

using UpdateFn = void (*)(void *);

class MyMod {
public:
  bool enable();
  bool disable();

private:
  static void updateHook(void *self);

  UpdateFn mOriginalUpdate{};
  pl::memory::HookHandle mUpdateHook;
};

bool MyMod::enable() {
  void *target = /* resolved target address */;
  mUpdateHook = pl::memory::HookHandle(
      target, reinterpret_cast<void *>(&updateHook),
      reinterpret_cast<void **>(&mOriginalUpdate),
      pl::memory::HookPriority::Normal);
  return mUpdateHook.installed();
}

bool MyMod::disable() {
  mUpdateHook.reset();
  return true;
}
```

## Common Mistakes

- Passing `nullptr` for `target`, `detour`, or `originalFunc`.
- Using a detour signature that does not exactly match the target function.
- Calling the target address directly inside the detour, causing recursion.
- Installing before the target module and address are available.
