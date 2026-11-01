# Memory Hook 示例

## 作用

这个示例用 `pl::memory::resolveSignature()` 解析目标，用
`pl::memory::HookHandle` 安装 hook，并在 `disable()` 或句柄析构时释放。

## 头文件

```cpp
#include <pl/memory/Hook.hpp>
#include <pl/memory/Signature.hpp>
```

## 示例

```cpp
#include <pl/Mod.hpp>
#include <pl/memory/Hook.hpp>
#include <pl/memory/Signature.hpp>

class MyMod {
public:
  bool enable() {
    const auto target = pl::memory::resolveSignature(
        "Game_update", "libminecraftpe.so");
    if (target == 0) {
      getSelf().getLogger().warn("Game_update was not found");
      return true;
    }

    mUpdateHook = pl::memory::HookHandle(
        reinterpret_cast<void *>(target),
        reinterpret_cast<void *>(&updateHook),
        reinterpret_cast<void **>(&mOriginalUpdate));
    return mUpdateHook.installed();
  }

  bool disable() {
    mUpdateHook.reset();
    return true;
  }

  [[nodiscard]] ll::mod::NativeMod &getSelf() const;

private:
  using UpdateFn = void (*)(void *);

  static void updateHook(void *self) {
    instance().mOriginalUpdate(self);
  }

  static MyMod &instance();

  UpdateFn mOriginalUpdate{};
  pl::memory::HookHandle mUpdateHook;
};
```

## 注意

- detour 签名必须和目标函数完全一致。
- hook handle 应存放在模组自有状态中，不要放在局部变量里。
- 优先使用明确的生命周期清理，不要依赖 constructor-time 自动注册。
