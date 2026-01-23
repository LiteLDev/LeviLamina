#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/LogErrorContext.h"
#include "mc/external/rtc/LoggingSeverity.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class LogSink; }
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
    MCNAPI LogMessage(char const* file, int line, ::rtc::LoggingSeverity sev, ::rtc::LogErrorContext err_ctx, int err);

    MCNAPI ~LogMessage();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void AddLogToStream(::rtc::LogSink* stream, ::rtc::LoggingSeverity min_sev);

    MCNAPI static int GetMinLogSeverity();

    MCNAPI static bool IsNoop(::rtc::LoggingSeverity severity);

    MCNAPI static void RemoveLogToStream(::rtc::LogSink* stream);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool& log_thread_();

    MCNAPI static bool& log_timestamp_();

    MCNAPI static bool& log_to_stderr_();

    MCNAPI static ::rtc::LogSink*& streams_();

    MCNAPI static ::std::atomic<bool>& streams_empty_();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(char const* file, int line, ::rtc::LoggingSeverity sev, ::rtc::LogErrorContext err_ctx, int err);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
