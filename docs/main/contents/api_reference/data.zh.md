# Data（数据结构）

`ll/api/data/` · **通用**

## 概述

Data 模块提供通用数据结构，包括可观察值、基于 LevelDB 的键值存储、依赖图、语义版本类型、类型擦除函数容器、可取消回调和线程安全容器。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/data/Observable.h` | 共享状态、显式取消订阅的可观察值 |
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

### Observable\<T\>

`Observable<T>` 保存一个值，并在值发生变化时同步通知订阅者。它是通用 Data API，不依赖 UI；数据驱动 UI 中的类型化 Observable 均继承自这个模板。

```cpp
#include "ll/api/data/Observable.h"

namespace ll::data {
template <class T>
class Observable {
public:
    using Callback       = brstd::move_only_function<void(T const&)>;
    using SubscriptionId = std::uint32_t;

    explicit Observable(T initial);

    T getData() const;
    void setData(T value);

    SubscriptionId subscribe(Callback callback);
    bool unsubscribe(SubscriptionId id);
};
}
```

复制 Observable 会共享同一份数据、订阅列表和订阅 ID 序列；重新构造一个 Observable 才会得到独立状态。

`setData()` 会比较新值与当前值。值相同时不做任何事；值不同时先替换数据，再同步执行回调，所有回调完成后 `setData()` 才返回。回调异常不会被吞掉：异常会继续抛给调用者，并终止本轮尚未执行的通知。

`subscribe()` 支持仅可移动回调，并返回订阅 ID。这个 ID 不是 RAII 句柄：丢弃返回值不会取消订阅。订阅会一直存在，直到 `unsubscribe(id)` 成功，或共享的 Observable 状态被销毁。传入空回调时返回 ID `0`，`unsubscribe(0)` 返回 `false`。

```cpp
ll::data::Observable<int> count{0};
auto copy = count; // 与 count 共享状态。

auto const subscription = count.subscribe([](int const& value) {
    // 值变化时同步执行。
});

copy.setData(1); // count.getData() 现在也是 1，回调执行一次。
copy.setData(1); // 值相同，不执行回调。

bool removed = count.unsubscribe(subscription); // true
```

!!! warning "注意"

    `Observable<T>` 内部不加锁，并发访问需要调用方自行同步。通知时会直接遍历订阅容器，因此不要在该 Observable 自己的回调里增删订阅。递归调用 `setData()` 也会立即进入下一轮通知；除非明确需要并能控制这种行为，否则应避免这样做。

为了支持 `getData()`，`T` 需要可复制；为了支持 `setData()` 的同值抑制，`T` 需要可比较相等。UI 派生类型 `ObservableBoolean`、`ObservableNumber`、`ObservableString` 和 `ObservableUIRawMessage` 见[数据驱动 UI](data_driven_ui.zh.md#ui-observable)。

### KeyValueDB

由 LevelDB 支持的持久化键值存储。

```cpp
namespace ll::data {
class KeyValueDB {
public:
    class WriteBatch {
    public:
        WriteBatch& set(std::string_view key, std::string_view val);
        WriteBatch& del(std::string_view key);
    };

    explicit KeyValueDB(std::filesystem::path const& path);
    KeyValueDB(std::filesystem::path const& path, bool createIfMiss, bool fixIfError, int bloomFilterBit);

    std::optional<std::string> get(std::string_view key) const;
    bool has(std::string_view key) const;
    bool empty() const;
    bool set(std::string_view key, std::string_view val);
    bool del(std::string_view key);
    bool write(WriteBatch const& batch);

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

    // 原子提交多个修改
    ll::data::KeyValueDB::WriteBatch batch;
    batch.set("player_score", "125").set("last_reward", "daily").del("pending_reward");
    db.write(batch);

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
