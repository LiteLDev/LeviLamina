#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

namespace dcsctp {

class StateCookieParameter {
public:
    // prevent constructor by default
    StateCookieParameter& operator=(StateCookieParameter const&);
    StateCookieParameter(StateCookieParameter const&);
    StateCookieParameter();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StateCookieParameter@dcsctp@@UEAA@XZ
    virtual ~StateCookieParameter();

    // vIndex: 1, symbol: ?SerializeTo@StateCookieParameter@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@StateCookieParameter@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@StateCookieParameter@dcsctp@@SA?AV?$optional@VStateCookieParameter@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::StateCookieParameter> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
