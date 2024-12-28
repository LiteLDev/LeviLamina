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
    CongestionControlHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::webrtc::TargetTransferRate> GetUpdate();

    MCAPI void SetNetworkAvailability(bool);

    MCAPI void SetPacerQueue(::webrtc::TimeDelta);

    MCAPI void SetTargetRate(::webrtc::TargetTransferRate);
    // NOLINTEND
};

} // namespace webrtc
