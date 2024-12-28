#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PerfMetrics {

class Counter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd1c504;
    ::ll::UntypedStorage<8, 8> mUnkea7c5f;
    ::ll::UntypedStorage<8, 8> mUnk2f5939;
    // NOLINTEND

public:
    // prevent constructor by default
    Counter& operator=(Counter const&);
    Counter(Counter const&);
    Counter();
};

} // namespace PerfMetrics
