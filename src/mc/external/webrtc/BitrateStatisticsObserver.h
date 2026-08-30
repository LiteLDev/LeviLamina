#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class BitrateStatisticsObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BitrateStatisticsObserver();

    virtual void Notify(uint, uint, uint) = 0;
    // NOLINTEND
};

} // namespace webrtc
