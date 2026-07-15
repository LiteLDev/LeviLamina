#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/LoggingSeverity.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class LogLineRef; }
// clang-format on

namespace webrtc {

class LogSink {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkdc7954;
    ::ll::UntypedStorage<4, 4> mUnkd2c4ba;
    // NOLINTEND

public:
    // prevent constructor by default
    LogSink& operator=(LogSink const&);
    LogSink(LogSink const&);
    LogSink();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LogSink() = default;

    virtual void OnLogMessage(::std::string const& msg, ::webrtc::LoggingSeverity severity, char const* tag);

    virtual void OnLogMessage(::std::string const&, ::webrtc::LoggingSeverity);

    virtual void OnLogMessage(::std::string const&) = 0;

    virtual void OnLogMessage(::std::string_view msg, ::webrtc::LoggingSeverity severity, char const* tag);

    virtual void OnLogMessage(::std::string_view msg, ::webrtc::LoggingSeverity);

    virtual void OnLogMessage(::std::string_view msg);

    virtual void OnLogMessage(::webrtc::LogLineRef const& log_line);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnLogMessage(::std::string const& msg, ::webrtc::LoggingSeverity severity, char const* tag);

    MCNAPI void $OnLogMessage(::std::string_view msg, ::webrtc::LoggingSeverity severity, char const* tag);

    MCNAPI void $OnLogMessage(::std::string_view msg, ::webrtc::LoggingSeverity);

    MCNAPI void $OnLogMessage(::std::string_view msg);

    MCNAPI void $OnLogMessage(::webrtc::LogLineRef const& log_line);


    // NOLINTEND
};

} // namespace webrtc
