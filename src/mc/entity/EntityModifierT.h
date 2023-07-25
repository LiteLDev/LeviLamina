#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1, typename... T2>
class EntityModifierT {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYMODIFIERT
public:
    EntityModifierT& operator=(EntityModifierT const&) = delete;
    EntityModifierT(EntityModifierT const&)            = delete;
    EntityModifierT()                                  = delete;
#endif

public:
};
