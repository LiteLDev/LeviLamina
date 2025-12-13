#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class VCMPacketRequestCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int ResendPackets(ushort const*, ushort) = 0;

    virtual ~VCMPacketRequestCallback() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
