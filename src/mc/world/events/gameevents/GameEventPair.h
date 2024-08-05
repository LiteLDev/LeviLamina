#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameEventPair {
public:
    // prevent constructor by default
    GameEventPair& operator=(GameEventPair const&);
    GameEventPair(GameEventPair const&);
    GameEventPair();

public:
    // NOLINTBEGIN
    MCAPI ~GameEventPair();

    // NOLINTEND
};
