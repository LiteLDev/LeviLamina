#pragma once

#include <memory>
#include <string>
#include <string_view>
#include <utility>

#if _HAS_CXX23
#include <expected>
#endif

#include "ll/api/base/Concepts.h" // IWYU pragma: keep
#include "ll/api/base/Macro.h"
#include "ll/api/coro/Generator.h"
#include "ll/api/io/LogLevel.h"
#include "ll/api/io/Sink.h"

#include "fmt/chrono.h" // IWYU pragma: keep
#include "fmt/color.h"
#include "fmt/core.h"
#include "fmt/format.h"
#include "fmt/os.h"     // IWYU pragma: keep
#include "fmt/ranges.h" // IWYU pragma: keep
#include "fmt/std.h"    // IWYU pragma: keep


namespace ll::io {
class LoggerRegistry;
class Logger : public std::enable_shared_from_this<Logger> {
    LLAPI void printStr(LogLevel, std::string&&) const noexcept;

    friend LoggerRegistry;

    struct Impl;

    std::unique_ptr<Impl> impl;

    struct PrivateTag {
        explicit PrivateTag() = default;
    };

public:
    template <typename... Args>
    void log(LogLevel level, fmt::format_string<Args...> fmt, Args&&... args) const {
        if (shouldLog(level)) printStr(level, fmt::vformat(fmt.get(), fmt::make_format_args(args...)));
    }
    void log(LogLevel level, std::string&& msg) const {
        if (shouldLog(level)) printStr(level, std::move(msg));
    }
    template <ll::concepts::IsString S>
    void log(LogLevel level, S const& msg) const {
        if (shouldLog(level)) printStr(level, std::string{msg});
    }

    template <typename... Args>
    void fatal(fmt::format_string<Args...> fmt, Args&&... args) const {
        log(LogLevel::Fatal, fmt, std::forward<Args>(args)...);
    }
    void fatal(std::string&& msg) const { log(LogLevel::Fatal, std::move(msg)); }
    template <ll::concepts::IsString S>
    void fatal(S const& msg) const {
        log(LogLevel::Fatal, msg);
    }

    template <typename... Args>
    void error(fmt::format_string<Args...> fmt, Args&&... args) const {
        log(LogLevel::Error, fmt, std::forward<Args>(args)...);
    }
    void error(std::string&& msg) const { log(LogLevel::Error, std::move(msg)); }
    template <ll::concepts::IsString S>
    void error(S const& msg) const {
        log(LogLevel::Error, msg);
    }

    template <typename... Args>
    void warn(fmt::format_string<Args...> fmt, Args&&... args) const {
        log(LogLevel::Warn, fmt, std::forward<Args>(args)...);
    }
    void warn(std::string&& msg) const { log(LogLevel::Warn, std::move(msg)); }
    template <ll::concepts::IsString S>
    void warn(S const& msg) const {
        log(LogLevel::Warn, msg);
    }

    template <typename... Args>
    void info(fmt::format_string<Args...> fmt, Args&&... args) const {
        log(LogLevel::Info, fmt, std::forward<Args>(args)...);
    }
    void info(std::string&& msg) const { log(LogLevel::Info, std::move(msg)); }
    template <ll::concepts::IsString S>
    void info(S const& msg) const {
        log(LogLevel::Info, msg);
    }

    template <typename... Args>
    void debug(fmt::format_string<Args...> fmt, Args&&... args) const {
        log(LogLevel::Debug, fmt, std::forward<Args>(args)...);
    }
    void debug(std::string&& msg) const { log(LogLevel::Debug, std::move(msg)); }
    template <ll::concepts::IsString S>
    void debug(S const& msg) const {
        log(LogLevel::Debug, msg);
    }

    template <typename... Args>
    void trace(fmt::format_string<Args...> fmt, Args&&... args) const {
        log(LogLevel::Trace, fmt, std::forward<Args>(args)...);
    }
    void trace(std::string&& msg) const { log(LogLevel::Trace, std::move(msg)); }
    template <ll::concepts::IsString S>
    void trace(S const& msg) const {
        log(LogLevel::Trace, msg);
    }

    LLAPI ~Logger();

    explicit Logger(PrivateTag, std::string_view);

    LLNDAPI std::string const& getTitle() const noexcept;

    LLNDAPI LogLevel getLevel() const noexcept;

    LLNDAPI bool shouldLog(LogLevel level) const noexcept;

    LLAPI void setLevel(LogLevel level);

    LLAPI void setFlushLevel(LogLevel level);

    LLAPI void setFormatter(Polymorphic<Formatter> formatter);

    LLAPI void flush() const;

    LLAPI void clearSink() const;

    LLAPI size_t addSink(std::shared_ptr<SinkBase> sink) const;

    LLAPI std::shared_ptr<SinkBase> getSink(size_t index) const;

    LLNDAPI coro::Generator<SinkBase&> sinks() const;
};
} // namespace ll::io
