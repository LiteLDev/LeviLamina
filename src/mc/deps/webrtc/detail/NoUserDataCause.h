#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace dcsctp {

class NoUserDataCause {
public:
    // prevent constructor by default
    NoUserDataCause& operator=(NoUserDataCause const&);
    NoUserDataCause(NoUserDataCause const&);
    NoUserDataCause();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NoUserDataCause@dcsctp@@UEAA@XZ
    virtual ~NoUserDataCause() = default;

    // vIndex: 1, symbol: ?SerializeTo@NoUserDataCause@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@NoUserDataCause@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@NoUserDataCause@dcsctp@@SA?AV?$optional@VNoUserDataCause@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::NoUserDataCause> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
