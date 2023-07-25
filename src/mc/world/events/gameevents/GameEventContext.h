#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameEventContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTCONTEXT
public:
    GameEventContext& operator=(GameEventContext const&) = delete;
    GameEventContext(GameEventContext const&)            = delete;
    GameEventContext()                                   = delete;
#endif

public:
};
