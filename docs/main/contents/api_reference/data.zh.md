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

具有比较运算符的语义版本类型。

```cpp
#include "ll/api/data/Version.h"

ll::data::Version v{1, 2, 3};
ll::data::Version v2{1, 3, 0};
bool newer = v2 > v; // true
```

## 相关模块

- [Config（配置系统）](config.zh.md) — 使用反射进行序列化，可存储配置数据
- [Mod（模组系统）](mod.zh.md) — `Mod::getDataDir()` 用于数据库存储位置
