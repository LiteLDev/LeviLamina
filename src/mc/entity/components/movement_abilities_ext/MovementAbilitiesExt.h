#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/MovementAbilities.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
struct AbilitiesComponent;
struct MovementAbilitiesComponent;
// clang-format on

namespace MovementAbilitiesExt {
// functions
// NOLINTBEGIN
MCAPI ::MovementAbilities const getMovementAbilitiesFromAbilitiesIndex(::AbilitiesIndex index);

MCAPI void inheritFrom(::MovementAbilitiesComponent& destination, ::AbilitiesComponent const& abilities);
// NOLINTEND

} // namespace MovementAbilitiesExt
