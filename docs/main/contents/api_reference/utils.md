# Utils

`ll/api/utils/` · **Common**

## Overview

The Utils module provides various utility functions for system information, string manipulation, hashing, random number generation, file I/O, Base64 encoding, and error handling.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/utils/SystemUtils.h` | System info (OS, locale, env vars, module paths) |
| `ll/api/utils/StringUtils.h` | String splitting, replacing, case conversion |
| `ll/api/utils/HashUtils.h` | Hash utilities |
| `ll/api/utils/RandomUtils.h` | Random number generation |
| `ll/api/utils/ErrorUtils.h` | Error extraction and formatting |
| `ll/api/utils/StacktraceUtils.h` | Stack trace generation |
| `ll/api/utils/FontUtils.h` | Font enumeration |
| `ll/api/utils/FileUtils.h` | File I/O utilities |
| `ll/api/utils/Base64Utils.h` | Base64 encoding/decoding |

## Key Functions

### SystemUtils

```cpp
namespace ll::sys_utils {
std::string getSystemName();
std::string getSystemLocaleCode();
data::Version getSystemVersion();

void* getModuleHandle(void* addr);
std::filesystem::path getModulePath(void* addr);
std::string getModuleFileName(void* addr);

std::optional<std::string> getEnvironmentVariable(std::string_view name);
}
```

### StringUtils

```cpp
namespace ll::string_utils {
std::vector<std::string> splitByPattern(std::string_view str, std::string_view pattern);
std::string& replaceAll(std::string& str, std::string_view oldVal, std::string_view newVal);
std::string& toLower(std::string& str);
std::string& toUpper(std::string& str);
std::string toCamelCase(std::string_view str);
std::string toSnakeCase(std::string_view str);
}
```

### FileUtils

```cpp
namespace ll::file_utils {
std::optional<std::string> readFile(std::filesystem::path const& path);
bool writeFile(std::filesystem::path const& path, std::string_view content);
std::optional<data::Version> getVersion(std::filesystem::path const& path);
}
```

### HashUtils

```cpp
namespace ll::hash_utils {
size_t doHash(auto const&... args);

struct HashCombiner {
    size_t hash = 0;
    HashCombiner& add(auto const& val);
    operator size_t() const;
};
}
```

### RandomUtils

```cpp
namespace ll::random_utils {
int randomInt(int min, int max);
double randomReal(double min, double max);
}
```

### Base64Utils

```cpp
namespace ll::base64_utils {
std::string encode(std::string_view data);
std::string decode(std::string_view data);
}
```

## Usage

### System Information

```cpp
#include "ll/api/utils/SystemUtils.h"

void printSystemInfo() {
    auto osName = ll::sys_utils::getSystemName();
    auto locale = ll::sys_utils::getSystemLocaleCode();
    auto version = ll::sys_utils::getSystemVersion();
    
    // Get environment variable
    auto path = ll::sys_utils::getEnvironmentVariable("PATH");
}
```

### String Manipulation

```cpp
#include "ll/api/utils/StringUtils.h"

void stringOps() {
    std::string text = "Hello World";
    ll::string_utils::toLower(text);  // "hello world"
    
    auto parts = ll::string_utils::splitByPattern("a,b,c", ",");
    // parts == {"a", "b", "c"}
    
    std::string str = "foo bar foo";
    ll::string_utils::replaceAll(str, "foo", "baz");
    // str == "baz bar baz"
}
```

### File Operations

```cpp
#include "ll/api/utils/FileUtils.h"

void fileOps() {
    auto content = ll::file_utils::readFile("config.txt");
    if (content) {
        // Use *content
    }
    
    ll::file_utils::writeFile("output.txt", "Hello");
}
```

### Hashing

```cpp
#include "ll/api/utils/HashUtils.h"

void hashExample() {
    size_t hash = ll::hash_utils::doHash("key", 123, 45.6);
    
    ll::hash_utils::HashCombiner combiner;
    combiner.add("part1").add(42).add(3.14);
    size_t combined = combiner;
}
```

### Random Numbers

```cpp
#include "ll/api/utils/RandomUtils.h"

void randomExample() {
    int dice = ll::random_utils::randomInt(1, 6);
    double chance = ll::random_utils::randomReal(0.0, 1.0);
}
```

### Base64

```cpp
#include "ll/api/utils/Base64Utils.h"

void base64Example() {
    std::string encoded = ll::base64_utils::encode("Hello");
    std::string decoded = ll::base64_utils::decode(encoded);
}
```

## Related

- [IO & Logger](io.md) — File utilities complement logger file sinks
