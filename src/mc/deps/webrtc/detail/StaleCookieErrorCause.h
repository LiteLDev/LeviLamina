#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace dcsctp {

class StaleCookieErrorCause {
public:
    // prevent constructor by default
    StaleCookieErrorCause& operator=(StaleCookieErrorCause const&);
    StaleCookieErrorCause(StaleCookieErrorCause const&);
    StaleCookieErrorCause();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StaleCookieErrorCause@dcsctp@@UEAA@XZ
    virtual ~StaleCookieErrorCause() = default;

    // vIndex: 1, symbol: ?SerializeTo@StaleCookieErrorCause@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@StaleCookieErrorCause@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@StaleCookieErrorCause@dcsctp@@SA?AV?$optional@VStaleCookieErrorCause@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::StaleCookieErrorCause> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
