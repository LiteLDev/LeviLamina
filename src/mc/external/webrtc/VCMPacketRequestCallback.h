#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class VCMPacketRequestCallback {
public:
    // prevent constructor by default
    VCMPacketRequestCallback& operator=(VCMPacketRequestCallback const&);
    VCMPacketRequestCallback(VCMPacketRequestCallback const&);
    VCMPacketRequestCallback();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual int ResendPackets(ushort const*, ushort) = 0;

    // vIndex: 1
    virtual ~VCMPacketRequestCallback();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
