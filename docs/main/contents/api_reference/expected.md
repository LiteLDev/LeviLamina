# Expected

`ll/api/Expected.h` · **Common**

## Overview

The Expected module provides LeviLamina's error handling primitives: `Expected<T>` (a value-or-error type based on `nonstd::expected`), `Error` (a polymorphic error container), and helper functions for creating and propagating errors.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/Expected.h` | `Expected<T>`, `Error`, `ErrorInfoBase`, and factory functions |

## Key Types

### Expected\<T\>

```cpp
namespace ll {
template <class T = void>
using Expected = nonstd::expected<T, ll::Error>;
}
```

- `Expected<T>` — holds either a value of type `T` or an `ll::Error`
- `Expected<>` — alias for `Expected<void>`, represents success or error without a value

### Error

A move-only error container wrapping a polymorphic `ErrorInfoBase`.

```cpp
namespace ll {
class Error {
public:
    Error() noexcept = default;
    Error(std::unique_ptr<ErrorInfoBase> info) noexcept;

    explicit operator bool() const noexcept; // true if error exists

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

Abstract base class for error details. Subclass this to create custom error types.

```cpp
namespace ll {
class ErrorInfoBase {
public:
    virtual ~ErrorInfoBase();
    virtual std::string message() const noexcept = 0;
};
}
```

### Built-in Error Types

| Type | Description |
|------|-------------|
| `StringError` | Wraps a `std::string` message |
| `ErrorCodeError` | Wraps a `std::error_code` |

## Factory Functions

```cpp
namespace ll {
// Create Unexpected from error subclass
template <std::derived_from<ErrorInfoBase> T, class... Args>
Unexpected makeError(Args&&... args) noexcept;

// Shorthand for string errors
Unexpected makeStringError(std::string str) noexcept;

// Shorthand for error_code errors
Unexpected makeErrorCodeError(std::error_code ec) noexcept;
Unexpected makeErrorCodeError(std::errc ec) noexcept;

// Capture current exception as error
Unexpected makeExceptionError(std::exception_ptr const& = std::current_exception()) noexcept;

// Forward an existing error
Unexpected forwardError(Error& err) noexcept;
}
```

## Usage

### Returning Errors

```cpp
#include "ll/api/Expected.h"

ll::Expected<int> divide(int a, int b) {
    if (b == 0) {
        return ll::makeStringError("Division by zero");
    }
    return a / b;
}
```

### Handling Errors

```cpp
#include "ll/api/Expected.h"
#include "ll/api/io/Logger.h"

void example(ll::io::Logger& logger) {
    auto result = divide(10, 0);
    if (!result) {
        result.error().log(logger);
        return;
    }
    logger.info("Result: {}", *result);
}
```

### Custom Error Types

```cpp
#include "ll/api/Expected.h"

struct FileNotFoundError : ll::ErrorInfoBase {
    std::string path;
    FileNotFoundError(std::string path) : path(std::move(path)) {}
    std::string message() const noexcept override {
        return "File not found: " + path;
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
            // Access err.path
        }
    }
}
```

### Propagating Errors

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
    // Do something that might fail
    return {}; // Success
}

ll::Expected<> initializeWithError() {
    return ll::makeStringError("Initialization failed");
}
```

## Related

- [IO & Logger](io.md) — `Error::log()` outputs to a Logger
- [Mod](mod.md) — Mod lifecycle callbacks return `Expected<>`
