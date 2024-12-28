#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class EventBasedExponentialMovingAverage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf67673;
    ::ll::UntypedStorage<8, 8>  mUnk4e1360;
    ::ll::UntypedStorage<8, 8>  mUnk97c007;
    ::ll::UntypedStorage<8, 8>  mUnk92a72d;
    ::ll::UntypedStorage<8, 16> mUnkc63ba8;
    // NOLINTEND

public:
    // prevent constructor by default
    EventBasedExponentialMovingAverage& operator=(EventBasedExponentialMovingAverage const&);
    EventBasedExponentialMovingAverage(EventBasedExponentialMovingAverage const&);
    EventBasedExponentialMovingAverage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddSample(int64, int);

    MCAPI explicit EventBasedExponentialMovingAverage(int);

    MCAPI void Reset();

    MCAPI void SetHalfTime(int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int);
    // NOLINTEND
};

} // namespace rtc
