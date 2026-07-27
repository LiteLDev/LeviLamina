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
| `ll/api/data/VersionRequirement.h` | Semantic version range |
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

    // Apply several updates atomically
    ll::data::KeyValueDB::WriteBatch batch;
    batch.set("player_score", "125").set("last_reward", "daily").del("pending_reward");
    db.write(batch);

    // Iterate all entries
    for (auto [key, value] : db.iter()) {
        // Process each key-value pair
    }
}
```

### Version

`Version` parses strict `major.minor.patch` semantic versions. Prerelease identifiers affect precedence, while build
metadata does not. Use `isIdenticalTo()` when build metadata is part of the identity you need to compare.

```cpp
#include "ll/api/data/Version.h"

ll::data::Version current{"1.3.0-beta.1+windows.5"};
ll::data::Version release{"1.3.0"};

bool newer = release > current; // true
bool samePrecedence = ll::data::Version{"1.3.0+first"} == ll::data::Version{"1.3.0+second"}; // true
bool sameIdentity = ll::data::Version{"1.3.0+first"}.isIdenticalTo(ll::data::Version{"1.3.0+second"}); // false
```

### VersionRequirement

`VersionRequirement` is a normalized semantic version range. Comparators separated by whitespace form an AND group;
`||` separates OR groups. Comparison operators are `=`, `>`, `>=`, `<`, and `<=`.

| Syntax | Meaning |
|--------|---------|
| `=1.2.3` | Exactly version `1.2.3` |
| `>=1.2.0 <2.0.0` | At least `1.2.0` and below `2.0.0` |
| `^1.2.3` | Compatible updates below `2.0.0` |
| `~1.2.3` | Patch updates below `1.3.0` |
| `1`, `1.2`, `1.2.x` | Partial or wildcard ranges |
| `*`, `x`, `X` | Any non-prerelease version |
| `1.2.3 - 2.0.0` | Inclusive hyphen range |
| `^1.2.3 || =2.0.0` | Either alternative |

```cpp
#include "ll/api/data/VersionRequirement.h"

ll::data::VersionRequirement supported{"^1.2.3 || =2.0.0"};
bool matches = supported.matches(ll::data::Version{"1.8.0"}); // true
```

A normal range does not match a prerelease unexpectedly. A comparator in the same AND group must explicitly mention a
prerelease with the candidate's `major.minor.patch` core.

For compatibility, a bare full version such as `1.2.3` currently means `>=1.2.3 <2.0.0`. This form emits a migration
warning when read from a mod manifest. Use `=1.2.3` for an exact requirement or write the intended range explicitly.

## Related

- [Config](config.md) — Uses reflection for serialization, can store config data
- [Mod](mod.md) — `Mod::getDataDir()` for database storage location
