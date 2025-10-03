#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class CallStatsObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void OnRttUpdate(int64, int64) = 0;

    // vIndex: 1
    virtual ~CallStatsObserver() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
