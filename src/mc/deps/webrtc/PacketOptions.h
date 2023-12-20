#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PacketOptions {
public:
    // prevent constructor by default
    PacketOptions& operator=(PacketOptions const&);
    PacketOptions(PacketOptions const&);

public:
    // NOLINTBEGIN
    // symbol: ??0PacketOptions@webrtc@@QEAA@XZ
    MCAPI PacketOptions();

    // symbol: ??1PacketOptions@webrtc@@QEAA@XZ
    MCAPI ~PacketOptions();

    // NOLINTEND
};

}; // namespace webrtc
