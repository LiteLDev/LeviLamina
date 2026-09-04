#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/LogErrorContext.h"
#include "mc/external/webrtc/LoggingSeverity.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class LogSink; }
// clang-format on

namespace webrtc {

class LogMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk134f2e;
    ::ll::UntypedStorage<8, 32> mUnkb12620;
    ::ll::UntypedStorage<8, 32> mUnk245a4b;
    // NOLINTEND

public:
    // prevent constructor by default
    LogMessage& operator=(LogMessage const&);
    LogMessage(LogMessage const&);
    LogMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    LogMessage(char const* file, int line, ::webrtc::LoggingSeverity sev, ::webrtc::LogErrorContext err_ctx, int err);

    MCNAPI ~LogMessage();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void AddLogToStream(::webrtc::LogSink* stream, ::webrtc::LoggingSeverity min_sev);

    MCNAPI static int GetMinLogSeverity();

    MCNAPI static bool IsNoop(::webrtc::LoggingSeverity severity);

    MCNAPI static void RemoveLogToStream(::webrtc::LogSink* stream);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool& log_thread_();

    MCNAPI static bool& log_timestamp_();

    MCNAPI static bool& log_to_stderr_();

    MCNAPI static ::webrtc::LogSink*& streams_();

    MCNAPI static ::std::atomic<bool>& streams_empty_();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(char const* file, int line, ::webrtc::LoggingSeverity sev, ::webrtc::LogErrorContext err_ctx, int err);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
