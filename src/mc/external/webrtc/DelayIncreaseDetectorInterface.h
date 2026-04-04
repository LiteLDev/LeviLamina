#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BandwidthUsage.h"

namespace webrtc {

class DelayIncreaseDetectorInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DelayIncreaseDetectorInterface();

    virtual void Update(
        double recv_delta_ms,
        double send_delta_ms,
        int64  send_time_ms,
        int64  arrival_time_ms,
        uint64 packet_size,
        bool   calculated_deltas
    ) = 0;

    virtual ::webrtc::BandwidthUsage State() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
