#pragma once

#ifndef FMT_HEADER_ONLY
#define FMT_HEADER_ONLY
#endif
#include <fmt/chrono.h>
#include <fmt/color.h>
#include <fmt/core.h>
#include <fmt/os.h>
#include <fmt/printf.h>
#include <Utils/CsLock.h>
#include <Utils/WinHelper.h>
#include <Utils/FileHelper.h>
#include <Utils/PluginOwnData.h>
#include <string>
#include <sstream>
#include <iostream>

///////////////////////////////////////////////////////
// Easy to log things into both console and log file
// 
// [Usage]
// 
//   Logger::setTitle("xxxx");                  // Set the title before this plugin's log
//   Logger::setFile("logs/xxxx/aaa.log");      // Set the log file (nullptr to disable) 
//   using namespace Logger;
// 
//   Info("There are {} days before {} to come back", 3, "alex");   // FMT-style IO
//                                                                  // with Auto Line-Wrap
//   Info().printf("%s, %d\n","Alex", 3);   // C-style IO
//   Info() << "test" << endl;              // STL-style IO
// 
// [Debug, Log, Info, Warn, Error, Fatal]
// 
/////////////////////////////////////////////////////

#define LOGGER_CURRENT_TITLE "ll_plugin_logger_title"
#define LOGGER_CURRENT_FILE "ll_plugin_logger_file"
#define LOGGER_CURRENT_LOCK "ll_plugin_logger_lock"

namespace Logger
{
    void inline initLock()
    {
        if (!PluginOwnData::has(LOGGER_CURRENT_LOCK))
            PluginOwnData::set<CsLock>(LOGGER_CURRENT_LOCK);
    }

    void inline lock()
    {
        initLock();
        PluginOwnData::get<CsLock>(LOGGER_CURRENT_LOCK).lock();
    }

    void inline unlock()
    {
        PluginOwnData::get<CsLock>(LOGGER_CURRENT_LOCK).unlock();
    }

    //title
    void inline setTitle(const std::string& title)
    {
        PluginOwnData::set<std::string>(LOGGER_CURRENT_TITLE, title);
    }

    //file
    bool inline setFile(const std::string& logFile)
    {
        if (logFile.empty())
        {
            PluginOwnData::remove<std::ofstream>(LOGGER_CURRENT_FILE);
            return true;
        }
        else
        {
            auto& res = PluginOwnData::set<std::ofstream>(LOGGER_CURRENT_FILE, logFile, std::ios::app);
            return res.is_open();
        }
    }

    bool inline setFile(nullptr_t)
    {
        PluginOwnData::remove<std::ofstream>(LOGGER_CURRENT_FILE);
        return true;
    }

    ////////////////////////////////// Basic //////////////////////////////////

    //Log
    class Log
    {
    protected:
        template <bool B, class T = void>
        using enable_if_t = typename std::enable_if<B, T>::type;

        void RealPrint(const std::string& str)
        {
            lock();
            fmt::print(str);
            if (PluginOwnData::has(LOGGER_CURRENT_FILE))
                fmt::print(GetFILEfromFstream(PluginOwnData::get<std::fstream>(LOGGER_CURRENT_FILE)), str);
            unlock();
        }

    public:
        Log() = default;

        Log(const Log&) = delete;
        Log& operator=(const Log&) = delete;

        // Log(string("There are {} days before {} to come back"), 3, "alex");
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Log(const S& formatStr, const Args&... args)
            : Log()
        {
            std::string str = fmt::format(formatStr, args...);
            str.append(1, '\n');
            RealPrint(str);
        }

        // Log("There are {} days before {} to come back", 3, "alex");
        template <typename... Args>
        Log(const char* formatStr, const Args&... args)
            : Log()
        {
            std::string str = fmt::format(std::string(formatStr), args...);
            str.append(1, '\n');
            RealPrint(str);
        }

        // Log().printf("%s, %d\n","Alex", 3);
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Log& printf(const S& formatStr, const Args&... args)
        {
            std::string str = fmt::sprintf(formatStr, args...);
            RealPrint(str);
            return *this;
        }

        // Log() << "test" << endl;
        template <typename T>
        Log& operator<<(T value)
        {
            std::ostringstream sout;
            sout << value;
            RealPrint(sout.str());
            return *this;
        }

        Log& operator<<(void (*obj)(Log&))
        {
            obj(*this);
            return *this;
        }

        // flush
        Log& flush()
        {
            lock();
            fflush(stdout);
            std::cout.flush();
            unlock();
            return *this;
        }
    };

    // << endl
    inline void endl(Log& logger)
    {
        lock();
        logger << '\n';
        unlock();
        logger.flush();
    }

    // << flush
    inline void flush(Log& logger)
    {
        logger.flush();
    }

    ////////////////////////////////// Specific Types //////////////////////////////////

    //Debug
    class Debug : public Log
    {
    public:
        Debug()
        {
            std::string str = fmt::format("[{:%Y-%m-%d %H:%M:%S} DEBUG]{}", fmt::localtime(_time64(0)),
                PluginOwnData::has(LOGGER_CURRENT_TITLE) ?
                " " : "[" + PluginOwnData::get<std::string>(LOGGER_CURRENT_TITLE) + "] ");
            RealPrint(str);
        }

        Debug(const Debug&) = delete;
        Debug& operator=(const Debug&) = delete;

        // Debug(string("There are {} days before {} to come back"), 3, "alex");
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Debug(const S& formatStr, const Args&... args)
            : Debug()
        {
            std::string str = fmt::format(formatStr, args...);
            str.append(1, '\n');
            RealPrint(str);
        }

        // Debug("There are {} days before {} to come back", 3, "alex");
        template <typename... Args>
        Debug(const char* formatStr, const Args&... args)
            : Debug()
        {
            std::string str = fmt::format(std::string(formatStr), args...);
            str.append(1, '\n');
            RealPrint(str);
        }

        // Debug().printf("%s, %d\n","Alex", 3);
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Debug& printf(const S& formatStr, const Args&... args)
        {
            std::string str = fmt::sprintf(formatStr, args...);
            RealPrint(str);
            return *this;
        }

        // Debug() << "test" << endl;
        template <typename T>
        Debug& operator<<(T value)
        {
            std::ostringstream sout;
            sout << value;
            RealPrint(sout.str());
            return *this;
        }

        Debug& operator<<(void (*obj)(Debug&))
        {
            obj(*this);
            return *this;
        }
    };

    // << endl
    inline void endl(Debug& logger)
    {
        lock();
        logger << '\n';
        unlock();
        logger.flush();
    }

    // << flush
    inline void flush(Debug& logger)
    {
        logger.flush();
    }

    //Info
    class Info : public Log
    {
    public:
        Info()
        {
            std::string str = fmt::format("[{:%Y-%m-%d %H:%M:%S} INFO]{}", fmt::localtime(_time64(0)),
                PluginOwnData::has(LOGGER_CURRENT_TITLE) ?
                " " : "[" + PluginOwnData::get<std::string>(LOGGER_CURRENT_TITLE) + "] ");
            RealPrint(str);
        }

        Info(const Info&) = delete;
        Info& operator=(const Info&) = delete;

        // Info(string("There are {} days before {} to come back"), 3, "alex");
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Info(const S& formatStr, const Args&... args)
            : Info()
        {
            std::string str = fmt::format(formatStr, args...);
            str.append(1, '\n');
            RealPrint(str);
        }

        // Info("There are {} days before {} to come back", 3, "alex");
        template <typename... Args>
        Info(const char* formatStr, const Args&... args)
            : Info()
        {
            std::string str = fmt::format(std::string(formatStr), args...);
            str.append(1, '\n');
            RealPrint(str);
        }

        // Info().printf("%s, %d\n","Alex", 3);
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Info& printf(const S& formatStr, const Args&... args)
        {
            std::string str = fmt::sprintf(formatStr, args...);
            RealPrint(str);
            return *this;
        }

        // Info() << "test" << endl;
        template <typename T>
        Info& operator<<(T value)
        {
            std::ostringstream sout;
            sout << value;
            RealPrint(sout.str());
            return *this;
        }

        Info& operator<<(void (*obj)(Info&))
        {
            obj(*this);
            return *this;
        }
    };

    // << endl
    inline void endl(Info& logger)
    {
        lock();
        logger << '\n';
        unlock();
        logger.flush();
    }

    // << flush
    inline void flush(Info& logger)
    {
        logger.flush();
    }

    //Warn
    class Warn : public Log
    {
    protected:
        void RealPrint(const std::string& str)
        {
            lock();
            fmt::print(fmt::fg(fmt::color::yellow) | fmt::emphasis::bold, str);
            if (PluginOwnData::has(LOGGER_CURRENT_FILE))
                fmt::print(GetFILEfromFstream(PluginOwnData::get<std::fstream>(LOGGER_CURRENT_FILE)), str);
            unlock();
        }

    public:
        Warn()
        {
            std::string str = fmt::format("[{:%Y-%m-%d %H:%M:%S} WARNING]{}", fmt::localtime(_time64(0)),
                PluginOwnData::has(LOGGER_CURRENT_TITLE) ?
                " " : "[" + PluginOwnData::get<std::string>(LOGGER_CURRENT_TITLE) + "] ");
            RealPrint(str);
        }

        Warn(const Warn&) = delete;
        Warn& operator=(const Warn&) = delete;

        // Warn(string("There are {} days before {} to come back"), 3, "alex");
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Warn(const S& formatStr, const Args&... args)
            : Warn()
        {
            std::string str = fmt::format(formatStr, args...);
            str.append(1, '\n');
            RealPrint(str);
        }

        // Warn("There are {} days before {} to come back", 3, "alex");
        template <typename... Args>
        Warn(const char* formatStr, const Args&... args)
            : Warn()
        {
            std::string str = fmt::format(std::string(formatStr), args...);
            str.append(1, '\n');
            RealPrint(str);
        }

        // Warn().printf("%s, %d\n","Alex", 3);
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Warn& printf(const S& formatStr, const Args&... args)
        {
            std::string str = fmt::sprintf(formatStr, args...);
            RealPrint(str);
            return *this;
        }

        // Warn() << "test" << endl;
        template <typename T>
        Warn& operator<<(T value)
        {
            std::ostringstream sout;
            sout << value;
            RealPrint(sout.str());
            return *this;
        }

        Warn& operator<<(void (*obj)(Warn&))
        {
            obj(*this);
            return *this;
        }
    };

    // << endl
    inline void endl(Warn& logger)
    {
        lock();
        logger << '\n';
        unlock();
        logger.flush();
    }

    // << flush
    inline void flush(Warn& logger)
    {
        logger.flush();
    }

    //Error
    class Error : public Log
    {
    protected:
        void RealPrint(const std::string& str)
        {
            lock();
            fmt::print(fmt::fg(fmt::color::red) | fmt::emphasis::bold, str);
            if (PluginOwnData::has(LOGGER_CURRENT_FILE))
                fmt::print(GetFILEfromFstream(PluginOwnData::get<std::fstream>(LOGGER_CURRENT_FILE)), str);
            unlock();
        }

    public:
        Error()
        {
            std::string str = fmt::format("[{:%Y-%m-%d %H:%M:%S} ERROR]{}", fmt::localtime(_time64(0)),
                PluginOwnData::has(LOGGER_CURRENT_TITLE) ?
                " " : "[" + PluginOwnData::get<std::string>(LOGGER_CURRENT_TITLE) + "] ");
            RealPrint(str);
        }

        Error(const Error&) = delete;
        Error& operator=(const Error&) = delete;

        // Error(string("There are {} days before {} to come back"), 3, "alex");
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Error(const S& formatStr, const Args&... args)
            : Error()
        {
            std::string str = fmt::format(formatStr, args...);
            str.append(1, '\n');
            RealPrint(str);
        }

        // Error("There are {} days before {} to come back", 3, "alex");
        template <typename... Args>
        Error(const char* formatStr, const Args&... args)
            : Error()
        {
            std::string str = fmt::format(std::string(formatStr), args...);
            str.append(1, '\n');
            RealPrint(str);
        }

        // Error().printf("%s, %d\n","Alex", 3);
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Error& printf(const S& formatStr, const Args&... args)
        {
            std::string str = fmt::sprintf(formatStr, args...);
            RealPrint(str);
            return *this;
        }

        // Error() << "test" << endl;
        template <typename T>
        Error& operator<<(T value)
        {
            std::ostringstream sout;
            sout << value;
            RealPrint(sout.str());
            return *this;
        }

        Error& operator<<(void (*obj)(Error&))
        {
            obj(*this);
            return *this;
        }
    };

    // << endl
    inline void endl(Error& logger)
    {
        lock();
        logger << '\n';
        unlock();
        logger.flush();
    }

    // << flush
    inline void flush(Error& logger)
    {
        logger.flush();
    }

    //Fatal
    class Fatal : public Log
    {
    protected:
        void RealPrint(const std::string& str)
        {
            lock();
            fmt::print(fmt::fg(fmt::color::red) | fmt::emphasis::bold, str);
            if (PluginOwnData::has(LOGGER_CURRENT_FILE))
                fmt::print(GetFILEfromFstream(PluginOwnData::get<std::fstream>(LOGGER_CURRENT_FILE)), str);
            unlock();
        }

    public:
        Fatal()
        {
            std::string str = fmt::format("[{:%Y-%m-%d %H:%M:%S} FATAL]{}", fmt::localtime(_time64(0)),
                PluginOwnData::has(LOGGER_CURRENT_TITLE) ?
                " " : "[" + PluginOwnData::get<std::string>(LOGGER_CURRENT_TITLE) + "] ");
            RealPrint(str);
        }

        Fatal(const Fatal&) = delete;
        Fatal& operator=(const Fatal&) = delete;

        // Fatal(string("There are {} days before {} to come back"), 3, "alex");
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Fatal(const S& formatStr, const Args&... args)
            : Fatal()
        {
            std::string str = fmt::format(formatStr, args...);
            str.append(1, '\n');
            RealPrint(str);
        }

        // Fatal("There are {} days before {} to come back", 3, "alex");
        template <typename... Args>
        Fatal(const char* formatStr, const Args&... args)
            : Fatal()
        {
            std::string str = fmt::format(std::string(formatStr), args...);
            str.append(1, '\n');
            RealPrint(str);
        }

        // Fatal().printf("%s, %d\n","Alex", 3);
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Fatal& printf(const S& formatStr, const Args&... args)
        {
            std::string str = fmt::sprintf(formatStr, args...);
            RealPrint(str);
            return *this;
        }

        // Fatal() << "test" << endl;
        template <typename T>
        Fatal& operator<<(T value)
        {
            std::ostringstream sout;
            sout << value;
            RealPrint(sout.str());
            return *this;
        }

        Fatal& operator<<(void (*obj)(Fatal&))
        {
            obj(*this);
            return *this;
        }
    };

    // << endl
    inline void endl(Fatal& logger)
    {
        lock();
        logger << '\n';
        unlock();
        logger.flush();
    }

    // << flush
    inline void flush(Fatal& logger)
    {
        logger.flush();
    }
} // namespace Logger

#undef LOGGER_CURRENT_TITLE