#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct ClientInstanceGameplayEvent {
public:
    // prevent constructor by default
    ClientInstanceGameplayEvent& operator=(ClientInstanceGameplayEvent const&);
    ClientInstanceGameplayEvent(ClientInstanceGameplayEvent const&);
    ClientInstanceGameplayEvent();
};
