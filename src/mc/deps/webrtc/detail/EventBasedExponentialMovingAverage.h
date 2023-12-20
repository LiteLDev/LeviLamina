#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class EventBasedExponentialMovingAverage {
public:
    // prevent constructor by default
    EventBasedExponentialMovingAverage& operator=(EventBasedExponentialMovingAverage const&);
    EventBasedExponentialMovingAverage(EventBasedExponentialMovingAverage const&);
    EventBasedExponentialMovingAverage();

public:
    // NOLINTBEGIN
    // symbol: ?AddSample@EventBasedExponentialMovingAverage@rtc@@QEAAX_JH@Z
    MCAPI void AddSample(int64, int);

    // symbol: ??0EventBasedExponentialMovingAverage@rtc@@QEAA@H@Z
    MCAPI explicit EventBasedExponentialMovingAverage(int);

    // symbol: ?Reset@EventBasedExponentialMovingAverage@rtc@@QEAAXXZ
    MCAPI void Reset();

    // symbol: ?SetHalfTime@EventBasedExponentialMovingAverage@rtc@@QEAAXH@Z
    MCAPI void SetHalfTime(int);

    // NOLINTEND
};

}; // namespace rtc
