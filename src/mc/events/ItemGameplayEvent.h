#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct ItemGameplayEvent {

public:
    // prevent constructor by default
    ItemGameplayEvent& operator=(ItemGameplayEvent const&) = delete;
    ItemGameplayEvent(ItemGameplayEvent const&)            = delete;
    ItemGameplayEvent()                                    = delete;
};
