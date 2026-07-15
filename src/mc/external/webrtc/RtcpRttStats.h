#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpRttStats {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcpRttStats() = default;

    virtual void OnRttUpdate(int64) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
