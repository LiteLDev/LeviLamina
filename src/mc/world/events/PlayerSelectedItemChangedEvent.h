#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerSelectedItemChangedEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSELECTEDITEMCHANGEDEVENT
public:
    PlayerSelectedItemChangedEvent& operator=(PlayerSelectedItemChangedEvent const&) = delete;
    PlayerSelectedItemChangedEvent(PlayerSelectedItemChangedEvent const&)            = delete;
    PlayerSelectedItemChangedEvent()                                                 = delete;
#endif

public:
};
