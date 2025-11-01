#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class EventBasedExponentialMovingAverage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf67673;
    ::ll::UntypedStorage<8, 8> mUnk4e1360;
    ::ll::UntypedStorage<8, 8> mUnk97c007;
    ::ll::UntypedStorage<8, 8> mUnk92a72d;
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
    MCNAPI void AddSample(int64 now, int sample);

    MCNAPI explicit EventBasedExponentialMovingAverage(int half_time);

    MCNAPI void Reset();

    MCNAPI void SetHalfTime(int half_time);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int half_time);
    // NOLINTEND

};

}
