# IO & Logger（日志系统）

`ll/api/io/` · **通用**

## 概述

IO 模块提供了线程安全的格式化日志系统，支持多个输出目标、日志级别和可自定义的格式化器。还包括文件 I/O 工具和流重定向。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/io/Logger.h` | 主日志类，支持 fmt 格式化 |
| `ll/api/io/LogLevel.h` | 日志严重性级别 |
| `ll/api/io/LoggerRegistry.h` | 日志实例管理 |
| `ll/api/io/Sink.h` | 日志输出目标接口 |
| `ll/api/io/FileSink.h` | 基于文件的日志输出，可选轮转 |
| `ll/api/io/ConsoleSink.h` | 控制台日志输出 |
| `ll/api/io/DefaultSinks.h` | 日志器默认使用的输出目标 |
| `ll/api/io/RotatePolicy.h` | 日志文件何时轮转、归档保留多久 |
| `ll/api/io/FileUtils.h` | 文件 I/O 工具 |
| `ll/api/io/StdoutRedirector.h` | 将 stdout 重定向到日志 |

## 核心类

### Logger

线程安全的日志器，支持 fmt 风格格式化。

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

## 使用方法

### 基本日志记录

```cpp
#include "ll/api/io/Logger.h"
#include "ll/api/mod/Mod.h"

void example(ll::mod::Mod& mod) {
    auto& logger = mod.getLogger();

    logger.info("服务器已启动");
    logger.warn("内存不足: {} MB", 128);
    logger.error("加载配置失败");
    logger.debug("玩家数量: {}", 5);
}
```

### 设置日志级别

```cpp
#include "ll/api/io/Logger.h"

void configureLogger(ll::io::Logger& logger) {
    // 仅记录警告及以上级别
    logger.setLevel(ll::io::LogLevel::Warn);

    // 在错误时自动刷新
    logger.setFlushLevel(ll::io::LogLevel::Error);
}
```

### 添加自定义输出目标

```cpp
#include "ll/api/io/Logger.h"
#include "ll/api/io/FileSink.h"
#include "ll/api/io/PatternFormatter.h"

void addFileSink(ll::io::Logger& logger) {
    auto fileSink = std::make_shared<ll::io::FileSink>(
        "logs/mymod.log",
        makePolymorphic<ll::io::PatternFormatter>("[{3:.3%F %T.} {2}][{1}] {0}", false)
    );
    logger.addSink(fileSink);
}
```

### 轮转日志文件

不传入 `RotatePolicy` 时，`FileSink` 只会一直追加，不做切分。`RotatePolicy{}` 的各项默认值本身就是一套
可直接使用的配置，所以通常只要把它传进去就够了。策略中的字段在三个不同时机被读取：`rotateOnOpen` 只在
打开文件时读取一次，`maxFileSize` 和 `interval` 在每条消息写入前判断，压缩与清理相关的设置则在归档产生
之后异步执行。

```cpp
#include "ll/api/io/FileSink.h"
#include "ll/api/io/PatternFormatter.h"
#include "ll/api/io/RotatePolicy.h"

void addRotatingFileSink(ll::io::Logger& logger) {
    ll::io::RotatePolicy policy{};
    policy.maxFileSize = 8ull * 1024 * 1024;             // 超过 8 MiB 时轮转
    policy.interval    = ll::io::RotateInterval::Daily;  // 跨天时也轮转
    policy.maxFiles    = 64;                             // 最多保留 64 个归档

    logger.addSink(
        std::make_shared<ll::io::FileSink>(
            "logs/mymod.log",
            makePolymorphic<ll::io::PatternFormatter>("[{3:.3%F %T.} {2}][{1}] {0}", false),
            policy
        )
    );
}
```

大小与时间两个触发条件相互独立，哪个先满足就由它触发轮转。归档命名形如 `2026-09-19.log`，同一周期内
的后续轮转依次加上 `.1`、`.2`。

`maxFiles`、`maxAgeDays` 和 `totalSizeCap` 各自独立生效，最终取并集删除，因此放宽其中一个不会让另外
两个失效；将任意一项设为 0 即关闭该维度，将 `cleanup` 设为 false 则完全不删除任何文件。清理只会处理
符合归档命名规则的文件，同目录下的其他文件不受影响。

归档会在后台线程中被 gzip 压缩，但最新的 `keepUncompressed` 个除外，它们保持明文，便于直接搜索最近的
日志而无需解压。由于 `totalSizeCap` 统计的是压缩后的体积，关闭 `compress` 会明显缩短该上限内能保留的
历史长度。

### 条件日志记录

```cpp
#include "ll/api/io/Logger.h"

void expensiveLogging(ll::io::Logger& logger) {
    if (logger.shouldLog(ll::io::LogLevel::Debug)) {
        // 仅在启用调试日志时计算
        auto debugInfo = computeExpensiveDebugInfo();
        logger.debug("调试信息: {}", debugInfo);
    }
}
```

### 格式字符串安全性

日志器使用 fmt 格式字符串，具有编译期检查：

```cpp
logger.info("玩家 {} 加入", playerName);           // 正确
logger.info("位置: ({}, {}, {})", x, y, z);        // 正确
// logger.info("值: {}", x, y);                    // 编译错误：参数过多
```

## 相关模块

- [Expected（错误处理）](expected.zh.md) — `Error::log()` 输出到 Logger
- [Mod（模组系统）](mod.zh.md) — `Mod::getLogger()` 返回模组的日志器
