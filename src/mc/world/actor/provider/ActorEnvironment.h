#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace ActorEnvironment {
// functions
// NOLINTBEGIN
MCAPI bool getHeadInWater(::EntityContext const& provider);

MCAPI bool getIsInLava(::EntityContext const& provider);

MCFOLD bool getIsInWater(::EntityContext const& provider);

MCAPI void setHeadInWater(::EntityContext& provider, bool value);

MCAPI void setIsInWater(::EntityContext& provider, bool value);
// NOLINTEND

} // namespace ActorEnvironment
