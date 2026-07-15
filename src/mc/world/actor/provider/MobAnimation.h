#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct InterpolationPair;
// clang-format on

namespace MobAnimation {
// functions
// NOLINTBEGIN
MCAPI float getStandAnim(::EntityContext const& provider);

MCAPI ::InterpolationPair getStandAnimNewOld(::EntityContext const& provider);

MCAPI void setStandAnim(::EntityContext& provider, float standAnim);

MCAPI void setStandAnimO(::EntityContext& provider, float standAnimO);
// NOLINTEND

} // namespace MobAnimation
