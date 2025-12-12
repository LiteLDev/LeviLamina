#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class CallStatsObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnRttUpdate(int64, int64) = 0;

    virtual ~CallStatsObserver() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
