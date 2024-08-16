#include "ll/api/Logger.h"

#include <array>
#include <exception>
#include <filesystem>
#include <fstream>
#include <ios>
#include <mutex>
#include <optional>
#include <ostream>
#include <string>
#include <string_view>
#include <system_error>
#include <utility>

#include "fmt/chrono.h" // IWYU pragma: keep
#include "fmt/color.h"
#include "fmt/core.h"

#include "ll/api/Config.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/Config.h"
#include "ll/core/io/Output.h"

#include "pl/Config.h"

using namespace ll::string_utils;

namespace ll {
static std::ofstream            defaultFile(file_utils::u8path(pl::pl_log_path) / u8"latest.log", std::ios::out);
static Logger::player_output_fn defaultPlayerOutputCallback;

static bool checkLogLevel(int level, int outLevel) {
    if (level >= outLevel) return true;
    if (level == -1 && pl::pl_log_level >= outLevel) return true;
    return false;
}

void OutputStream::print(std::string_view s) const noexcept {
    try {
        auto lock = Logger::lock();

        auto [time, ms] = sys_utils::getLocalTime();

        if (checkLogLevel(logger->consoleLevel, level)) {
            std::string str = fmt::format(
                fmt::runtime(consoleFormat[0]),
                applyTextStyle(style[0], fmt::format(fmt::runtime(consoleFormat[1]), time, ms)),
                applyTextStyle(style[1], fmt::format(fmt::runtime(consoleFormat[2]), levelPrefix)),
                applyTextStyle(style[2], fmt::format(fmt::runtime(consoleFormat[3]), logger->title)),
                applyTextStyle(style[3], fmt::format(fmt::runtime(consoleFormat[4]), replaceMcToAnsiCode(s)))
            );
            if (!(bool)pl::pl_color_log) {
                str = removeEscapeCode(str);
            }
            io::defaultOutput(fmt::format("{}\n", str));
        }
        if (logger->getFile().is_open() && checkLogLevel(logger->fileLevel, level)) {
            logger->getFile() << removeEscapeCode(fmt::format(
                fmt::runtime(fileFormat[0]),
                fmt::format(fmt::runtime(fileFormat[1]), time, ms),
                fmt::format(fmt::runtime(fileFormat[2]), levelPrefix),
                fmt::format(fmt::runtime(fileFormat[3]), logger->title),
                fmt::format(fmt::runtime(fileFormat[4]), s)
            )) << std::endl;
        }
        if ((playerOutputCallback || defaultPlayerOutputCallback) && checkLogLevel(logger->playerLevel, level)) {
            std::string str = replaceAnsiToMcCode(fmt::format(
                fmt::runtime(playerFormat[0]),
                applyTextStyle(style[0], fmt::format(fmt::runtime(playerFormat[1]), time, ms)),
                applyTextStyle(style[1], fmt::format(fmt::runtime(playerFormat[2]), levelPrefix)),
                applyTextStyle(style[2], fmt::format(fmt::runtime(playerFormat[3]), logger->title)),
                applyTextStyle(style[3], fmt::format(fmt::runtime(playerFormat[4]), s))
            ));
            if (playerOutputCallback) {
                playerOutputCallback(str);
            } else {
                defaultPlayerOutputCallback(str);
            }
        }
    } catch (...) {
        try {
            io::defaultOutput(fmt::format(
                "\x1b[31mERROR IN LOGGER API:\n{}\x1b[91m\n{}\x1b[0m\n",
                error_utils::makeExceptionString(std::current_exception()),
                tou8str(s)
            ));
        } catch (...) {
            try {
                io::defaultOutput(fmt::format("\x1b[31mUNKNOWN ERROR IN LOGGER API\x1b[0m\n"));
            } catch (...) {}
        }
    }
}
OutputStream::OutputStream(
    Logger&                               logger,
    std::string                           levelPrefix,
    int                                   level,
    std::array<fmt::text_style, 4> const& style,
    std::array<std::string, 5> const&     playerFormat,
    std::array<std::string, 5> const&     consoleFormat,
    std::array<std::string, 5> const&     fileFormat
)
: logger(&logger),
  levelPrefix(std::move(levelPrefix)),
  level(level),
  style(style),
  consoleFormat(consoleFormat),
  fileFormat(fileFormat),
  playerFormat(playerFormat),
  playerOutputCallback(nullptr) {}

Logger::Logger(std::string_view title)
: title(title),
  debug(OutputStream{
      *this,
      "DEBUG",
      5,
      {
        fmt::fg(fmt::color::light_blue),
        fmt::fg(fmt::color::light_golden_rod_yellow),
        fmt::fg(fmt::color::light_golden_rod_yellow),
        fmt::fg(fmt::color::light_golden_rod_yellow) | fmt::emphasis::italic,
        }
}),
  info(OutputStream{
      *this,
      "INFO",
      4,
      {
          fmt::fg(fmt::color::light_blue),
          fmt::fg(fmt::color::light_sea_green),
          {},
          {},
      }
  }),
  warn(OutputStream{
      *this,
      "WARN",
      3,
      {
          fmt::fg(fmt::color::light_blue),
          fmt::fg(fmt::terminal_color::bright_yellow),
          fmt::fg(fmt::terminal_color::bright_yellow),
          fmt::fg(fmt::terminal_color::bright_yellow) | fmt::emphasis::bold,
      }
  }),
  error(OutputStream{
      *this,
      "ERROR",
      2,
      {
          fmt::fg(fmt::color::light_blue),
          fmt::fg(fmt::terminal_color::bright_red),
          fmt::fg(fmt::terminal_color::bright_red),
          fmt::fg(fmt::terminal_color::bright_red) | fmt::emphasis::bold,
      }
  }),
  fatal(OutputStream{
      *this,
      "FATAL",
      1,
      {
          fmt::fg(fmt::color::light_blue),
          fmt::fg(fmt::color::red),
          fmt::fg(fmt::color::red),
          fmt::fg(fmt::color::red) | fmt::emphasis::bold,
      }
  }) {}

void Logger::resetFile() {
    if (ofs) {
        auto& value = *ofs;
        if (value.is_open()) value.close();
        ofs = std::nullopt;
    }
}

bool Logger::setFile(std::filesystem::path const& logFile, bool appendMode) {
    resetFile();
    if (logFile.empty()) {
        return true;
    }

    std::error_code ec;
    std::filesystem::create_directories(logFile.parent_path(), ec);
    ofs = std::ofstream(logFile, appendMode ? std::ios::app : std::ios::out);
    return ofs->is_open();
}

bool Logger::setDefaultFile(std::filesystem::path const& logFile, bool appendMode) {
    if (logFile.empty()) {
        if (defaultFile.is_open()) {
            defaultFile.close();
        }
        return true;
    }
    std::error_code ec;
    std::filesystem::create_directories(logFile.parent_path(), ec);
    defaultFile.open(logFile, appendMode ? std::ios::app : std::ios::out);
    return defaultFile.is_open();
}

void Logger::setDefaultPlayerOutputFunc(player_output_fn const& func) { defaultPlayerOutputCallback = func; }

std::lock_guard<std::recursive_mutex> Logger::lock() {
    static std::recursive_mutex mutex;
    return std::lock_guard(mutex);
}
std::ofstream& Logger::getFile() {
    if (ofs) {
        return ofs.value();
    }
    return defaultFile;
}
} // namespace ll
