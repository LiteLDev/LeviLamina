#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
class EntityModifier {
public:
    // prevent constructor by default
    EntityModifier& operator=(EntityModifier const&);
    EntityModifier(EntityModifier const&);
    EntityModifier();
};
