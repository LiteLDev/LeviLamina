#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct MutableBlockGameplayEvent {
public:
    // prevent constructor by default
    MutableBlockGameplayEvent& operator=(MutableBlockGameplayEvent const&);
    MutableBlockGameplayEvent(MutableBlockGameplayEvent const&);
    MutableBlockGameplayEvent();
};
