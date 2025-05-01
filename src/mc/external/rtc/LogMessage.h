#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/LogErrorContext.h"
#include "mc/external/rtc/LoggingSeverity.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class LogLineRef; }
namespace rtc { class LogSink; }
namespace rtc { class StringBuilder; }
// clang-format on

namespace rtc {

class LogMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnkf7d9ea;
    ::ll::UntypedStorage<8, 32> mUnk22d92a;
    ::ll::UntypedStorage<8, 32> mUnkb272f2;
    // NOLINTEND

public:
    // prevent constructor by default
    LogMessage& operator=(LogMessage const&);
    LogMessage(LogMessage const&);
    LogMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void FinishPrintStream();

    MCNAPI LogMessage(char const*, int, ::rtc::LoggingSeverity, ::rtc::LogErrorContext, int);

    MCNAPI ::rtc::StringBuilder& stream();

    MCNAPI ~LogMessage();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void AddLogToStream(::rtc::LogSink*, ::rtc::LoggingSeverity);

    MCNAPI static int GetMinLogSeverity();

    MCNAPI static bool IsNoop(::rtc::LoggingSeverity);

    MCNAPI static int64 LogStartTime();

    MCNAPI static void OutputToDebug(::rtc::LogLineRef const&);

    MCNAPI static void RemoveLogToStream(::rtc::LogSink*);

    MCNAPI static void UpdateMinLogSeverity();

    MCNAPI static uint WallClockStartTime();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool& log_thread_();

    MCAPI static bool& log_timestamp_();

    MCAPI static bool& log_to_stderr_();

    MCAPI static ::rtc::LogSink*& streams_();

    MCAPI static ::std::atomic<bool>& streams_empty_();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(char const*, int, ::rtc::LoggingSeverity, ::rtc::LogErrorContext, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
