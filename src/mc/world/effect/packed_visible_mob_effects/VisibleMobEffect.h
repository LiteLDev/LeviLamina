#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PackedVisibleMobEffects {

struct VisibleMobEffect {
public:
    // prevent constructor by default
    VisibleMobEffect& operator=(VisibleMobEffect const&);
    VisibleMobEffect(VisibleMobEffect const&);
    VisibleMobEffect();
};

}; // namespace PackedVisibleMobEffects
