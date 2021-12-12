//
// Created by RimuruChan on 2021/12/11.
//

#pragma once

#ifndef FMT_HEADER_ONLY
#define FMT_HEADER_ONLY
#endif

#include <filesystem>
#include "LLAPI.h"
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

template<bool B, class T = void>
using enable_if_t = typename std::enable_if<B, T>::type;

class Logger {
public:
    std::string title;

    LIAPI static void initLock();
    LIAPI static void lock();
    LIAPI static void unlock();
    LIAPI static bool setFile(const std::string &logFile, bool appendMode);
    LIAPI static bool setFile(nullptr_t);

    class OutputStream {
        friend class Logger;

    protected:
        LIAPI explicit OutputStream();

    public:
        Logger *logger{};
        int level{};
        std::string consoleFormat;
        std::string fileFormat;
        fmt::text_style style;
        std::string mode;
        std::ostringstream os;
        bool locked = false;

        LIAPI explicit OutputStream(Logger *logger, int level,
                                    std::string &&consoleFormat,
                                    std::string &&fileFormat,
                                    fmt::text_style &&style,
                                    std::string &&mode);

        template<typename T>
        OutputStream &operator<<(T t) {
            if (!locked) {
                lock();
                locked = true;
            }
            os << t;
            return *this;
        }

        template<>
        OutputStream &operator<<(void (*t)(OutputStream &)) {
            t(*this);
            return *this;
        }
    };

    LIAPI static void endl(OutputStream &o);

    OutputStream Debug;
    OutputStream Info;
    OutputStream Warn;
    OutputStream Error;
    OutputStream Fatal;

    inline Logger()
        :Logger(PluginOwnData::get<string>(LOGGER_DEFAULT_TITLE))
    {}

    LIAPI explicit Logger(const std::string &title);

    template<typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
    void debug(const S &formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Debug << str << endl;
    }

    template<typename... Args>
    void debug(const char *formatStr, const Args &... args) {
        std::string str = fmt::format(std::string(formatStr), args...);
        Debug << str << endl;
    }

    template<typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
    void info(const S &formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Info << str << endl;
    }

    template<typename... Args>
    void info(const char *formatStr, const Args &... args) {
        std::string str = fmt::format(std::string(formatStr), args...);
        Info << str << endl;
    }

    template<typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
    void warn(const S &formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Warn << str << endl;
    }

    template<typename... Args>
    void warn(const char *formatStr, const Args &... args) {
        std::string str = fmt::format(std::string(formatStr), args...);
        Warn << str << endl;
    }

    template<typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
    void error(const S &formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Error << str << endl;
    }

    template<typename... Args>
    void error(const char *formatStr, const Args &... args) {
        std::string str = fmt::format(std::string(formatStr), args...);
        Error << str << endl;
    }

    template<typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
    void fatal(const S &formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Fatal << str << endl;
    }

    template<typename... Args>
    void fatal(const char *formatStr, const Args &... args) {
        std::string str = fmt::format(std::string(formatStr), args...);
        Fatal << str << endl;
    }
};
