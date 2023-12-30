#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DurationMs; }
namespace dcsctp { class TimeoutTag; }
// clang-format on

namespace dcsctp {

class Timeout {
public:
    // prevent constructor by default
    Timeout& operator=(Timeout const&);
    Timeout(Timeout const&);
    Timeout();

public:
    // NOLINTBEGIN
    // symbol: ?Restart@Timeout@dcsctp@@UEAAXVDurationMs@2@V?$StrongAlias@VTimeoutTag@dcsctp@@_K@webrtc@@@Z
    MCVAPI void Restart(class dcsctp::DurationMs, class webrtc::StrongAlias<class dcsctp::TimeoutTag, uint64>);

    // NOLINTEND
};

}; // namespace dcsctp
