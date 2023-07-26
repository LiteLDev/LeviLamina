#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IGameModuleShared {

public:
    // prevent constructor by default
    IGameModuleShared& operator=(IGameModuleShared const&) = delete;
    IGameModuleShared(IGameModuleShared const&)            = delete;
    IGameModuleShared()                                    = delete;
};
