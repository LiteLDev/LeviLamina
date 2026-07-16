#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class Measurement {
public:
    // Measurement inner types define
    enum class AggregationType : int {
        Increment = 0,
        Sum       = 1,
        Min       = 2,
        Max       = 3,
        Average   = 4,
        Latest    = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkeb15ce;
    ::ll::UntypedStorage<8, 16> mUnkac30d6;
    ::ll::UntypedStorage<4, 4>  mUnkb6c8f4;
    ::ll::UntypedStorage<4, 4>  mUnk64ed6f;
    // NOLINTEND

public:
    // prevent constructor by default
    Measurement& operator=(Measurement const&);
    Measurement(Measurement const&);
    Measurement();
};

} // namespace Social::Events
