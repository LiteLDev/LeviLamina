#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct BlockGameplayEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKGAMEPLAYEVENT
public:
    BlockGameplayEvent& operator=(BlockGameplayEvent const&) = delete;
    BlockGameplayEvent(BlockGameplayEvent const&)            = delete;
    BlockGameplayEvent()                                     = delete;
#endif

public:
};
