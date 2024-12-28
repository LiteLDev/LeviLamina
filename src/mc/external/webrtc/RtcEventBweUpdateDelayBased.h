#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BandwidthUsage.h"

namespace webrtc {

class RtcEventBweUpdateDelayBased {
public:
    // prevent constructor by default
    RtcEventBweUpdateDelayBased& operator=(RtcEventBweUpdateDelayBased const&);
    RtcEventBweUpdateDelayBased(RtcEventBweUpdateDelayBased const&);
    RtcEventBweUpdateDelayBased();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RtcEventBweUpdateDelayBased(int, ::webrtc::BandwidthUsage);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int, ::webrtc::BandwidthUsage);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
