# Data（数据结构）

`ll/api/data/` · **通用**

## 概述

Data 模块提供了实用的数据结构：基于 LevelDB 的键值存储、依赖图、语义版本类型、类型擦除函数容器、可取消回调和线程安全容器。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/data/KeyValueDB.h` | LevelDB 键值数据库 |
| `ll/api/data/DependencyGraph.h` | 依赖解析图 |
| `ll/api/data/Version.h` | 语义版本类型 |
| `ll/api/data/VersionRequirement.h` | 语义版本范围 |
| `ll/api/data/AnyFunction.h` | 类型擦除函数容器 |
| `ll/api/data/CancellableCallback.h` | 可取消异步回调 |
| `ll/api/data/ConcurrentPriorityQueue.h` | 线程安全优先队列 |
| `ll/api/data/TightPair.h` | 空间优化的 pair |
| `ll/api/data/IndirectValue.h` | 具有值语义的指针包装器 |

## 核心类

### KeyValueDB

由 LevelDB 支持的持久化键值存储。

```cpp
namespace ll::data {
class KeyValueDB {
public:
    explicit KeyValueDB(std::filesystem::path const& path);
    KeyValueDB(std::filesystem::path const& path, bool createIfMiss, bool fixIfError, int bloomFilterBit);

    std::optional<std::string> get(std::string_view key) const;
    bool has(std::string_view key) const;
    bool empty() const;
    bool set(std::string_view key, std::string_view val);
    bool del(std::string_view key);

    coro::Generator<std::pair<std::string_view, std::string_view>> iter() const;
};
}
```

### 使用方法

```cpp
#include "ll/api/data/KeyValueDB.h"
#include "ll/api/mod/Mod.h"

void useDatabase(ll::mod::Mod& mod) {
    ll::data::KeyValueDB db(mod.getDataDir() / "mydata");

    db.set("player_score", "100");

    auto score = db.get("player_score");
    if (score) {
        // *score == "100"
    }

    if (db.has("player_score")) {
        db.del("player_score");
    }

    // 迭代所有条目
    for (auto [key, value] : db.iter()) {
        // 处理每个键值对
    }
}
```

### Version

`Version` 严格解析 `major.minor.patch` 格式的语义版本。前置版本标识符参与优先级比较，构建元数据不参与。
需要把构建元数据也作为身份的一部分比较时，应使用 `isIdenticalTo()`。

```cpp
#include "ll/api/data/Version.h"

ll::data::Version current{"1.3.0-beta.1+windows.5"};
ll::data::Version release{"1.3.0"};

bool newer = release > current; // true
bool samePrecedence = ll::data::Version{"1.3.0+first"} == ll::data::Version{"1.3.0+second"}; // true
bool sameIdentity = ll::data::Version{"1.3.0+first"}.isIdenticalTo(ll::data::Version{"1.3.0+second"}); // false
```

### VersionRequirement

`VersionRequirement` 表示规范化后的语义版本范围。用空白分隔的比较条件属于同一个 AND 组，`||` 分隔 OR 组。
支持的比较符为 `=`、`>`、`>=`、`<` 和 `<=`。

| 语法 | 含义 |
|------|------|
| `=1.2.3` | 精确匹配 `1.2.3` |
| `>=1.2.0 <2.0.0` | 不低于 `1.2.0` 且低于 `2.0.0` |
| `^1.2.3` | 低于 `2.0.0` 的兼容更新 |
| `~1.2.3` | 低于 `1.3.0` 的补丁更新 |
| `1`、`1.2`、`1.2.x` | 部分版本或通配符范围 |
| `*`、`x`、`X` | 任意非前置版本 |
| `1.2.3 - 2.0.0` | 两端均包含的连字符区间 |
| `^1.2.3 || =2.0.0` | 匹配任一范围 |

```cpp
#include "ll/api/data/VersionRequirement.h"

ll::data::VersionRequirement supported{"^1.2.3 || =2.0.0"};
bool matches = supported.matches(ll::data::Version{"1.8.0"}); // true
```

普通范围不会意外匹配前置版本。若需要匹配前置版本，同一个 AND 组中必须有比较条件显式包含与候选版本
`major.minor.patch` 核心相同的前置版本。

为保持兼容，裸完整版本 `1.2.3` 当前仍表示 `>=1.2.3 <2.0.0`。从 mod manifest 读取这种写法时会输出迁移警告。
精确匹配请写成 `=1.2.3`，其他情况应显式写出目标范围。

## 相关模块

- [Config（配置系统）](config.zh.md) — 使用反射进行序列化，可存储配置数据
- [Mod（模组系统）](mod.zh.md) — `Mod::getDataDir()` 用于数据库存储位置
