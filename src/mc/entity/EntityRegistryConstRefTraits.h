#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EntityRegistryConstRefTraits {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYREGISTRYCONSTREFTRAITS
public:
    EntityRegistryConstRefTraits& operator=(EntityRegistryConstRefTraits const&) = delete;
    EntityRegistryConstRefTraits(EntityRegistryConstRefTraits const&)            = delete;
    EntityRegistryConstRefTraits()                                               = delete;
#endif

public:
};
