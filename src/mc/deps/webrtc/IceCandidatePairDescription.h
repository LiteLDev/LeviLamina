#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class IceCandidatePairDescription {
public:
    // prevent constructor by default
    IceCandidatePairDescription& operator=(IceCandidatePairDescription const&);

public:
    // NOLINTBEGIN
    // symbol: ??0IceCandidatePairDescription@webrtc@@QEAA@XZ
    MCAPI IceCandidatePairDescription();

    // symbol: ??0IceCandidatePairDescription@webrtc@@QEAA@AEBV01@@Z
    MCAPI IceCandidatePairDescription(class webrtc::IceCandidatePairDescription const&);

    // symbol: ??1IceCandidatePairDescription@webrtc@@QEAA@XZ
    MCAPI ~IceCandidatePairDescription();

    // NOLINTEND
};

}; // namespace webrtc
