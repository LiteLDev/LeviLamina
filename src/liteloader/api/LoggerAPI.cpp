#include "liteloader/api/LoggerAPI.h"

#include <mutex>
#include <regex>
#include <unordered_map>

#include "liteloader/api/utils/Hash.h"
#include "liteloader/core/Config.h"

#define LOGGER_CURRENT_TITLE "ll_plugin_logger_title"
#define LOGGER_CURRENT_FILE  "ll_plugin_logger_file"

using namespace ll::StringUtils;

std::mutex loggerLock;

bool Logger::setDefaultFileImpl(HMODULE hPlugin, std::string const& logFile, bool appendMode = true) {
    if (logFile.empty()) {
        PluginOwnData::removeImpl<std::ofstream>(hPlugin, LOGGER_CURRENT_FILE);
        return true;
    } else {
        std::error_code ec;
        std::filesystem::create_directories(std::filesystem::path(sv2u8sv(logFile)).remove_filename(), ec);

        auto& res = PluginOwnData::setImpl<std::ofstream>(
            hPlugin,
            LOGGER_CURRENT_FILE,
            logFile,
            appendMode ? std::ios::app : std::ios::out
        );
        return res.is_open();
    }
}

bool Logger::setDefaultFileImpl(HMODULE hPlugin, nullptr_t) {
    PluginOwnData::removeImpl<std::ofstream>(hPlugin, LOGGER_CURRENT_FILE);
    return true;
}

bool Logger::setFile(std::string const& logFile, bool appendMode) {
    if (ofs.is_open()) ofs.close();

    if (logFile.empty()) {
        return true;
    } else {
        std::error_code ec;
        std::filesystem::create_directories(std::filesystem::path(sv2u8sv(logFile)).remove_filename(), ec);
        ofs.open(logFile, appendMode ? std::ios::app : std::ios::out);
        return ofs.is_open();
    }
}

bool Logger::setFile(nullptr_t) {
    if (ofs.is_open()) ofs.close();
    return true;
}

std::mutex& Logger::getLocker() { return loggerLock; }

Logger::OutputStream::OutputStream() = default;

Logger::OutputStream::OutputStream(
    Logger*           logger,
    int               level,
    std::string&&     consoleFormat,
    std::string&&     fileFormat,
    std::string&&     playerFormat,
    fmt::text_style&& style,
    std::string&&     mode
) {
    this->logger        = logger;
    this->level         = level;
    this->consoleFormat = consoleFormat;
    this->fileFormat    = fileFormat;
    this->playerFormat  = playerFormat;
    this->style         = style;
    this->levelPrefix   = mode;
}

bool checkLogLevel(int level, int outLevel) {
    if (level >= outLevel) return true;
    if (level == -1 && ll::globalConfig.logLevel >= outLevel) return true;
    return false;
}

fmt::text_style getModeColor(std::string const& a1) {
    if (!ll::globalConfig.colorLog) return {};
    switch (do_hash(a1)) {
    case do_hash("INFO"):
        return fmt::fg(fmt::color::light_sea_green);
    case do_hash("WARN"):
        return fmt::fg(fmt::color::yellow);
    case do_hash("DEBUG"):
        return fmt::fg(fmt::color::white);
    case do_hash("ERROR"):
        return fmt::fg(fmt::terminal_color::bright_red);
    case do_hash("FATAL"):
        return fmt::fg(fmt::color::red);
    }
    return fmt::fg(fmt::color::white);
}

template <typename S, typename Char>
std::string applyTextStyle(fmt::v9::text_style const& ts, S const& format_str) {
    fmt::v9::basic_memory_buffer<Char> buf;
    auto                               fmt       = fmt::detail::to_string_view(format_str);
    bool                               has_style = false;
    if (ts.has_emphasis()) {
        has_style     = true;
        auto emphasis = fmt::v9::detail::make_emphasis<Char>(ts.get_emphasis());
        buf.append(emphasis.begin(), emphasis.end());
    }
    if (ts.has_foreground()) {
        has_style       = true;
        auto foreground = fmt::v9::detail::make_foreground_color<Char>(ts.get_foreground());
        buf.append(foreground.begin(), foreground.end());
    }
    if (ts.has_background()) {
        has_style       = true;
        auto background = fmt::v9::detail::make_background_color<Char>(ts.get_background());
        buf.append(background.begin(), background.end());
    }
    buf.append(fmt.begin(), fmt.end());
    if (has_style) fmt::v9::detail::reset_color<Char>(buf);
    return fmt::to_string(buf);
}

void Logger::endlImpl(HMODULE hPlugin, OutputStream& o) {
    try {
        std::unique_lock lock(loggerLock);

        std::string title = o.logger->title;
        if (!title.empty()) title = "[" + title + "]";

        auto text         = o.os.str();
        bool filterBanned = false;
        // Output Filter
        if (ll::globalConfig.enableOutputFilter)
            for (auto& regexStr : ll::globalConfig.outputFilterRegex) {
                try {
                    std::regex re(regexStr);
                    if (std::regex_search(text, re) || std::regex_search(title, re)) {
                        filterBanned = true;
                        break;
                    }
                } catch (...) {}
            }

        if (checkLogLevel(o.logger->consoleLevel, o.level) && !filterBanned) {
            fmt::print(
                fmt::runtime(o.consoleFormat),
                applyTextStyle(
                    ll::globalConfig.colorLog ? fg(fmt::color::light_blue) : fmt::text_style(),
                    fmt::format("{:%H:%M:%S}", fmt::localtime(_time64(nullptr)))
                ),
                applyTextStyle(getModeColor(o.levelPrefix), o.levelPrefix),
                applyTextStyle(ll::globalConfig.colorLog ? o.style : fmt::text_style(), title),
                applyTextStyle(ll::globalConfig.colorLog ? o.style : fmt::text_style(), text)
            );
        }

        if (checkLogLevel(o.logger->fileLevel, o.level)
            && (ll::globalConfig.onlyFilterConsoleOutput || !filterBanned)) {
            if (o.logger->ofs.is_open() || PluginOwnData::hasImpl(hPlugin, LOGGER_CURRENT_FILE)) {
                auto fileContent = fmt::format(
                    fmt::runtime(o.fileFormat),
                    fmt::localtime(_time64(nullptr)),
                    o.levelPrefix,
                    title,
                    text
                );
                if (o.logger->ofs.is_open()) o.logger->ofs << fileContent << std::flush;
                else PluginOwnData::getImpl<std::ofstream>(hPlugin, LOGGER_CURRENT_FILE) << fileContent << std::flush;
            }
        }

        // if (checkLogLevel(o.logger->playerLevel, o.level) && o.logger->player && Player::isValid(o.logger->player) &&
        //     (ll::globalConfig.onlyFilterConsoleOutput || !filterBanned)) {
        //     o.logger->player->sendTextPacket(
        //         fmt::format(fmt::runtime(o.playerFormat), fmt::localtime(_time64(nullptr)), o.levelPrefix, title,
        //         text)
        //     );
        // }

        o.os.str("");
        o.os.clear();
    } catch (...) {
        std::cerr << "Error in Logger::endlImpl" << std::endl;
        o.os.str("");
        o.os.clear();
    }
}

Logger::Logger(std::string const& title) {
    this->title = title;
    debug       = OutputStream{
        this,
        5,
        "{} {} {} {}\n",
        "[{:%Y-%m-%d %H:%M:%S} {}]{} {}\n",
        "§o[{}{}]{} {}\n",
        fmt::fg(fmt::terminal_color::white) | fmt::emphasis::italic,
        "DEBUG"};
    info = OutputStream{
        this,
        4,
        "{} {} {} {}\n",
        "[{:%Y-%m-%d %H:%M:%S} {}]{} {}\n",
        "[{}{}]{} {}\n",
        fmt::fg(fmt::terminal_color::white),
        "INFO"};
    warn = OutputStream{
        this,
        3,
        "{} {} {} {}\n",
        "[{:%Y-%m-%d %H:%M:%S} {}]{} {}\n",
        "§e[{}{}]{} {}\n",
        fmt::fg(fmt::terminal_color::yellow) | fmt::emphasis::bold,
        "WARN"};
    error = OutputStream{
        this,
        2,
        "{} {} {} {}\n",
        "[{:%Y-%m-%d %H:%M:%S} {}]{} {}\n",
        "§c[{}{}]{} {}\n",
        fmt::fg(fmt::color::red) | fmt::emphasis::bold,
        "ERROR"};
    fatal = OutputStream{
        this,
        1,
        "{} {} {} {}\n",
        "[{:%Y-%m-%d %H:%M:%S} {}]{} {}\n",
        "§4[{}{}]{} {}\n",
        fmt::fg(fmt::color::red) | fmt::emphasis::bold,
        "FATAL"};
}
