#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct NetworkRoute {
public:
    // prevent constructor by default
    NetworkRoute& operator=(NetworkRoute const&);
    NetworkRoute(NetworkRoute const&);
    NetworkRoute();

public:
    // NOLINTBEGIN
    // symbol: ?DebugString@NetworkRoute@rtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string DebugString() const;

    // symbol: ??8NetworkRoute@rtc@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct rtc::NetworkRoute const&) const;

    // NOLINTEND
};

}; // namespace rtc
