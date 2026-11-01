# SDK 头文件与宏

## 公开头文件

SDK 只安装以下头文件：

```cpp
#include <pl/Config.hpp>
#include <pl/Export.hpp>
#include <pl/Input.hpp>
#include <pl/Logger.hpp>
#include <pl/Mod.hpp>
#include <pl/ModMenu.hpp>
#include <pl/memory/Hook.hpp>
#include <pl/memory/Patch.hpp>
#include <pl/memory/Signature.hpp>
```

## PL_EXPORT

`PL_EXPORT` 在支持的编译器上为符号设置默认可见性。大多数模组不需要直接使用；
只有需要给其它 native library 调用的符号才需要它。

```cpp
#include <pl/Export.hpp>

PL_EXPORT void customVisibleFunction();
```

## PL_REGISTER_MOD

`PL_REGISTER_MOD(Type, instanceExpr)` 注册生命周期对象。

```cpp
#include <pl/Mod.hpp>

class MyMod {
public:
  static MyMod &instance();

  bool load();
};

PL_REGISTER_MOD(MyMod, MyMod::instance())
```

在一个源文件中使用一次该宏。`instanceExpr` 必须返回或创建一个在进程生命周期内
保持有效的对象。

被注册类型必须提供 `bool load()`。`bool enable()`、`bool disable()` 和
`bool unload()` 可选。

## 命名

公开 SDK 遵循 Lamina C++ 风格：

| 项目 | 风格 |
| --- | --- |
| 文件和类型 | `UpperCamelCase` |
| 函数和变量 | `lowerCamelCase` |
| 私有成员 | `mUpperCamelCase` |
| 常量 | `UpperCamelCase` |
| 宏 | `UPPER_SNAKE_CASE` |
