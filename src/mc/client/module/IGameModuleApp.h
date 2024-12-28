#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IGameModuleApp {
public:
    // prevent constructor by default
    IGameModuleApp& operator=(IGameModuleApp const&);
    IGameModuleApp(IGameModuleApp const&);
    IGameModuleApp();
};
