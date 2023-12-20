#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
namespace webrtc { struct TargetTransferRate; }
// clang-format on

namespace webrtc {

class CongestionControlHandler {
public:
    // prevent constructor by default
    CongestionControlHandler& operator=(CongestionControlHandler const&);
    CongestionControlHandler(CongestionControlHandler const&);

public:
    // NOLINTBEGIN
    // symbol: ??0CongestionControlHandler@webrtc@@QEAA@XZ
    MCAPI CongestionControlHandler();

    // symbol: ?GetUpdate@CongestionControlHandler@webrtc@@QEAA?AV?$optional@UTargetTransferRate@webrtc@@@std@@XZ
    MCAPI std::optional<struct webrtc::TargetTransferRate> GetUpdate();

    // symbol: ?SetNetworkAvailability@CongestionControlHandler@webrtc@@QEAAX_N@Z
    MCAPI void SetNetworkAvailability(bool);

    // symbol: ?SetPacerQueue@CongestionControlHandler@webrtc@@QEAAXVTimeDelta@2@@Z
    MCAPI void SetPacerQueue(class webrtc::TimeDelta);

    // symbol: ?SetTargetRate@CongestionControlHandler@webrtc@@QEAAXUTargetTransferRate@2@@Z
    MCAPI void SetTargetRate(struct webrtc::TargetTransferRate);

    // symbol: ??1CongestionControlHandler@webrtc@@QEAA@XZ
    MCAPI ~CongestionControlHandler();

    // NOLINTEND
};

}; // namespace webrtc
