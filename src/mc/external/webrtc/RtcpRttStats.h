#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpRttStats {
public:
    // prevent constructor by default
    RtcpRttStats& operator=(RtcpRttStats const&);
    RtcpRttStats(RtcpRttStats const&);
    RtcpRttStats();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void OnRttUpdate(int64) = 0;

    // vIndex: 1
    virtual int64 LastProcessedRtt() const = 0;

    // vIndex: 2
    virtual ~RtcpRttStats() = default;
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
