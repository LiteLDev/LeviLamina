////////////////////////////////////////////////////////////////////////
//  Logger System - Log text to console, file and player easily
//  - Created by RimuruChan on 2021/12/11.
//
//
//  [Create Logger]
//
//  Logger logger("MyPlugin");                  // Create a logger (default: only log to console)
//  logger.setFile("logs/MyPlugin.log");        // Optional, also record log to File
//
//  auto pl = mc.getPlayer("Jim");
//  if(pl)
//      logger.setPlayer(pl);                   // Optional, also record log to a Player
//  ......
//  logger.setFile(nullptr);                    // Stop record log to File (Passing nullptr to setPlayer works like
//  this)
//
//
//  [Use Logger]
//
//  logger.info("Infomation");                                  // Common
//  logger.error("Error! Code:{}",GetLastError());              // FMT Format
//  logger.warn << "Warning! Fail to do sth." << logger.endl;   // STL Format
//
////////////////////////////////////////////////////////////////////////

#pragma once

#ifndef FMT_HEADER_ONLY
#define FMT_HEADER_ONLY
#endif

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
#include "Utils/StringHelper.h"
#include "I18nAPI.h"
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <utility>

class Player;
using std::string;

#define LOGGER_CURRENT_FILE "ll_plugin_logger_file"

template <bool B, class T = void>
using enable_if_type = typename std::enable_if<B, T>::type;

HMODULE GetCurrentModule();

class Logger {
public:
    class OutputStream {
        friend class Logger;

    protected:
        LIAPI explicit OutputStream();

    public:
        Logger* logger{};
        int level{};
        std::string consoleFormat;
        std::string fileFormat;
        std::string playerFormat;
        fmt::text_style style;
        std::string levelPrefix;
        std::ostringstream os;
        bool locked = false; // Deprecated

        LIAPI explicit OutputStream(Logger* logger, int level, std::string&& consoleFormat, std::string&& fileFormat,
                                    std::string&& playerFormat, fmt::text_style&& style, std::string&& mode);

        template <typename T>
        OutputStream& operator<<(T t) {
            logger->lock();
            os << t;
            logger->unlock();
            return *this;
        }

        template <>
        OutputStream& operator<<(std::wstring wstr) {
            logger->lock();
            os << wstr2str(wstr);
            logger->unlock();
            return *this;
        }
        template <>
        OutputStream& operator<<(const wchar_t* wstr) {
            logger->lock();
            os << wstr2str(wstr);
            logger->unlock();
            return *this;
        }

        template <>
        OutputStream& operator<<(void (*t)(OutputStream&)) {
            t(*this);
            return *this;
        }

        template <typename S, typename... Args, enable_if_type<(fmt::v8::detail::is_string<S>::value), int> = 0>
        void operator()(const S& formatStr, const Args&... args) {
            if (PluginOwnData::has(I18N::POD_KEY)) {
                *this << tr(formatStr, args...) << endl;
                return;
            }
            if constexpr (0 == sizeof...(args)) {
                // Avoid fmt if only one argument
                *this << formatStr << endl;
            } else {
                std::string str = fmt::format(formatStr, args...);
                *this << str << endl;
            }
        }

        template <typename... Args>
        void operator()(const char* formatStr, const Args&... args) {
            if (PluginOwnData::has(I18N::POD_KEY)) {
                *this << tr(formatStr, args...) << endl;
                return;
            }
            if constexpr (0 == sizeof...(args)) {
                // Avoid fmt if only one argument
                *this << formatStr << endl;
            } else {
                std::string str = fmt::format(std::string(formatStr), args...);
                *this << str << endl;
            }
        }
    };

private:
    LIAPI static bool setDefaultFileImpl(HMODULE hPlugin, const std::string& logFile, bool appendMode);
    LIAPI static bool setDefaultFileImpl(HMODULE hPlugin, nullptr_t);

    LIAPI static void endlImpl(HMODULE hPlugin, OutputStream& o);

public:
    std::string title;
    std::ofstream ofs;
    Player* player = nullptr;
    int consoleLevel = -1;
    int fileLevel = -1;
    int playerLevel = -1;

    ~Logger() {
        setFile(nullptr);
    }

    inline static bool setDefaultFile(const std::string& logFile, bool appendMode) {
        return setDefaultFileImpl(GetCurrentModule(), logFile, appendMode);
    };

    inline static bool setDefaultFile(nullptr_t a0) {
        return setDefaultFileImpl(GetCurrentModule(), a0);
    };

    inline static void endl(OutputStream& o) {
        return endlImpl(GetCurrentModule(), o);
    };

    LIAPI bool setFile(const std::string& logFile, bool appendMode = true);
    LIAPI bool setFile(nullptr_t);

    LIAPI bool tryLock();
    LIAPI bool lock();
    LIAPI bool unlock();

    OutputStream debug;
    OutputStream info;
    OutputStream warn;
    OutputStream error;
    OutputStream fatal;

    inline Logger() : Logger("") {
    }
    LIAPI explicit Logger(const std::string& title);

private:
    LIAPI CsLock& getLocker();


    // For compatibility
private:
    LIAPI static void initLockImpl(HMODULE hPlugin);
    LIAPI static void lockImpl(HMODULE hPlugin);
    LIAPI static void unlockImpl(HMODULE hPlugin);
};