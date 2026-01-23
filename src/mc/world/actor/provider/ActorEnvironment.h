#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace ActorEnvironment {
// functions
// NOLINTBEGIN
MCFOLD bool getHeadInWater(::EntityContext const& provider);

MCAPI bool getIsInWater(::EntityContext const& provider);

MCAPI void setIsInWater(::EntityContext& provider, bool value);
// NOLINTEND

} // namespace ActorEnvironment
