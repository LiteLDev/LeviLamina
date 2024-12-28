#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameRenderer {
public:
    // prevent constructor by default
    GameRenderer& operator=(GameRenderer const&);
    GameRenderer(GameRenderer const&);
    GameRenderer();
};
