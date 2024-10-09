#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct MutableServerNetworkGameplayEvent {
public:
    // prevent constructor by default
    MutableServerNetworkGameplayEvent& operator=(MutableServerNetworkGameplayEvent const&);
    MutableServerNetworkGameplayEvent(MutableServerNetworkGameplayEvent const&);
    MutableServerNetworkGameplayEvent();
};
