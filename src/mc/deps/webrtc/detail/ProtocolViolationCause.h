#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace dcsctp {

class ProtocolViolationCause {
public:
    // prevent constructor by default
    ProtocolViolationCause& operator=(ProtocolViolationCause const&);
    ProtocolViolationCause(ProtocolViolationCause const&);
    ProtocolViolationCause();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ProtocolViolationCause@dcsctp@@UEAA@XZ
    virtual ~ProtocolViolationCause();

    // vIndex: 1, symbol: ?SerializeTo@ProtocolViolationCause@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@ProtocolViolationCause@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@ProtocolViolationCause@dcsctp@@SA?AV?$optional@VProtocolViolationCause@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::ProtocolViolationCause> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
