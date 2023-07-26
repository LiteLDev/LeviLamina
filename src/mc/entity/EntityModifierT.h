#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1, typename... T2>
class EntityModifierT {

public:
    // prevent constructor by default
    EntityModifierT& operator=(EntityModifierT const&) = delete;
    EntityModifierT(EntityModifierT const&)            = delete;
    EntityModifierT()                                  = delete;
};
