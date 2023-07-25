#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IGameModeMessenger {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IGAMEMODEMESSENGER
public:
    IGameModeMessenger& operator=(IGameModeMessenger const&) = delete;
    IGameModeMessenger(IGameModeMessenger const&)            = delete;
    IGameModeMessenger()                                     = delete;
#endif

public:
};
