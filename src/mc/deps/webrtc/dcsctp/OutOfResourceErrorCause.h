#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

namespace dcsctp {

class OutOfResourceErrorCause {
public:
    // prevent constructor by default
    OutOfResourceErrorCause& operator=(OutOfResourceErrorCause const&);
    OutOfResourceErrorCause(OutOfResourceErrorCause const&);
    OutOfResourceErrorCause();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OutOfResourceErrorCause@dcsctp@@UEAA@XZ
    virtual ~OutOfResourceErrorCause() = default;

    // vIndex: 1, symbol: ?SerializeTo@OutOfResourceErrorCause@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@OutOfResourceErrorCause@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@OutOfResourceErrorCause@dcsctp@@SA?AV?$optional@VOutOfResourceErrorCause@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::OutOfResourceErrorCause> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
