#include "ll/api/LoggerAPI.h"

#include <mutex>
#include <regex>
#include <unordered_map>
#include <utility>

#include "ll/api/utils/Hash.h"
#include "ll/core/Config.h"

using namespace ll::StringUtils;

bool checkLogLevel(int level, int outLevel) {
    if (level >= outLevel) return true;
    if (level == -1 && ll::globalConfig.logLevel >= outLevel) return true;
    return false;
}

void Logger::OutputStream::print(std::string_view s) const {
    try {
        auto time = fmt::localtime(_time64(nullptr));

        if (checkLogLevel(logger.consoleLevel, level)) {
            std::string str = fmt::format(
                fmt::runtime(consoleFormat.first),
                applyTextStyle(style[0], fmt::format(fmt::runtime(consoleFormat.second), time)),
                applyTextStyle(style[1], levelPrefix),
                applyTextStyle(style[2], logger.title),
                applyTextStyle<std::string_view, char>(style[3], s)
            );
            if (!ll::globalConfig.colorLog) { str = removeAnsiEscapeCode(str); }
            fmt::print("{}\n", str);
        }
        if (logger.getFile().is_open() && checkLogLevel(logger.fileLevel, level)) {
            logger.getFile() << removeAnsiEscapeCode(fmt::format(
                fmt::runtime(fileFormat.first),
                fmt::format(fmt::runtime(fileFormat.second), time),
                levelPrefix,
                logger.title,
                s
            )) << std::endl;
        }
        if (playerOutputCallback && checkLogLevel(logger.playerLevel, level)) {
            std::string str = replaceAnsiToMcCode(fmt::format(
                fmt::runtime(playerFormat.first),
                applyTextStyle(style[0], fmt::format(fmt::runtime(playerFormat.second), time)),
                applyTextStyle(style[1], levelPrefix),
                applyTextStyle(style[2], logger.title),
                applyTextStyle<std::string_view, char>(style[3], s)
            ));
            playerOutputCallback(str);
        }
    } catch (std::exception& e) { std::cerr << "ERROR IN LOGGER API : " << e.what() << std::endl; } catch (...) {
        std::cerr << "UNKNOWN ERROR IN LOGGER API" << std::endl;
    }
}

Logger::OutputStream::OutputStream(
    Logger&                                    logger,
    std::string                                levelPrefix,
    int                                        level,
    std::array<fmt::text_style, 4> const&      style,
    std::pair<std::string, std::string> const& playerFormat,
    std::pair<std::string, std::string> const& consoleFormat,
    std::pair<std::string, std::string> const& fileFormat
)
: logger(logger),
  levelPrefix(std::move(levelPrefix)),
  level(level),
  style(style),
  consoleFormat(consoleFormat),
  fileFormat(fileFormat),
  playerFormat(playerFormat) {}

Logger::Logger(std::string title)
: title(std::move(title)),
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
          fmt::fg(fmt::color::yellow),
          {},
          fmt::fg(fmt::terminal_color::yellow) | fmt::emphasis::bold,
      }}),
  error(OutputStream{
      *this,
      "ERROR",
      2,
      {
          fmt::fg(fmt::color::light_blue),
          fmt::fg(fmt::terminal_color::bright_red),
          {},
          fmt::fg(fmt::color::red) | fmt::emphasis::bold,
      }}),
  fatal(OutputStream{
      *this,
      "FATAL",
      1,
      {
          fmt::fg(fmt::color::light_blue),
          fmt::fg(fmt::color::red),
          {},
          fmt::fg(fmt::terminal_color::red) | fmt::emphasis::bold | fmt::emphasis::italic,
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

std::ofstream Logger::defaultFile{};
