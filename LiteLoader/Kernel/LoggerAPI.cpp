//
// Created by RimuruChan on 2021/12/11.
//

#pragma once

#include <LoggerAPI.h>
#include "Config.h"

#define LOGGER_CURRENT_TITLE "ll_plugin_logger_title"
#define LOGGER_CURRENT_FILE "ll_plugin_logger_file"
#define LOGGER_CURRENT_LOCK "ll_plugin_logger_lock"

void Logger::initLock() {
    if (!PluginOwnData::has(LOGGER_CURRENT_LOCK))
        PluginOwnData::set<CsLock>(LOGGER_CURRENT_LOCK);
}

void Logger::lock() {
    initLock();
    PluginOwnData::get<CsLock>(LOGGER_CURRENT_LOCK).lock();
}

void Logger::unlock() {
    PluginOwnData::get<CsLock>(LOGGER_CURRENT_LOCK).unlock();
}

bool Logger::setFile(const std::string &logFile, bool appendMode = true) {
    if (logFile.empty()) {
        PluginOwnData::remove<std::ofstream>(LOGGER_CURRENT_FILE);
        return true;
    } else {
        std::error_code ec;
        std::filesystem::create_directories(std::filesystem::path(logFile).remove_filename(), ec);

        auto &res = PluginOwnData::set<std::ofstream>(LOGGER_CURRENT_FILE, logFile,
                                                      appendMode ? std::ios::app : std::ios::out);
        return res.is_open();
    }
}

bool Logger::setFile(nullptr_t) {
    PluginOwnData::remove<std::ofstream>(LOGGER_CURRENT_FILE);
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

void Logger::endl(OutputStream &o) {
    if (LL::globalConfig.logLevel >= o.level) {
        fmt::print(o.style, o.consoleFormat, fmt::localtime(_time64(nullptr)), o.mode, o.logger->title, o.os.str());
        if (PluginOwnData::has(LOGGER_CURRENT_FILE))
            PluginOwnData::get<std::ofstream>(LOGGER_CURRENT_FILE)
                    << fmt::format(o.fileFormat, fmt::localtime(_time64(nullptr)), o.mode, o.logger->title,
                                   o.os.str()) << std::flush;
    }
    o.locked = false;
    o.os.str("");
    o.os.clear();
    unlock();
}

Logger::Logger(const std::string &title) {
    this->title = title;
    debug = OutputStream{this,
                         5,
                         "[{:%H:%M:%S} {}][{}] {}\n",
                         "[{:%Y-%m-%d %H:%M:%S} {}][{}] {}\n",
                         fmt::fg(fmt::terminal_color::white) | fmt::emphasis::italic,
                         "Debug"
    };
    info = OutputStream{this,
                        4,
                        "[{:%H:%M:%S} {}][{}] {}\n",
                        "[{:%Y-%m-%d %H:%M:%S} {}][{}] {}\n",
                        fmt::fg(fmt::terminal_color::white),
                        "Info"
    };
    warn = OutputStream{this,
                        3,
                        "[{:%H:%M:%S} {}][{}] {}\n",
                        "[{:%Y-%m-%d %H:%M:%S} {}][{}] {}\n",
                        fmt::fg(fmt::terminal_color::yellow) | fmt::emphasis::bold,
                        "Warn"
    };
    error = OutputStream{this,
                         2,
                         "[{:%H:%M:%S} {}][{}] {}\n",
                         "[{:%Y-%m-%d %H:%M:%S} {}][{}] {}\n",
                         fmt::fg(fmt::color::red2) | fmt::emphasis::bold,
                         "Error"
    };
    fatal = OutputStream{this,
                         1,
                         "[{:%H:%M:%S} {}][{}] {}\n",
                         "[{:%Y-%m-%d %H:%M:%S} {}][{}] {}\n",
                         fmt::fg(fmt::color::red) | fmt::emphasis::bold,
                         "Fatal"
    };
}
