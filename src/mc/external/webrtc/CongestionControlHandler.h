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
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::webrtc::TargetTransferRate> GetUpdate();

    MCNAPI void SetNetworkAvailability(bool);

    MCNAPI void SetPacerQueue(::webrtc::TimeDelta);

    MCNAPI void SetTargetRate(::webrtc::TargetTransferRate);
    // NOLINTEND
};

} // namespace webrtc
