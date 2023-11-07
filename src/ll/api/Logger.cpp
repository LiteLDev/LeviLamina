#include "ll/api/Logger.h"

#include "fmt/color.h"

#include "ll/api/utils/Hash.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/Config.h"

using namespace ll::utils::string_utils;

namespace ll {

bool checkLogLevel(int level, int outLevel) {
    if (level >= outLevel) return true;
    if (level == -1 && ll::globalConfig.logger.logLevel >= outLevel) return true;
    return false;
}

void Logger::OutputStream::print(std::string_view s) const {
    try {
        auto time = fmt::localtime(_time64(nullptr));
        if (checkLogLevel(logger.consoleLevel, level)) {
            std::string str = fmt::format(
                fmt::runtime(consoleFormat[0]),
                applyTextStyle(style[0], fmt::format(fmt::runtime(consoleFormat[1]), time)),
                applyTextStyle(style[1], fmt::format(fmt::runtime(consoleFormat[2]), levelPrefix)),
                applyTextStyle(style[2], fmt::format(fmt::runtime(consoleFormat[3]), logger.title)),
                applyTextStyle(style[3], fmt::format(fmt::runtime(consoleFormat[4]), replaceMcToAnsiCode(s)))
            );
            if (!ll::globalConfig.logger.colorLog) { str = removeEscapeCode(str); }
            fmt::print("{}\n", str);
        }
        if (logger.getFile().is_open() && checkLogLevel(logger.fileLevel, level)) {
            logger.getFile() << removeEscapeCode(fmt::format(
                fmt::runtime(fileFormat[0]),
                fmt::format(fmt::runtime(fileFormat[1]), time),
                fmt::format(fmt::runtime(fileFormat[2]), levelPrefix),
                fmt::format(fmt::runtime(fileFormat[3]), logger.title),
                fmt::format(fmt::runtime(fileFormat[4]), s)
            )) << std::endl;
        }
        if ((playerOutputCallback || Logger::defaultPlayerOutputCallback) && checkLogLevel(logger.playerLevel, level)) {
            std::string str = replaceAnsiToMcCode(fmt::format(
                fmt::runtime(playerFormat[0]),
                applyTextStyle(style[0], fmt::format(fmt::runtime(playerFormat[1]), time)),
                applyTextStyle(style[1], fmt::format(fmt::runtime(playerFormat[2]), levelPrefix)),
                applyTextStyle(style[2], fmt::format(fmt::runtime(playerFormat[3]), logger.title)),
                applyTextStyle(style[3], fmt::format(fmt::runtime(playerFormat[4]), s))
            ));
            if (playerOutputCallback) {
                playerOutputCallback(str);
            } else {
                Logger::defaultPlayerOutputCallback(str);
            }
        }
    } catch (std::exception& e) { std::cerr << "ERROR IN LOGGER API : " << e.what(); } catch (...) {
        std::cerr << "UNKNOWN ERROR IN LOGGER API";
    }
}

Logger::OutputStream::OutputStream(
    Logger&                                logger,
    std::string_view                       levelPrefix,
    int                                    level,
    std::array<fmt::text_style, 4> const&  style,
    std::array<std::string_view, 5> const& playerFormat,
    std::array<std::string_view, 5> const& consoleFormat,
    std::array<std::string_view, 5> const& fileFormat
)
: logger(logger),
  levelPrefix(levelPrefix),
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
        fmt::fg(fmt::color::lemon_chiffon),
        {},
        fmt::emphasis::italic,
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
      }}),
  warn(OutputStream{
      *this,
      "WARN",
      3,
      {
          fmt::fg(fmt::color::light_blue),
          fmt::fg(fmt::terminal_color::bright_yellow),
          fmt::fg(fmt::terminal_color::bright_yellow),
          fmt::fg(fmt::terminal_color::bright_yellow) | fmt::emphasis::bold,
      }}),
  error(OutputStream{
      *this,
      "ERROR",
      2,
      {
          fmt::fg(fmt::color::light_blue),
          fmt::fg(fmt::terminal_color::bright_red),
          fmt::fg(fmt::terminal_color::bright_red),
          fmt::fg(fmt::terminal_color::bright_red) | fmt::emphasis::bold,
      }}),
  fatal(OutputStream{
      *this,
      "FATAL",
      1,
      {
          fmt::fg(fmt::color::light_blue),
          fmt::fg(fmt::color::red),
          fmt::fg(fmt::color::red),
          fmt::fg(fmt::color::red) | fmt::emphasis::bold,
      }}) {}

void Logger::resetFile() {
    if (ofs) {
        auto& value = ofs.value();
        if (value.is_open()) value.close();
        ofs = std::nullopt;
    }
}

bool Logger::setFile(std::string const& logFile, bool appendMode) {
    resetFile();
    if (logFile.empty()) { return true; }

    std::error_code ec;
    std::filesystem::create_directories(std::filesystem::path(sv2u8sv(logFile)).remove_filename(), ec);
    ofs = std::ofstream(logFile, appendMode ? std::ios::app : std::ios::out);
    return ofs.value().is_open();
}

bool Logger::setDefaultFile(std::string const& logFile, bool appendMode) {
    if (logFile.empty()) {
        if (defaultFile.is_open()) { defaultFile.close(); }
        return true;
    }

    std::error_code ec;
    std::filesystem::create_directories(std::filesystem::path(sv2u8sv(logFile)).remove_filename(), ec);
    defaultFile.open(logFile, appendMode ? std::ios::app : std::ios::out);
    return defaultFile.is_open();
}

std::ofstream            Logger::defaultFile{};
Logger::PlayerOutputFunc Logger::defaultPlayerOutputCallback;
} // namespace ll
