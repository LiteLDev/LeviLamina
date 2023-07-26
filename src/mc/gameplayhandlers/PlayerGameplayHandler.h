#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerGameplayHandler {

public:
    // prevent constructor by default
    PlayerGameplayHandler& operator=(PlayerGameplayHandler const&) = delete;
    PlayerGameplayHandler(PlayerGameplayHandler const&)            = delete;
    PlayerGameplayHandler()                                        = delete;
};
