#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

namespace dcsctp {

class OutgoingSSNResetRequestParameter {
public:
    // prevent constructor by default
    OutgoingSSNResetRequestParameter& operator=(OutgoingSSNResetRequestParameter const&);
    OutgoingSSNResetRequestParameter(OutgoingSSNResetRequestParameter const&);
    OutgoingSSNResetRequestParameter();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1OutgoingSSNResetRequestParameter@dcsctp@@UEAA@XZ
    virtual ~OutgoingSSNResetRequestParameter();

    // vIndex: 1, symbol:
    // ?SerializeTo@OutgoingSSNResetRequestParameter@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@OutgoingSSNResetRequestParameter@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@OutgoingSSNResetRequestParameter@dcsctp@@SA?AV?$optional@VOutgoingSSNResetRequestParameter@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::OutgoingSSNResetRequestParameter>
        Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
