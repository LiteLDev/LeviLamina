#include "ll/core/plugin-abi/Logger.h"

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
#include "ll/api/io/Logger.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/Config.h"

#include "pl/Config.h"

using namespace ll::string_utils;

namespace ll {
void OutputStream::print(std::string_view s) const noexcept {

    io::LogLevel l;

    switch (level) {
    case 5:
        l = io::LogLevel::Debug;
        break;
    case 4:
        l = io::LogLevel::Info;
        break;
    case 3:
        l = io::LogLevel::Warn;
        break;
    case 2:
        l = io::LogLevel::Error;
        break;
    default:
    case 1:
        l = io::LogLevel::Fatal;
        break;
    }

    io::Logger(logger->title).log(l, s);
}
OutputStream::OutputStream(
    Logger&                               logger,
    std::string                           levelPrefix,
    int                                   level,
    std::array<fmt::text_style, 4> const& style,
    std::array<std::string, 5> const&     consoleFormat,
    std::array<std::string, 5> const&     fileFormat
)
: logger(&logger),
  levelPrefix(std::move(levelPrefix)),
  level(level),
  style(style),
  consoleFormat(consoleFormat),
  fileFormat(fileFormat) {}

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

LLNDAPI ll::Logger::Logger(std::string_view title, bool) : Logger(title) {}

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

std::lock_guard<std::recursive_mutex> Logger::lock() {
    static std::recursive_mutex mutex;
    return std::lock_guard(mutex);
}
} // namespace ll
