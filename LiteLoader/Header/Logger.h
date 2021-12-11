//
// Created by RimuruChan on 2021/12/11.
//

#pragma once

#include <filesystem>
#include "third-party/FMT/chrono.h"
#include "third-party/FMT/color.h"
#include "third-party/FMT/core.h"
#include "third-party/FMT/os.h"
#include "third-party/FMT/printf.h"
#include "Utils/CsLock.h"
#include "Utils/WinHelper.h"
#include "Utils/FileHelper.h"
#include "Utils/PluginOwnData.h"
#include <string>
#include <sstream>
#include <iostream>
#include <utility>

#define LOGGER_CURRENT_TITLE "ll_plugin_logger_title"
#define LOGGER_CURRENT_FILE "ll_plugin_logger_file"
#define LOGGER_CURRENT_LOCK "ll_plugin_logger_lock"

class Logger {
public:
    std::string title;

    template<bool B, class T = void>
    using enable_if_t = typename std::enable_if<B, T>::type;

    static void inline initLock() {
        if (!PluginOwnData::has(LOGGER_CURRENT_LOCK))
            PluginOwnData::set<CsLock>(LOGGER_CURRENT_LOCK);
    }

    static void inline lock() {
        initLock();
        PluginOwnData::get<CsLock>(LOGGER_CURRENT_LOCK).lock();
    }

    static void inline unlock() {
        PluginOwnData::get<CsLock>(LOGGER_CURRENT_LOCK).unlock();
    }

    static bool inline setFile(const std::string &logFile, bool appendMode = true) {
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

    static bool inline setFile(nullptr_t) {
        PluginOwnData::remove<std::ofstream>(LOGGER_CURRENT_FILE);
        return true;
    }

    class output {
    public:
        Logger *logger;
        std::string consoleFormat;
        std::string fileFormat;
        fmt::text_style style;
        std::string mode;
        std::ostringstream os;
        bool locked = false;

        explicit output(Logger *logger, std::string &&consoleFormat, std::string &&fileFormat, fmt::text_style &&style,
                        std::string &&mode) {
            this->logger = logger;
            this->consoleFormat = consoleFormat;
            this->fileFormat = fileFormat;
            this->style = style;
            this->mode = mode;
        };

        template<typename T>
        output &operator<<(T t) {
            if (!locked) {
                lock();
                locked = true;
            }
            os << t;
            return *this;
        }

        template<>
        output &operator<<(void (*t)(output&)) {
            t(*this);
            return *this;
        }
    };

    static inline void endl(output& o){
        fmt::print(o.style, o.consoleFormat, fmt::localtime(_time64(nullptr)), o.mode, o.logger->title, o.os.str());

        if (PluginOwnData::has(LOGGER_CURRENT_FILE))
            PluginOwnData::get<std::ofstream>(LOGGER_CURRENT_FILE)
                    << fmt::format(o.fileFormat, fmt::localtime(_time64(nullptr)), o.mode, o.logger->title,
                                   o.os.str()) << std::flush;
        o.locked = false;
        o.os.clear();
        unlock();
    }

    output Debug = output{this,
                          "\b\b[{:%H:%M:%S} {}][{}] {}\n> ",
                          "[{:%Y-%m-%d %H:%M:%S} {}][{}] {}\n",
                          fmt::fg(fmt::color::gray) | fmt::emphasis::italic,
                          "Debug"
    };
    output Info = output{this,
                         "\b\b[{:%H:%M:%S} {}][{}] {}\n> ",
                         "[{:%Y-%m-%d %H:%M:%S} {}][{}] {}\n",
                         fmt::fg(fmt::color::white),
                         "Info"
    };
    output Warn = output{this,
                         "\b\b[{:%H:%M:%S} {}][{}] {}\n> ",
                         "[{:%Y-%m-%d %H:%M:%S} {}][{}] {}\n",
                         fmt::fg(fmt::color::yellow2) | fmt::emphasis::bold,
                         "Warn"
    };
    output Error = output{this,
                          "\b\b[{:%H:%M:%S} {}][{}] {}\n> ",
                          "[{:%Y-%m-%d %H:%M:%S} {}][{}] {}\n",
                          fmt::fg(fmt::color::red2) | fmt::emphasis::bold,
                          "Error"
    };
    output Fatal = output{this,
                          "\b\b[{:%H:%M:%S} {}][{}] {}\n> ",
                          "[{:%Y-%m-%d %H:%M:%S} {}][{}] {}\n",
                          fmt::fg(fmt::color::red) | fmt::emphasis::bold,
                          "Fatal"
    };

    explicit Logger(std::string &&title) {
        this->title = title;
    }

    template<typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
    void debug(const S &formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Debug << str << endl;
    }

    template<typename... Args>
    void debug(const char *formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Debug << str << endl;
    }

    template<typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
    void info(const S &formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Info << str << endl;
    }

    template<typename... Args>
    void info(const char *formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Info << str << endl;
    }

    template<typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
    void warn(const S &formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Warn << str << endl;
    }

    template<typename... Args>
    void warn(const char *formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Warn << str << endl;
    }

    template<typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
    void error(const S &formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Error << str << endl;
    }

    template<typename... Args>
    void error(const char *formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Error << str << endl;
    }

    template<typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
    void fatal(const S &formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Fatal << str << endl;
    }

    template<typename... Args>
    void fatal(const char *formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Fatal << str << endl;
    }

};