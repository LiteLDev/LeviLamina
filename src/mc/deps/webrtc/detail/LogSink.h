#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/LoggingSeverity.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class LogLineRef; }
// clang-format on

namespace rtc {

class LogSink {
public:
    // prevent constructor by default
    LogSink& operator=(LogSink const&);
    LogSink(LogSink const&);
    LogSink();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LogSink@rtc@@UEAA@XZ
    virtual ~LogSink() = default;

    // vIndex: 1, symbol:
    // ?OnLogMessage@LogSink@rtc@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4LoggingSeverity@2@PEBD@Z
    virtual void OnLogMessage(std::string const&, ::rtc::LoggingSeverity, char const*);

    // vIndex: 2, symbol:
    // ?OnLogMessage@LogSink@rtc@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4LoggingSeverity@2@@Z
    virtual void OnLogMessage(std::string const&, ::rtc::LoggingSeverity);

    // vIndex: 3, symbol:
    // ?OnLogMessage@SimpleLogSink@NetherNet@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void OnLogMessage(std::string const&) = 0;

    // vIndex: 4, symbol:
    // ?OnLogMessage@LogSink@rtc@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@W4LoggingSeverity@2@PEBD@Z
    virtual void OnLogMessage(std::string_view, ::rtc::LoggingSeverity, char const*);

    // vIndex: 5, symbol:
    // ?OnLogMessage@LogSink@rtc@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@W4LoggingSeverity@2@@Z
    virtual void OnLogMessage(std::string_view, ::rtc::LoggingSeverity);

    // vIndex: 6, symbol: ?OnLogMessage@LogSink@rtc@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void OnLogMessage(std::string_view);

    // vIndex: 7, symbol: ?OnLogMessage@LogSink@rtc@@UEAAXAEBVLogLineRef@2@@Z
    virtual void OnLogMessage(class rtc::LogLineRef const&);

    // NOLINTEND
};

}; // namespace rtc
