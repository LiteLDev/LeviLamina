#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

class ProbeControllerConfig {
public:
    // prevent constructor by default
    ProbeControllerConfig& operator=(ProbeControllerConfig const&);
    ProbeControllerConfig(ProbeControllerConfig const&);
    ProbeControllerConfig();

public:
    // NOLINTBEGIN
    // symbol: ??0ProbeControllerConfig@webrtc@@QEAA@PEBVFieldTrialsView@1@@Z
    MCAPI explicit ProbeControllerConfig(class webrtc::FieldTrialsView const*);

    // symbol: ??1ProbeControllerConfig@webrtc@@QEAA@XZ
    MCAPI ~ProbeControllerConfig();

    // NOLINTEND
};

}; // namespace webrtc
