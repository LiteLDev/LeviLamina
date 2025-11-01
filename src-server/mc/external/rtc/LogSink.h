#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/LoggingSeverity.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class LogLineRef; }
// clang-format on

namespace rtc {

class LogSink {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd8abd6;
    ::ll::UntypedStorage<4, 4> mUnkdd580a;
    // NOLINTEND

public:
    // prevent constructor by default
    LogSink& operator=(LogSink const&);
    LogSink(LogSink const&);
    LogSink();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LogSink() = default;

    // vIndex: 7
    virtual void OnLogMessage(::std::string const& msg, ::rtc::LoggingSeverity severity, char const* tag);

    // vIndex: 6
    virtual void OnLogMessage(::std::string const& msg, ::rtc::LoggingSeverity);

    // vIndex: 5
    virtual void OnLogMessage(::std::string const&) = 0;

    // vIndex: 4
    virtual void OnLogMessage(::std::string_view msg, ::rtc::LoggingSeverity severity, char const* tag);

    // vIndex: 3
    virtual void OnLogMessage(::std::string_view msg, ::rtc::LoggingSeverity);

    // vIndex: 2
    virtual void OnLogMessage(::std::string_view msg);

    // vIndex: 1
    virtual void OnLogMessage(::rtc::LogLineRef const& log_line);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnLogMessage(::std::string const& msg, ::rtc::LoggingSeverity severity, char const* tag);

    MCNAPI void $OnLogMessage(::std::string const& msg, ::rtc::LoggingSeverity);

    MCNAPI void $OnLogMessage(::std::string_view msg, ::rtc::LoggingSeverity severity, char const* tag);

    MCNAPI void $OnLogMessage(::std::string_view msg, ::rtc::LoggingSeverity);

    MCNAPI void $OnLogMessage(::std::string_view msg);

    MCNAPI void $OnLogMessage(::rtc::LogLineRef const& log_line);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
