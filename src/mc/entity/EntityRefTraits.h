#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EntityRefTraits {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYREFTRAITS
public:
    EntityRefTraits& operator=(EntityRefTraits const&) = delete;
    EntityRefTraits(EntityRefTraits const&)            = delete;
    EntityRefTraits()                                  = delete;
#endif

public:
};
