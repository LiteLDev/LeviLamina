#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Timestamp; }
namespace webrtc { struct GoogCcConfig; }
namespace webrtc { struct NetworkControlUpdate; }
namespace webrtc { struct NetworkControllerConfig; }
namespace webrtc { struct PacerConfig; }
namespace webrtc { struct ProbeClusterConfig; }
namespace webrtc { struct TargetRateConstraints; }
// clang-format on

namespace webrtc {

class GoogCcNetworkController {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void ClampConstraints();

    MCAPI ::webrtc::PacerConfig GetPacingRates(::webrtc::Timestamp) const;

    MCAPI GoogCcNetworkController(::webrtc::NetworkControllerConfig, ::webrtc::GoogCcConfig);

    MCAPI void MaybeTriggerOnNetworkChanged(::webrtc::NetworkControlUpdate*, ::webrtc::Timestamp);

    MCAPI ::std::vector<::webrtc::ProbeClusterConfig> ResetConstraints(::webrtc::TargetRateConstraints);

    MCAPI void UpdateCongestionWindowSize();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::NetworkControllerConfig, ::webrtc::GoogCcConfig);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
