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
| `ll/api/io/FileSink.h` | File-based log sink, with optional rotation |
| `ll/api/io/ConsoleSink.h` | Console log sink |
| `ll/api/io/RotatePolicy.h` | When a log file rotates and how long archives are kept |
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

    bool addSink(std::string_view name, std::shared_ptr<SinkBase> sink) const;
    std::shared_ptr<SinkBase> setSink(std::string_view name, std::shared_ptr<SinkBase> sink) const;
    std::shared_ptr<SinkBase> removeSink(std::string_view name) const;
    std::shared_ptr<SinkBase> getSink(std::string_view name) const;
    void clearSinks() const;
    coro::Generator<std::pair<std::string_view, SinkBase&>> sinks() const;
};
}
```

A logger holds its sinks by name. Every logger starts out with a console sink named `"console"` and a
`logs/latest.log` sink named `"file"`.

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
#include "ll/api/io/PatternFormatter.h"

void addFileSink(ll::io::Logger& logger) {
    auto fileSink = std::make_shared<ll::io::FileSink>(
        "logs/mymod.log",
        makePolymorphic<ll::io::PatternFormatter>("[{3:.3%F %T.} {2}][{1}] {0}", false)
    );
    logger.addSink("mymod", fileSink);
}
```

`addSink` keeps a sink already held under the same name and returns false. To replace one, use
`setSink`, which returns the sink it replaced; `removeSink` drops one and hands it back.

```cpp
#include "ll/api/io/ConsoleSink.h"
#include "ll/api/io/FileSink.h"
#include "ll/api/io/Logger.h"
#include "ll/api/io/PatternFormatter.h"

void customizeSinks(ll::io::Logger& logger) {
    // Restyle the console output only
    logger.setSink(
        "console",
        std::make_shared<ll::io::ConsoleSink>(makePolymorphic<ll::io::PatternFormatter>("[{2}] {0}"))
    );

    // Write to a file of the mod's own instead of logs/latest.log
    logger.setSink(
        "file",
        std::make_shared<ll::io::FileSink>(
            "logs/mymod.log",
            makePolymorphic<ll::io::PatternFormatter>("[{3:.3%F %T.} {2}][{1}] {0}", false)
        )
    );
}
```

Messages are written on a background thread. `Logger::setFormatter` and `Logger::setFlushLevel` wait
for it, so prefer them, or replacing a sink with `setSink`, over changing a sink returned by `getSink`
while the logger is in use.

`FileSink` instances identify their shared file state by the normalized path. Sinks that point to the
same file therefore share its handle, rotation state and policy, while each sink keeps its own formatter
and flush level. Different loggers can write to one file with different formatting without replacing
one another's formatter.

### Rotating a Log File

A `FileSink` only appends unless it is given a `RotatePolicy`. `RotatePolicy{}`'s own defaults are
meant to be usable as they are, so passing one is normally all it takes. Its fields are read at three
different times: `rotateOnOpen` once when the file opens, `maxFileSize` and `interval` before every
message, and the compression and retention settings asynchronously after an archive is created.

```cpp
#include "ll/api/io/FileSink.h"
#include "ll/api/io/PatternFormatter.h"
#include "ll/api/io/RotatePolicy.h"

void addRotatingFileSink(ll::io::Logger& logger) {
    ll::io::RotatePolicy policy{};
    policy.maxFileSize = 8ull * 1024 * 1024;        // rotate past 8 MiB
    policy.interval    = ll::io::RotateInterval::Daily;  // and when the date changes
    policy.maxFiles    = 64;                        // keep at most 64 archives

    logger.addSink(
        "mymod",
        std::make_shared<ll::io::FileSink>(
            "logs/mymod.log",
            makePolymorphic<ll::io::PatternFormatter>("[{3:.3%F %T.} {2}][{1}] {0}", false),
            policy
        )
    );
}
```

The size and time triggers are independent, so whichever comes first rotates the file. Archives are
named `2026-09-19.log`, with `.1`, `.2` and so on for later rotations within the same interval.

`maxFiles`, `maxAgeDays` and `totalSizeCap` each contribute independently and their results are
unioned, so widening one never disables another; set any of them to 0 to drop that limit, or set
`cleanup` to false to stop deleting anything. Retention only ever considers files matching the
archive naming scheme, so unrelated files in the same directory are left alone.

Archives are gzip compressed on a background thread, except for the newest `keepUncompressed` of
them, which stay plain so recent output remains greppable without unpacking it. Since `totalSizeCap`
weighs compressed sizes, turning `compress` off shortens how much history fits within it.

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
