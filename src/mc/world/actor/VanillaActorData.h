#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VanillaActorData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAACTORDATA
public:
    VanillaActorData& operator=(VanillaActorData const&) = delete;
    VanillaActorData(VanillaActorData const&)            = delete;
    VanillaActorData()                                   = delete;
#endif

public:
};
