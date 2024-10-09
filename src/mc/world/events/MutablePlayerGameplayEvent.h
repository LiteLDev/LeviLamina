#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct MutablePlayerGameplayEvent {
public:
    // prevent constructor by default
    MutablePlayerGameplayEvent& operator=(MutablePlayerGameplayEvent const&);
    MutablePlayerGameplayEvent(MutablePlayerGameplayEvent const&);
    MutablePlayerGameplayEvent();
};
