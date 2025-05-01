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
    MCNAPI void ClampConstraints();

    MCNAPI ::webrtc::PacerConfig GetPacingRates(::webrtc::Timestamp) const;

    MCNAPI GoogCcNetworkController(::webrtc::NetworkControllerConfig, ::webrtc::GoogCcConfig);

    MCNAPI void MaybeTriggerOnNetworkChanged(::webrtc::NetworkControlUpdate*, ::webrtc::Timestamp);

    MCNAPI ::std::vector<::webrtc::ProbeClusterConfig> ResetConstraints(::webrtc::TargetRateConstraints);

    MCNAPI void UpdateCongestionWindowSize();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::NetworkControllerConfig, ::webrtc::GoogCcConfig);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
