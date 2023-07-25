#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IGameModuleShared {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IGAMEMODULESHARED
public:
    IGameModuleShared& operator=(IGameModuleShared const&) = delete;
    IGameModuleShared(IGameModuleShared const&)            = delete;
    IGameModuleShared()                                    = delete;
#endif

public:
};
