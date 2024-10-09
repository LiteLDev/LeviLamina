#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
class StrictExecutionContext {
public:
    // prevent constructor by default
    StrictExecutionContext& operator=(StrictExecutionContext const&);
    StrictExecutionContext(StrictExecutionContext const&);
    StrictExecutionContext();
};
