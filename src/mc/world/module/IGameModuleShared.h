#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IGameModuleShared {
public:
    // prevent constructor by default
    IGameModuleShared& operator=(IGameModuleShared const&);
    IGameModuleShared(IGameModuleShared const&);
    IGameModuleShared();
};
