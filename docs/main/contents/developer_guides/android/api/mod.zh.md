# Mod API

## 作用

Mod API 是原生模组的生命周期入口。它使用 `<pl/Mod.hpp>`、
`ll::mod::NativeMod::current()`，以及通过 `PL_REGISTER_MOD` 注册的长期存活 C++
对象。

## 头文件

```cpp
#include <pl/Mod.hpp>
```

## 注册

```cpp
#include <pl/Mod.hpp>

class MyMod {
public:
  static MyMod &instance();

  MyMod();

  [[nodiscard]] ll::mod::NativeMod &getSelf() const { return mSelf; }

  bool load();
  bool enable();
  bool disable();
  bool unload();

private:
  ll::mod::NativeMod &mSelf;
};

PL_REGISTER_MOD(MyMod, MyMod::instance())
```

```cpp
MyMod::MyMod() : mSelf(*ll::mod::NativeMod::current()) {}
```

`load()` 是必需的。`enable()`、`disable()`、`unload()` 是可选的；缺失时注册
helper 会按成功处理。

每个原生模组库在一个源文件中使用一次 `PL_REGISTER_MOD`。

## 生命周期

| 方法 | 建议职责 |
| --- | --- |
| `load()` | 读取配置、创建目录、准备模组自有状态。 |
| `enable()` | 注册 hook、input callback 和运行期 UI。 |
| `disable()` | 撤销面向游戏的行为并注销运行期 UI。 |
| `unload()` | 在 disable 后释放剩余 C++ 状态。 |

每个方法成功返回 `true`，失败返回 `false`。

## NativeMod

`ll::mod::NativeMod` 提供 manifest 元数据、包路径、Java VM、生命周期状态和模组
专属 logger。

```cpp
bool MyMod::load() {
  auto &self = getSelf();
  std::filesystem::create_directories(self.getConfigDir());
  self.getLogger().info("Loading {}", self.getName());
  return true;
}
```

常用成员：

| 成员 | 用途 |
| --- | --- |
| `getJavaVM()` | 当前 `JavaVM *`。 |
| `getLogger()` | 当前模组的 `pl::log::Logger`。 |
| `getId()` | 稳定的运行期模组 id。 |
| `getName()` | manifest 中的显示名。 |
| `getAuthor()` | manifest 中的作者。 |
| `getVersion()` | manifest 中的版本。 |
| `getEntryPath()` | 已解析的入口文件路径。 |
| `getEntryFileName()` | manifest 中的入口文件名。 |
| `getIconPath()` | 已解析的图标路径，未配置时为空路径。 |
| `getModDir()` | 模组包根目录。 |
| `getDataDir()` | `<mod root>/data`。 |
| `getConfigDir()` | `<mod root>/config`。 |
| `getResourceDir()` | `<mod root>/resources`。 |
| `getManifestPath()` | 已解析的 `manifest.json` 路径。 |
| `getLibraryPath()` | 已解析的 native library 路径。 |
| `getState()` | 当前原生模组生命周期状态。 |
| `isLoaded()` / `isEnabled()` / `isDisabled()` | 常用状态判断。 |

运行期 UI、浮动按钮和 HUD 覆盖层绘制见 [Mod Menu API](./mod_menu.md)。

## 注意

- 注册实例必须在进程生命周期内保持有效。
- 不要让异常跨越生命周期边界；捕获失败并返回 `false`。
- 用户可编辑配置应放在 `getSelf().getConfigDir()` 下。
