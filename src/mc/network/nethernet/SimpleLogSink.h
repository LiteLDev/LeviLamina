#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/LogSink.h"
#include "mc/deps/webrtc/detail/LoggingSeverity.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class LogLineRef; }
namespace rtc { class LogSink; }
// clang-format on

namespace NetherNet {

class SimpleLogSink : public ::rtc::LogSink {
public:
    // prevent constructor by default
    SimpleLogSink& operator=(SimpleLogSink const&);
    SimpleLogSink(SimpleLogSink const&);
    SimpleLogSink();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SimpleLogSink@NetherNet@@UEAA@XZ
    virtual ~SimpleLogSink() = default;

    // vIndex: 3, symbol:
    // ?OnLogMessage@SimpleLogSink@NetherNet@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void OnLogMessage(std::string const&);

    // NOLINTEND
};

}; // namespace NetherNet
