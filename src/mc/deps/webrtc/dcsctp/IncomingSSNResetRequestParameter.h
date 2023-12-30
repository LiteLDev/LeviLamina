#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

namespace dcsctp {

class IncomingSSNResetRequestParameter {
public:
    // prevent constructor by default
    IncomingSSNResetRequestParameter& operator=(IncomingSSNResetRequestParameter const&);
    IncomingSSNResetRequestParameter(IncomingSSNResetRequestParameter const&);
    IncomingSSNResetRequestParameter();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IncomingSSNResetRequestParameter@dcsctp@@UEAA@XZ
    virtual ~IncomingSSNResetRequestParameter();

    // vIndex: 1, symbol:
    // ?SerializeTo@IncomingSSNResetRequestParameter@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@IncomingSSNResetRequestParameter@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@IncomingSSNResetRequestParameter@dcsctp@@SA?AV?$optional@VIncomingSSNResetRequestParameter@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::IncomingSSNResetRequestParameter>
        Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
