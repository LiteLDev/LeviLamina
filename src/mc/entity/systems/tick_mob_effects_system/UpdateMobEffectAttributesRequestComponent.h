#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TickMobEffectsSystem {

struct UpdateMobEffectAttributesRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mEffectIndices;
    // NOLINTEND
};

} // namespace TickMobEffectsSystem
