#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

namespace dcsctp {

class HeartbeatInfoParameter {
public:
    // prevent constructor by default
    HeartbeatInfoParameter& operator=(HeartbeatInfoParameter const&);
    HeartbeatInfoParameter(HeartbeatInfoParameter const&);
    HeartbeatInfoParameter();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1HeartbeatInfoParameter@dcsctp@@UEAA@XZ
    virtual ~HeartbeatInfoParameter();

    // vIndex: 1, symbol: ?SerializeTo@HeartbeatInfoParameter@dcsctp@@UEBAXAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual void SerializeTo(std::vector<uchar>&) const;

    // vIndex: 2, symbol:
    // ?ToString@HeartbeatInfoParameter@dcsctp@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToString() const;

    // symbol:
    // ?Parse@HeartbeatInfoParameter@dcsctp@@SA?AV?$optional@VHeartbeatInfoParameter@dcsctp@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::optional<class dcsctp::HeartbeatInfoParameter> Parse(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
