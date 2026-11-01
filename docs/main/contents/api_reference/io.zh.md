# IO & Logger（输入输出与日志）

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

    std::shared_ptr<SinkBase> setSink(std::string_view name, std::shared_ptr<SinkBase> sink) const;
    std::shared_ptr<SinkBase> removeSink(std::string_view name) const;
    std::shared_ptr<SinkBase> getSink(std::string_view name) const;
    void clearSinks() const;
    coro::Generator<std::pair<std::string_view, SinkBase&>> sinks() const;
};
}
```

Logger 按名称持有各个 sink。每个 logger 初始都带有一个名为 `"ll_default_console"` 的控制台
sink，以及一个名为 `"ll_default_file"`、写入 `logs/latest.log` 的 sink。

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
    logger.setSink("mymod", fileSink);
}
```

若同名的 sink 已经存在，`setSink` 会替换它并返回被替换掉的 sink；`removeSink` 则移除一个 sink 并将其
返回。

```cpp
#include "ll/api/io/ConsoleSink.h"
#include "ll/api/io/FileSink.h"
#include "ll/api/io/Logger.h"
#include "ll/api/io/PatternFormatter.h"

void customizeSinks(ll::io::Logger& logger) {
    // 只修改控制台输出的样式
    logger.setSink(
        "ll_default_console",
        std::make_shared<ll::io::ConsoleSink>(makePolymorphic<ll::io::PatternFormatter>("[{2}] {0}"))
    );

    // 改为写入模组自己的文件，而不是 logs/latest.log
    logger.setSink(
        "ll_default_file",
        std::make_shared<ll::io::FileSink>(
            "logs/mymod.log",
            makePolymorphic<ll::io::PatternFormatter>("[{3:.3%F %T.} {2}][{1}] {0}", false)
        )
    );
}
```

日志消息在后台线程中写入。`Logger::setFormatter` 和 `Logger::setFlushLevel` 会等待正在进行的写入，因此在
logger 使用期间，应优先使用它们或通过 `setSink` 替换 sink，而不是直接修改 `getSink` 返回的 sink。

`FileSink` 会使用规范化后的路径定位共享的文件状态。指向同一文件的 sink 会共享文件句柄、轮转状态和策略，
但每个 sink 保留自己的 formatter 和刷新级别。因此，不同 logger 可以向同一个文件写入不同格式的日志，而不
会互相覆盖 formatter。

### 轮转日志文件

不传入 `RotatePolicy` 时，`FileSink` 使用 `RotatePolicy::disabled()`，只会一直追加，不做切分。
`RotatePolicy{}` 的各项默认值本身就是一套可直接使用的配置，所以通常只要把它传进去就够了。策略中的字段在
三个不同时机被读取：`rotateOnOpen` 只在打开文件时读取一次，`maxFileSize` 和 `interval` 在每条消息写入前
判断，压缩与清理相关的设置则在归档产生之后异步执行。

| 字段 | 默认值 | 含义 |
|------|--------|------|
| `rotateOnOpen` | `true` | 打开已有内容的文件时先将其归档，让每次运行都从一个新文件开始 |
| `maxFileSize` | 32 MiB | 写入下一条消息会让文件超过该字节数时，先轮转再写入。单条消息不会被拆分，超过上限的消息会单独占一个文件。设为 `0` 关闭 |
| `interval` | `Daily` | 消息时间戳进入新的小时（`Hourly`）或新的一天（`Daily`）时轮转，`None` 关闭。判断依据是消息产生的时间，而不是写入文件的时间 |
| `compress` | `true` | 在后台线程中将归档压缩为 gzip，正在写入的文件不会被压缩 |
| `keepUncompressed` | `7` | 最新的这么多个归档保持明文，便于直接搜索最近的日志 |
| `cleanup` | `true` | 是否删除归档。为 `false` 时下面三项限制都不生效 |
| `maxFiles` | `1024` | 最多保留的归档数，压缩与未压缩的合并计数。设为 `0` 关闭 |
| `maxAgeDays` | `120` | 删除最后修改时间在这么多天之前的归档。设为 `0` 关闭 |
| `totalSizeCap` | 512 MiB | 从最旧的开始删除归档，直到磁盘上的总体积不超过该值。设为 `0` 关闭 |

| 字段 | 默认值 | 含义 |
|------|--------|------|
| `rotateOnOpen` | `true` | 打开文件时，如果里面还有上次运行留下的内容，就先把它归档 |
| `maxFileSize` | 32 MiB | 写入下一条消息会超过此大小时先轮转；0 表示关闭。单条消息不会被拆开，超大的消息会单独占一个文件 |
| `interval` | `Daily` | 按消息自身的时间跨过整点或日期时轮转；`None` 表示关闭 |
| `compress` | `true` | 在后台线程中用 gzip 压缩归档 |
| `keepUncompressed` | 7 | 最新的多少个归档保持不压缩 |
| `cleanup` | `true` | 是否允许清理删除文件 |
| `maxFiles` | 1024 | 最多保留的归档数；0 表示关闭 |
| `maxAgeDays` | 120 | 删除最后修改时间早于这么多天的归档；0 表示关闭 |
| `totalSizeCap` | 512 MiB | 从最旧的归档开始删除，直到磁盘上的总大小不超过此值；0 表示关闭 |

```cpp
#include "ll/api/io/FileSink.h"
#include "ll/api/io/PatternFormatter.h"
#include "ll/api/io/RotatePolicy.h"

void addRotatingFileSink(ll::io::Logger& logger) {
    ll::io::RotatePolicy policy{};
    policy.maxFileSize = 8ull * 1024 * 1024;             // 超过 8 MiB 时轮转
    policy.interval    = ll::io::RotateInterval::Daily;  // 跨天时也轮转
    policy.maxFiles    = 64;                             // 最多保留 64 个归档

    logger.setSink(
        "mymod",
        std::make_shared<ll::io::FileSink>(
            "logs/mymod.log",
            makePolymorphic<ll::io::PatternFormatter>("[{3:.3%F %T.} {2}][{1}] {0}", false),
            policy
        )
    );
}
```

大小与时间两个触发条件相互独立，哪个先满足就由它触发轮转。`setPolicy` 用于替换已有 sink 的策略，
`rotate` 会立即轮转（文件为空时什么都不做）。

`maxFiles`、`maxAgeDays` 和 `totalSizeCap` 各自独立生效，最终取并集删除，因此放宽其中一个不会让另外
两个失效。清理只会处理符合归档命名规则的文件，同目录下的其他文件不受影响。由于 `totalSizeCap` 统计的是
压缩后的体积，关闭 `compress` 会明显缩短该上限内能保留的历史长度。

归档名由 `namer` 生成，再加上当前文件的扩展名。默认的 `RotatePolicy::defaultNamer` 生成
`2026-09-19.log`，按小时轮转时为 `2026-09-19_14.log`，同一周期内的后续轮转依次加上 `.1`、`.2`。自定义
namer 会收到一个 `ArchiveNameInfo`：`time` 是触发轮转的时间，`index` 是本次轮转在当前周期内的序号（从
0 开始），`interval` 是策略的轮转周期。返回值必须以四位年份加 `-` 开头，否则压缩和清理都无法识别这些
归档。

`RotatePolicy` 继承自 `RotateConfig`，后者包含除 `namer` 以外的全部字段，因此可以反射到配置文件中。
LeviLamina 自己的 `logs/latest.log` 使用其配置中的 `logRotate` 作为轮转策略。

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
