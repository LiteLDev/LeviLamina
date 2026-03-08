# Utils（工具函数）

`ll/api/utils/` · **通用**

## 概述

Utils 模块提供了各种实用函数，包括系统信息、字符串操作、哈希、随机数生成、文件 I/O、Base64 编码和错误处理。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/utils/SystemUtils.h` | 系统信息（操作系统、语言环境、环境变量、模块路径） |
| `ll/api/utils/StringUtils.h` | 字符串分割、替换、大小写转换 |
| `ll/api/utils/HashUtils.h` | 哈希工具 |
| `ll/api/utils/RandomUtils.h` | 随机数生成 |
| `ll/api/utils/ErrorUtils.h` | 错误提取和格式化 |
| `ll/api/utils/StacktraceUtils.h` | 堆栈跟踪生成 |
| `ll/api/utils/FontUtils.h` | 字体枚举 |
| `ll/api/utils/FileUtils.h` | 文件 I/O 工具 |
| `ll/api/utils/Base64Utils.h` | Base64 编码/解码 |

## 核心函数

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

## 使用方法

### 系统信息

```cpp
#include "ll/api/utils/SystemUtils.h"

void printSystemInfo() {
    auto osName = ll::sys_utils::getSystemName();
    auto locale = ll::sys_utils::getSystemLocaleCode();
    auto version = ll::sys_utils::getSystemVersion();
    
    // 获取环境变量
    auto path = ll::sys_utils::getEnvironmentVariable("PATH");
}
```

### 字符串操作

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

### 文件操作

```cpp
#include "ll/api/utils/FileUtils.h"

void fileOps() {
    auto content = ll::file_utils::readFile("config.txt");
    if (content) {
        // 使用 *content
    }
    
    ll::file_utils::writeFile("output.txt", "Hello");
}
```

### 哈希

```cpp
#include "ll/api/utils/HashUtils.h"

void hashExample() {
    size_t hash = ll::hash_utils::doHash("key", 123, 45.6);
    
    ll::hash_utils::HashCombiner combiner;
    combiner.add("part1").add(42).add(3.14);
    size_t combined = combiner;
}
```

### 随机数

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

## 相关模块

- [IO & Logger（日志系统）](io.zh.md) — 文件工具补充日志文件输出
