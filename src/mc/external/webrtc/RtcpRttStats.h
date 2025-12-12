#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpRttStats {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnRttUpdate(int64) = 0;

    virtual int64 LastProcessedRtt() const = 0;

    virtual ~RtcpRttStats() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
