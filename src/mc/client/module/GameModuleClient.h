#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameModuleClient {
public:
    // prevent constructor by default
    GameModuleClient& operator=(GameModuleClient const&);
    GameModuleClient(GameModuleClient const&);
    GameModuleClient();
};
