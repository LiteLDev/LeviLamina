#pragma once

#include <array>
#include <filesystem>
#include <fstream>
#include <functional>
#include <mutex>
#include <optional>
#include <string>
#include <string_view>
#include <utility>

#include "ll/api/base/Concepts.h" // IWYU pragma: keep
#include "ll/api/base/Macro.h"
#include "ll/api/io/LogLevel.h"

#include "fmt/chrono.h" // IWYU pragma: keep
#include "fmt/color.h"
#include "fmt/core.h"
#include "fmt/format.h"
#include "fmt/os.h"     // IWYU pragma: keep
#include "fmt/ranges.h" // IWYU pragma: keep
#include "fmt/std.h"    // IWYU pragma: keep


namespace ll::io {
class Logger {
    LLAPI void print(LogLevel, std::string_view) const noexcept;

    struct Impl;

    std::unique_ptr<Impl> impl;

public:
    template <typename... Args>
    void log(LogLevel level, fmt::format_string<Args...> fmt, Args&&... args) const {
        print(level, fmt::vformat(fmt.get(), fmt::make_format_args(args...)));
    }
    template <ll::concepts::IsString S>
    void log(LogLevel level, S const& msg) const {
        print(level, msg);
    }

    template <typename... Args>
    void fatal(fmt::format_string<Args...> fmt, Args&&... args) const {
        print(LogLevel::Fatal, fmt::vformat(fmt.get(), fmt::make_format_args(args...)));
    }
    template <ll::concepts::IsString S>
    void fatal(S const& msg) const {
        print(LogLevel::Fatal, msg);
    }

    template <typename... Args>
    void error(fmt::format_string<Args...> fmt, Args&&... args) const {
        print(LogLevel::Error, fmt::vformat(fmt.get(), fmt::make_format_args(args...)));
    }
    template <ll::concepts::IsString S>
    void error(S const& msg) const {
        print(LogLevel::Error, msg);
    }

    template <typename... Args>
    void warn(fmt::format_string<Args...> fmt, Args&&... args) const {
        print(LogLevel::Warn, fmt::vformat(fmt.get(), fmt::make_format_args(args...)));
    }
    template <ll::concepts::IsString S>
    void warn(S const& msg) const {
        print(LogLevel::Warn, msg);
    }

    template <typename... Args>
    void info(fmt::format_string<Args...> fmt, Args&&... args) const {
        print(LogLevel::Info, fmt::vformat(fmt.get(), fmt::make_format_args(args...)));
    }
    template <ll::concepts::IsString S>
    void info(S const& msg) const {
        print(LogLevel::Info, msg);
    }

    template <typename... Args>
    void debug(fmt::format_string<Args...> fmt, Args&&... args) const {
        print(LogLevel::Debug, fmt::vformat(fmt.get(), fmt::make_format_args(args...)));
    }
    template <ll::concepts::IsString S>
    void debug(S const& msg) const {
        print(LogLevel::Debug, msg);
    }

    template <typename... Args>
    void trace(fmt::format_string<Args...> fmt, Args&&... args) const {
        print(LogLevel::Trace, fmt::vformat(fmt.get(), fmt::make_format_args(args...)));
    }
    template <ll::concepts::IsString S>
    void trace(S const& msg) const {
        print(LogLevel::Trace, msg);
    }

    LLNDAPI explicit Logger();
    LLAPI ~Logger();

    LLNDAPI explicit Logger(std::string_view title);

    LLAPI void setTitle(std::string_view title);
};
} // namespace ll::io
