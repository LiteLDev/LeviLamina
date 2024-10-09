#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct MutableLevelGameplayEvent {
public:
    // prevent constructor by default
    MutableLevelGameplayEvent& operator=(MutableLevelGameplayEvent const&);
    MutableLevelGameplayEvent(MutableLevelGameplayEvent const&);
    MutableLevelGameplayEvent();
};
