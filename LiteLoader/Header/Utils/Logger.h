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
#include <string>
#include <iostream>

/////////////////////////////////////////////////
// Usage:
// 
//   using namespace Logger;
// 
//   Info("There are {} days before {} to come back", 3, "alex");   //FMT-style IO
//                                                                  //with Auto Line-Wrap
//
//   Info().printf("%s, %d\n","Alex", 3);   //C-style IO
//   Info() << "test" << endl;              //STL-style IO
// 
// [Debug, Log, Info, Warn, Error, Fatal]
// 
/////////////////////////////////////////////////

std::string GetCurrentDateTimeStr();

namespace Logger
{
    template <bool B, class T = void>
    using enable_if_t = typename std::enable_if<B, T>::type;

    CsLock lock;
    std::ofstream* logFile;
    std::string logHead = "";

    void RealPrint(const string &str) {
        lock.lock();
        fmt::print(str);
        if (logFile)
            fmt::print(GetFILEfromFstream(*(fstream*)logFile), str);
        lock.unlock();
    }

    class Log {
    public:
        // Header
        Log() = default;

        Log(const Log&) = delete;

        // Log("There are {} days before {} to come back", 3, "alex");
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Log(const S& formatStr, const Args&... args)
            : Log()
        {
            std::string str = fmt::format(formatStr, args...);
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
            lock.lock();
            std::cout << value;
            lock.unlock();
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
            lock.lock();
            fflush(stdout);
            std::cout.flush();
            lock.unlock();
            return *this;
        }
    };

    inline void endl(Log& logger)
    {
        lock.lock();
        logger << '\n';
        lock.unlock();
        logger.flush();
    }

    class Debug {
    public:

        // Header
        Debug()
        {
            std::string str = fmt::format("[{:%Y-%m-%d %H:%M:%S} Debug]{}", fmt::localtime(_time64(0)), 
                logHead.empty() ? " " : "[" + logHead + "] ");
            RealPrint(str);
        }

        Debug(const Debug&) = delete;

        // Debug("There are {} days before {} to come back", 3, "alex");
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Debug(const S& formatStr, const Args&... args)
            : Debug()
        {
            std::string str = fmt::format(formatStr, args...);
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
        Debug& operator<<(T value) {
            lock.lock();
            std::cout << value;
            lock.unlock();
            return *this;
        }

        Debug& operator<<(void (*obj)(Debug&)) {
            obj(*this);
            return *this;
        }

        // flush
        Debug& flush() {
            lock.lock();
            fflush(stdout);
            std::cout.flush();
            lock.unlock();
            return *this;
        }
    };

    inline void endl(Debug& logger) {
        lock.lock();
        logger << '\n';
        lock.unlock();
        logger.flush();
    }

    class Info {
    public:

        // Header
        Info()
        {
            std::string str = fmt::format("[{:%Y-%m-%d %H:%M:%S} Info]{}", fmt::localtime(_time64(0)),
                logHead.empty() ? " " : "[" + logHead + "] ");
            RealPrint(str);
        }

        Info(const Info&) = delete;

        // Info("There are {} days before {} to come back", 3, "alex");
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Info(const S& formatStr, const Args&... args)
            : Info()
        {
            std::string str = fmt::format(formatStr, args...);
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
        Info& operator<<(T value) {
            lock.lock();
            std::cout << value;
            lock.unlock();
            return *this;
        }

        Info& operator<<(void (*obj)(Info&)) {
            obj(*this);
            return *this;
        }

        // flush
        Info& flush() {
            lock.lock();
            fflush(stdout);
            std::cout.flush();
            lock.unlock();
            return *this;
        }
    };

    inline void endl(Info& logger) {
        lock.lock();
        logger << '\n';
        lock.unlock();
        logger.flush();
    }

    class Warn {
    public:

        // Header
        Warn()
        {
            std::string str = fmt::format("[{:%Y-%m-%d %H:%M:%S} Warning]{}", fmt::localtime(_time64(0)),
                logHead.empty() ? " " : "[" + logHead + "] ");
            RealPrint(str);
        }

        Warn(const Warn&) = delete;

        // Warn("There are {} days before {} to come back", 3, "alex");
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Warn(const S& formatStr, const Args&... args)
            : Warn()
        {
            std::string str = fmt::format(formatStr, args...);
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
        Warn& operator<<(T value) {
            lock.lock();
            std::cout << value;
            lock.unlock();
            return *this;
        }

        Warn& operator<<(void (*obj)(Warn&)) {
            obj(*this);
            return *this;
        }

        // flush
        Warn& flush() {
            lock.lock();
            fflush(stdout);
            std::cout.flush();
            lock.unlock();
            return *this;
        }
    };

    inline void endl(Warn& logger) {
        lock.lock();
        logger << '\n';
        lock.unlock();
        logger.flush();
    }

    class Error {
    public:

        // Header
        Error()
        {
            std::string str = fmt::format("[{:%Y-%m-%d %H:%M:%S} Error]{}", fmt::localtime(_time64(0)),
                logHead.empty() ? " " : "[" + logHead + "] ");
            RealPrint(str);
        }

        Error(const Error&) = delete;

        // Error("There are {} days before {} to come back", 3, "alex");
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Error(const S& formatStr, const Args&... args)
            : Error()
        {
            std::string str = fmt::format(formatStr, args...);
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
        Error& operator<<(T value) {
            lock.lock();
            std::cout << value;
            lock.unlock();
            return *this;
        }

        Error& operator<<(void (*obj)(Error&)) {
            obj(*this);
            return *this;
        }

        // flush
        Error& flush() {
            lock.lock();
            fflush(stdout);
            std::cout.flush();
            lock.unlock();
            return *this;
        }
    };

    inline void endl(Error& logger) {
        lock.lock();
        logger << '\n';
        lock.unlock();
        logger.flush();
    }

    class Fatal {
    public:

        // Header
        Fatal()
        {
            std::string str = fmt::format("[{:%Y-%m-%d %H:%M:%S} FATAL]{}", fmt::localtime(_time64(0)),
                logHead.empty() ? " " : "[" + logHead + "] ");
            RealPrint(str);
        }

        Fatal(const Fatal&) = delete;

        // Fatal("There are {} days before {} to come back", 3, "alex");
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Fatal(const S& formatStr, const Args&... args)
            : Fatal()
        {
            std::string str = fmt::format(formatStr, args...);
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
        Fatal& operator<<(T value) {
            lock.lock();
            std::cout << value;
            lock.unlock();
            return *this;
        }

        Fatal& operator<<(void (*obj)(Fatal&)) {
            obj(*this);
            return *this;
        }

        // flush
        Fatal& flush() {
            lock.lock();
            fflush(stdout);
            std::cout.flush();
            lock.unlock();
            return *this;
        }
    };

    inline void endl(Fatal& logger) {
        lock.lock();
        logger << '\n';
        lock.unlock();
        logger.flush();
    }
} // namespace Logger
