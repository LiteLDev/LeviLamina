//
// Created by RimuruChan on 2021/12/11.
//

#pragma once

#include <LoggerAPI.h>
#include "Config.h"

#define LOGGER_CURRENT_TITLE "ll_plugin_logger_title"
#define LOGGER_CURRENT_FILE "ll_plugin_logger_file"
#define LOGGER_CURRENT_LOCK "ll_plugin_logger_lock"

void Logger::initLockImpl(HMODULE hPlugin)
{
    if (!PluginOwnData::hasImpl(hPlugin, LOGGER_CURRENT_LOCK))
        PluginOwnData::setImpl<CsLock>(hPlugin, LOGGER_CURRENT_LOCK);
}

void Logger::lockImpl(HMODULE hPlugin)
{
    initLockImpl(hPlugin);
    PluginOwnData::getImpl<CsLock>(hPlugin, LOGGER_CURRENT_LOCK).lock();
}

void Logger::unlockImpl(HMODULE hPlugin)
{
    PluginOwnData::getImpl<CsLock>(hPlugin, LOGGER_CURRENT_LOCK).unlock();
}

bool Logger::setFileImpl(HMODULE hPlugin, const std::string& logFile, bool appendMode = true)
{
    if (logFile.empty()) {
        PluginOwnData::removeImpl<std::ofstream>(hPlugin, LOGGER_CURRENT_FILE);
        return true;
    } else {
        std::error_code ec;
        std::filesystem::create_directories(std::filesystem::path(logFile).remove_filename(), ec);

        auto& res = PluginOwnData::setImpl<std::ofstream>(hPlugin, LOGGER_CURRENT_FILE, logFile,
                                                      appendMode ? std::ios::app : std::ios::out);
        return res.is_open();
    }
}

bool Logger::setFileImpl(HMODULE hPlugin, nullptr_t)
{
    PluginOwnData::removeImpl<std::ofstream>(hPlugin, LOGGER_CURRENT_FILE);
    return true;
}

Logger::OutputStream::OutputStream() = default;

Logger::OutputStream::OutputStream(Logger *logger, int level, std::string &&consoleFormat, std::string &&fileFormat,
                                   fmt::text_style &&style, std::string &&mode) {
    this->logger = logger;
    this->level = level;
    this->consoleFormat = consoleFormat;
    this->fileFormat = fileFormat;
    this->style = style;
    this->mode = mode;
}

void Logger::endlImpl(HMODULE hPlugin, OutputStream& o)
{
    std::string title = o.logger->title;
    if (!title.empty())
        title = "[" + title + "]";
    if (LL::globalConfig.logLevel >= o.level) {
        fmt::print(o.style, o.consoleFormat, fmt::localtime(_time64(nullptr)), o.mode, title, o.os.str());
        if (PluginOwnData::hasImpl(hPlugin, LOGGER_CURRENT_FILE))
            PluginOwnData::getImpl<std::ofstream>(hPlugin, LOGGER_CURRENT_FILE)
                    << fmt::format(o.fileFormat, fmt::localtime(_time64(nullptr)), o.mode, o.logger->title,
                                   o.os.str()) << std::flush;
    }
    o.locked = false;
    o.os.str("");
    o.os.clear();
    unlockImpl(hPlugin);
}

Logger::Logger(const std::string &title) {
    this->title = title;
    debug = OutputStream{this,
                         5,
                         "[{:%H:%M:%S} {}]{} {}\n",
                         "[{:%Y-%m-%d %H:%M:%S} {}]{} {}\n",
                         fmt::fg(fmt::terminal_color::white) | fmt::emphasis::italic,
                         "Debug"
    };
    info = OutputStream{this,
                        4,
                        "[{:%H:%M:%S} {}]{} {}\n",
                        "[{:%Y-%m-%d %H:%M:%S} {}]{} {}\n",
                        fmt::fg(fmt::terminal_color::white),
                        "Info"
    };
    warn = OutputStream{this,
                        3,
                        "[{:%H:%M:%S} {}]{} {}\n",
                        "[{:%Y-%m-%d %H:%M:%S} {}]{} {}\n",
                        fmt::fg(fmt::terminal_color::yellow) | fmt::emphasis::bold,
                        "Warn"
    };
    error = OutputStream{this,
                         2,
                         "[{:%H:%M:%S} {}]{} {}\n",
                         "[{:%Y-%m-%d %H:%M:%S} {}]{} {}\n",
                         fmt::fg(fmt::color::red2) | fmt::emphasis::bold,
                         "Error"
    };
    fatal = OutputStream{this,
                         1,
                         "[{:%H:%M:%S} {}]{} {}\n",
                         "[{:%Y-%m-%d %H:%M:%S} {}]{} {}\n",
                         fmt::fg(fmt::color::red) | fmt::emphasis::bold,
                         "Fatal"
    };
}
