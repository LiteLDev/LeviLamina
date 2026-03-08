# IO & Logger

`ll/api/io/` · **Common**

## Overview

The IO module provides a thread-safe, formatted logging system with multiple sinks, log levels, and customizable formatters. It also includes file I/O utilities and stream redirection.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/io/Logger.h` | Main logger class with fmt formatting |
| `ll/api/io/LogLevel.h` | Log severity levels |
| `ll/api/io/LoggerRegistry.h` | Logger instance management |
| `ll/api/io/Sink.h` | Log output sink interface |
| `ll/api/io/FileSink.h` | File-based log sink |
| `ll/api/io/FileUtils.h` | File I/O utilities |
| `ll/api/io/StdoutRedirector.h` | Redirect stdout to logger |

## Key Classes

### Logger

Thread-safe logger with fmt-style formatting.

```cpp
namespace ll::io {
class Logger {
public:
    template <typename... Args>
    void log(LogLevel level, fmt::format_string<Args...> fmt, Args&&... args) const;

    template <typename... Args>
    void fatal(fmt::format_string<Args...> fmt, Args&&... args) const;
    template <typename... Args>
    void error(fmt::format_string<Args...> fmt, Args&&... args) const;
    template <typename... Args>
    void warn(fmt::format_string<Args...> fmt, Args&&... args) const;
    template <typename... Args>
    void info(fmt::format_string<Args...> fmt, Args&&... args) const;
    template <typename... Args>
    void debug(fmt::format_string<Args...> fmt, Args&&... args) const;
    template <typename... Args>
    void trace(fmt::format_string<Args...> fmt, Args&&... args) const;

    std::string const& getTitle() const noexcept;
    LogLevel getLevel() const noexcept;
    bool shouldLog(LogLevel level) const noexcept;

    void setLevel(LogLevel level);
    void setFlushLevel(LogLevel level);
    void setFormatter(Polymorphic<Formatter> formatter);
    void flush() const;
    void clearSink() const;
    size_t addSink(std::shared_ptr<SinkBase> sink) const;
    std::shared_ptr<SinkBase> getSink(size_t index) const;
    coro::Generator<SinkBase&> sinks() const;
};
}
```

### LogLevel

```cpp
enum class LogLevel : int {
    Off = -1,
    Fatal,
    Error,
    Warn,
    Info,
    Debug,
    Trace,
};
```

### LoggerRegistry

```cpp
namespace ll::io {
class LoggerRegistry {
public:
    static LoggerRegistry& getInstance();
    std::shared_ptr<Logger> getLogger(std::string_view name);
};
}
```

## Usage

### Basic Logging

```cpp
#include "ll/api/io/Logger.h"
#include "ll/api/mod/Mod.h"

void example(ll::mod::Mod& mod) {
    auto& logger = mod.getLogger();

    logger.info("Server started");
    logger.warn("Low memory: {} MB", 128);
    logger.error("Failed to load config");
    logger.debug("Player count: {}", 5);
}
```

### Setting Log Level

```cpp
#include "ll/api/io/Logger.h"

void configureLogger(ll::io::Logger& logger) {
    // Only log warnings and above
    logger.setLevel(ll::io::LogLevel::Warn);

    // Auto-flush on errors
    logger.setFlushLevel(ll::io::LogLevel::Error);
}
```

### Adding Custom Sinks

```cpp
#include "ll/api/io/Logger.h"
#include "ll/api/io/FileSink.h"

void addFileSink(ll::io::Logger& logger) {
    auto fileSink = std::make_shared<ll::io::FileSink>("logs/mymod.log");
    logger.addSink(fileSink);
}
```

### Conditional Logging

```cpp
#include "ll/api/io/Logger.h"

void expensiveLogging(ll::io::Logger& logger) {
    if (logger.shouldLog(ll::io::LogLevel::Debug)) {
        // Only compute this if debug logging is enabled
        auto debugInfo = computeExpensiveDebugInfo();
        logger.debug("Debug info: {}", debugInfo);
    }
}
```

### Format String Safety

The logger uses fmt format strings with compile-time checking:

```cpp
logger.info("Player {} joined", playerName);           // OK
logger.info("Position: ({}, {}, {})", x, y, z);        // OK
// logger.info("Value: {}", x, y);                     // Compile error: too many args
```

## Related

- [Expected](expected.md) — `Error::log()` outputs to a Logger
- [Mod](mod.md) — `Mod::getLogger()` returns the mod's logger
