# Data

`ll/api/data/` · **Common**

## Overview

The Data module provides utility data structures: a LevelDB-based key-value store, dependency graph, semantic version type, type-erased function containers, cancellable callbacks, and thread-safe containers.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/data/KeyValueDB.h` | LevelDB key-value database |
| `ll/api/data/DependencyGraph.h` | Dependency resolution graph |
| `ll/api/data/Version.h` | Semantic version type |
| `ll/api/data/AnyFunction.h` | Type-erased function container |
| `ll/api/data/CancellableCallback.h` | Cancellable async callback |
| `ll/api/data/ConcurrentPriorityQueue.h` | Thread-safe priority queue |
| `ll/api/data/TightPair.h` | Space-optimized pair |
| `ll/api/data/IndirectValue.h` | Pointer wrapper with value semantics |

## Key Classes

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
