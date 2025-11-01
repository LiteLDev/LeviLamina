#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace ActorEnvironment {
// functions
// NOLINTBEGIN
MCNAPI bool getHeadInWater(::EntityContext const& provider);

MCNAPI bool getIsInWater(::EntityContext const& provider);

MCNAPI void setIsInWater(::EntityContext& provider, bool value);
// NOLINTEND

}
