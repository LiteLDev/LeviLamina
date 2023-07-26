#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameEventContext {

public:
    // prevent constructor by default
    GameEventContext& operator=(GameEventContext const&) = delete;
    GameEventContext(GameEventContext const&)            = delete;
    GameEventContext()                                   = delete;
};
