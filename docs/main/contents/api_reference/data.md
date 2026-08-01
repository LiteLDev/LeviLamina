# Data

`ll/api/data/` · **Common**

## Overview

The Data module provides general-purpose data structures, including observable values, a LevelDB-based key-value store, dependency graphs, semantic versions, type-erased functions, cancellable callbacks, and thread-safe containers.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/data/Observable.h` | Shared observable value with explicit subscriptions |
| `ll/api/data/KeyValueDB.h` | LevelDB key-value database |
| `ll/api/data/DependencyGraph.h` | Dependency resolution graph |
| `ll/api/data/Version.h` | Semantic version type |
| `ll/api/data/AnyFunction.h` | Type-erased function container |
| `ll/api/data/CancellableCallback.h` | Cancellable async callback |
| `ll/api/data/ConcurrentPriorityQueue.h` | Thread-safe priority queue |
| `ll/api/data/TightPair.h` | Space-optimized pair |
| `ll/api/data/IndirectValue.h` | Pointer wrapper with value semantics |

## Key Classes

### Observable\<T\>

`Observable<T>` stores a value and synchronously notifies subscribers when that value changes. It is a general data API; it is not tied to UI. The data-driven UI module derives its typed observables from this template.

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

Copies share the same value, subscribers, and subscription ID sequence. Constructing a separate `Observable` creates independent state.

`setData()` compares the new value with the current value. An equal value is ignored; otherwise, the value is replaced and callbacks run synchronously before `setData()` returns. Callback exceptions are not swallowed: an exception propagates to the caller and stops the current notification pass.

`subscribe()` accepts move-only callbacks and returns an ID. The ID is not an RAII handle: discarding it does not unsubscribe the callback. A subscription remains active until `unsubscribe(id)` succeeds or the shared observable state is destroyed. An empty callback returns ID `0`, and `unsubscribe(0)` returns `false`.

```cpp
ll::data::Observable<int> count{0};
auto copy = count; // Shares state with count.

auto const subscription = count.subscribe([](int const& value) {
    // Called synchronously when the value changes.
});

copy.setData(1); // count.getData() is now 1; the callback runs once.
copy.setData(1); // Equal value: no callback.

bool removed = count.unsubscribe(subscription); // true
```

!!! warning

    `Observable<T>` does not provide internal locking. Synchronize concurrent access externally. Callbacks run directly while the subscription container is being traversed, so do not add or remove subscriptions on the same observable from one of its callbacks. Recursive `setData()` calls also execute immediately; avoid them unless that behavior is deliberately controlled.

`T` must be copyable for `getData()` and equality-comparable for `setData()`. See [Data-driven UI](data_driven_ui.md#ui-observables) for `ObservableBoolean`, `ObservableNumber`, `ObservableString`, and `ObservableUIRawMessage`.

### KeyValueDB

A persistent key-value store backed by LevelDB.

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

### Usage

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

    // Iterate all entries
    for (auto [key, value] : db.iter()) {
        // Process each key-value pair
    }
}
```

### Version

Semantic version type with comparison operators.

```cpp
#include "ll/api/data/Version.h"

ll::data::Version v{1, 2, 3};
ll::data::Version v2{1, 3, 0};
bool newer = v2 > v; // true
```

## Related

- [Config](config.md) — Uses reflection for serialization, can store config data
- [Mod](mod.md) — `Mod::getDataDir()` for database storage location
