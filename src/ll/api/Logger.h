#pragma once
/**
 *
 * @brief Logger System - Log text to console, file and player easily
 *
 * Create Logger
 * @code
 * Logger logger("MyMod"); // Create a logger (default: only log to console)
 * @endcode
 * Use Logger
 * @code
 * logger.info("Infomation");                      // Common
 * logger.error("Error! Code:{}", -1);             // fmt Format
 * @endcode
 */

#include <array>
#include <filesystem>
#include <fstream>
#include <functional>
#include <mutex>
#include <optional>
#include <string>
#include <string_view>
#include <utility>

#include "fmt/chrono.h" // IWYU pragma: keep
#include "fmt/color.h"
#include "fmt/core.h"
#include "fmt/format.h"
#include "fmt/os.h"     // IWYU pragma: keep
#include "fmt/ranges.h" // IWYU pragma: keep
#include "fmt/std.h"    // IWYU pragma: keep

#include "ll/api/base/Concepts.h" // IWYU pragma: keep
#include "ll/api/base/Macro.h"

namespace ll {
class Logger;
class OutputStream {
    friend class Logger;

private:
    LLAPI void print(std::string_view) const noexcept;

public:
    Logger*                        logger;
    std::string                    levelPrefix;
    int                            level;
    std::array<fmt::text_style, 4> style;
    std::array<std::string, 5>     consoleFormat;
    std::array<std::string, 5>     fileFormat;

    LLAPI explicit OutputStream(
        Logger&                               logger,
        std::string                           levelPrefix,
        int                                   level,
        std::array<fmt::text_style, 4> const& style         = {{}},
        std::array<std::string, 5> const&     consoleFormat = {"{0} {1} {2} {3}", "{:%T}.{:0>3}", "{}", "[{}]", "{}"},
        std::array<std::string, 5> const&     fileFormat = {"[{0} {1}][{2}] {3}", "{:%F %T}.{:0>3}", "{}", "{}", "{}"}
    );

    template <typename... Args>
    void operator()(fmt::format_string<Args...> fmt, Args&&... args) const {
        print(fmt::vformat(fmt.get(), fmt::make_format_args(args...)));
    }

    template <ll::concepts::IsString S>
    void operator()(S const& msg) const {
        print(msg);
    }
};

class Logger {
public:
    std::string                  title;
    std::optional<std::ofstream> ofs          = std::nullopt;
    int                          consoleLevel = -1;
    int                          fileLevel    = -1;
    int                          playerLevel  = -1;

    OutputStream debug;
    OutputStream info;
    OutputStream warn;
    OutputStream error;
    OutputStream fatal;

    LLNDAPI explicit Logger(std::string_view title = __builtin_FUNCTION());

    LLNDAPI Logger(std::string_view, bool); // TODO: remove in release

    ~Logger() { resetFile(); }

    LLAPI void resetFile();
    LLAPI bool setFile(std::filesystem::path const& logFile, bool appendMode = true);

    LLAPI static bool setDefaultFile(std::filesystem::path const& logFile, bool appendMode);

    LLAPI std::ofstream& getFile();

    LLAPI static std::lock_guard<std::recursive_mutex> lock();
};
} // namespace ll
