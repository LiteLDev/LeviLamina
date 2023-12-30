#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

namespace dcsctp {

class StateCookie {
public:
    // prevent constructor by default
    StateCookie& operator=(StateCookie const&);
    StateCookie(StateCookie const&);
    StateCookie();

public:
    // NOLINTBEGIN
    // symbol: ?Serialize@StateCookie@dcsctp@@QEAA?AV?$vector@EV?$allocator@E@std@@@std@@XZ
    MCAPI std::vector<uchar> Serialize();

    // symbol:
    // ?Deserialize@StateCookie@dcsctp@@SA?AV?$optional@VStateCookie@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::StateCookie> Deserialize(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
