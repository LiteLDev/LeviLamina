#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BandwidthUsage.h"

namespace webrtc {

class NetworkStatePredictor {
public:
    // prevent constructor by default
    NetworkStatePredictor& operator=(NetworkStatePredictor const&);
    NetworkStatePredictor(NetworkStatePredictor const&);
    NetworkStatePredictor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkStatePredictor();

    // vIndex: 1
    virtual ::webrtc::BandwidthUsage Update(int64, int64, ::webrtc::BandwidthUsage) = 0;
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
