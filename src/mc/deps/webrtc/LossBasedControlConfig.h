#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

class LossBasedControlConfig {
public:
    // prevent constructor by default
    LossBasedControlConfig& operator=(LossBasedControlConfig const&);
    LossBasedControlConfig(LossBasedControlConfig const&);
    LossBasedControlConfig();

public:
    // NOLINTBEGIN
    // symbol: ??0LossBasedControlConfig@webrtc@@QEAA@PEBVFieldTrialsView@1@@Z
    MCAPI explicit LossBasedControlConfig(class webrtc::FieldTrialsView const*);

    // symbol: ??1LossBasedControlConfig@webrtc@@QEAA@XZ
    MCAPI ~LossBasedControlConfig();

    // NOLINTEND
};

}; // namespace webrtc
