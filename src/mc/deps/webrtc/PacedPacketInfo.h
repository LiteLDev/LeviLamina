#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PacedPacketInfo {
public:
    // prevent constructor by default
    PacedPacketInfo& operator=(PacedPacketInfo const&);
    PacedPacketInfo(PacedPacketInfo const&);

public:
    // NOLINTBEGIN
    // symbol: ??0PacedPacketInfo@webrtc@@QEAA@XZ
    MCAPI PacedPacketInfo();

    // NOLINTEND
};

}; // namespace webrtc
