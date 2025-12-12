#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class BitrateStatisticsObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BitrateStatisticsObserver() = default;

    virtual void Notify(uint, uint, uint) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
