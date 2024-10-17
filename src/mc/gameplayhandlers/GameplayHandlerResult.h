#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct GameplayHandlerResult {
public:
    // prevent constructor by default
    GameplayHandlerResult& operator=(GameplayHandlerResult const&);
    GameplayHandlerResult(GameplayHandlerResult const&);
    GameplayHandlerResult();
};
