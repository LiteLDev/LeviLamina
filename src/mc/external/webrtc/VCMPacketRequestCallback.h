#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class VCMPacketRequestCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual int ResendPackets(ushort const*, ushort) = 0;

    // vIndex: 1
    virtual ~VCMPacketRequestCallback() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
