# Hook API

## 作用

Hook API 用于在当前进程中安装函数 detour。

## 头文件

```cpp
#include <pl/memory/Hook.hpp>
```

## 类型

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

优先级数值越小，hook 链中越早执行。

## 函数

```cpp
int hook(FuncPtr target, FuncPtr detour, FuncPtr *originalFunc,
         HookPriority priority = HookPriority::Normal);

bool unhook(FuncPtr target, FuncPtr detour);
```

`hook()` 成功返回 `0`，参数无效或安装失败返回 `-1`。`originalFunc` 接收 detour
中继续调用链所需的函数指针。

## RAII 句柄

如果 hook 应在 `disable()` 或对象析构时自动移除，请使用
`pl::memory::HookHandle`。

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

## 常见错误

- `target`、`detour` 或 `originalFunc` 传入 `nullptr`。
- detour 签名没有和目标函数完全一致。
- 在 detour 中直接调用目标地址，导致递归。
- 目标模块和地址尚不可用时就安装 hook。
