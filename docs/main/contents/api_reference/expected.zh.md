# Expected（错误处理）

`ll/api/Expected.h` · **通用**

## 概述

Expected 模块提供了 LeviLamina 的错误处理原语：`Expected<T>`（基于 `nonstd::expected` 的值或错误类型）、`Error`（多态错误容器）以及用于创建和传播错误的辅助函数。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/Expected.h` | `Expected<T>`、`Error`、`ErrorInfoBase` 及工厂函数 |

## 核心类型

### Expected\<T\>

```cpp
namespace ll {
template <class T = void>
using Expected = nonstd::expected<T, ll::Error>;
}
```

- `Expected<T>` — 持有类型 `T` 的值或 `ll::Error`
- `Expected<>` — `Expected<void>` 的别名，表示成功或错误（无返回值）

### Error

仅可移动的错误容器，包装多态 `ErrorInfoBase`。

```cpp
namespace ll {
class Error {
public:
    Error() noexcept = default;
    Error(std::unique_ptr<ErrorInfoBase> info) noexcept;

    explicit operator bool() const noexcept; // 有错误时为 true

    std::string message() const noexcept;

    template <class T> bool isA() noexcept;
    template <class T> T& as() noexcept;

    Error& join(Error) noexcept;

    Error const& log(io::Logger&, io::LogLevel = io::LogLevel::Error) const noexcept;
    Error const& log(CommandOutput&, CommandOutputMessageType = CommandOutputMessageType::Error) const noexcept;
};
}
```

### ErrorInfoBase

错误详情的抽象基类。子类化以创建自定义错误类型。

```cpp
namespace ll {
class ErrorInfoBase {
public:
    virtual ~ErrorInfoBase();
    virtual std::string message() const noexcept = 0;
};
}
```

### 内置错误类型

| 类型 | 说明 |
|------|------|
| `StringError` | 包装 `std::string` 消息 |
| `ErrorCodeError` | 包装 `std::error_code` |

## 工厂函数

```cpp
namespace ll {
// 从错误子类创建 Unexpected
template <std::derived_from<ErrorInfoBase> T, class... Args>
Unexpected makeError(Args&&... args) noexcept;

// 字符串错误的快捷方式
Unexpected makeStringError(std::string str) noexcept;

// error_code 错误的快捷方式
Unexpected makeErrorCodeError(std::error_code ec) noexcept;
Unexpected makeErrorCodeError(std::errc ec) noexcept;

// 将当前异常捕获为错误
Unexpected makeExceptionError(std::exception_ptr const& = std::current_exception()) noexcept;

// 转发现有错误
Unexpected forwardError(Error& err) noexcept;
}
```

## 使用方法

### 返回错误

```cpp
#include "ll/api/Expected.h"

ll::Expected<int> divide(int a, int b) {
    if (b == 0) {
        return ll::makeStringError("除以零");
    }
    return a / b;
}
```

### 处理错误

```cpp
#include "ll/api/Expected.h"
#include "ll/api/io/Logger.h"

void example(ll::io::Logger& logger) {
    auto result = divide(10, 0);
    if (!result) {
        result.error().log(logger);
        return;
    }
    logger.info("结果: {}", *result);
}
```

### 自定义错误类型

```cpp
#include "ll/api/Expected.h"

struct FileNotFoundError : ll::ErrorInfoBase {
    std::string path;
    FileNotFoundError(std::string path) : path(std::move(path)) {}
    std::string message() const noexcept override {
        return "文件未找到: " + path;
    }
};

ll::Expected<std::string> readFile(std::string const& path) {
    // ...
    return ll::makeError<FileNotFoundError>(path);
}

void handleError() {
    auto result = readFile("missing.txt");
    if (!result) {
        if (result.error().isA<FileNotFoundError>()) {
            auto& err = result.error().as<FileNotFoundError>();
            // 访问 err.path
        }
    }
}
```

### 传播错误

```cpp
#include "ll/api/Expected.h"

ll::Expected<int> computeSum(int a, int b) {
    auto x = divide(a, 2);
    if (!x) return ll::forwardError(x.error());

    auto y = divide(b, 3);
    if (!y) return ll::forwardError(y.error());

    return *x + *y;
}
```

### Void Expected

```cpp
#include "ll/api/Expected.h"

ll::Expected<> initialize() {
    // 做一些可能失败的操作
    return {}; // 成功
}

ll::Expected<> initializeWithError() {
    return ll::makeStringError("初始化失败");
}
```

## 相关模块

- [IO & Logger（日志系统）](io.zh.md) — `Error::log()` 输出到 Logger
- [Mod（模组系统）](mod.zh.md) — 模组生命周期回调返回 `Expected<>`
