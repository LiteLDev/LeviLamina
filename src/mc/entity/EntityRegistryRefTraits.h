#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EntityRegistryRefTraits {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYREGISTRYREFTRAITS
public:
    EntityRegistryRefTraits& operator=(EntityRegistryRefTraits const&) = delete;
    EntityRegistryRefTraits(EntityRegistryRefTraits const&)            = delete;
    EntityRegistryRefTraits()                                          = delete;
#endif

public:
};
