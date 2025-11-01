#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PerfMetrics {

class Timer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk37d754;
    ::ll::UntypedStorage<8, 8> mUnk115a0c;
    ::ll::UntypedStorage<8, 8> mUnk10a6fb;
    ::ll::UntypedStorage<8, 8> mUnk840e82;
    // NOLINTEND

public:
    // prevent constructor by default
    Timer& operator=(Timer const&);
    Timer(Timer const&);
    Timer();

};

}
