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
MCNAPI float getStandAnim(::EntityContext const& provider);

MCNAPI ::InterpolationPair getStandAnimNewOld(::EntityContext const& provider);

MCNAPI void setStandAnim(::EntityContext& provider, float standAnim);

MCNAPI void setStandAnimO(::EntityContext& provider, float standAnimO);
// NOLINTEND

} // namespace MobAnimation
