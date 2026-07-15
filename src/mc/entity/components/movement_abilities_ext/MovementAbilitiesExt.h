#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
namespace MovementAbilitiesExt { struct MovementAbilityInfo; }
// clang-format on

namespace MovementAbilitiesExt {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<::AbilitiesIndex, ::MovementAbilitiesExt::MovementAbilityInfo> const& ABILITIES_MAP();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::unordered_map<::AbilitiesIndex, ::MovementAbilitiesExt::MovementAbilityInfo> const& ABILITIES_MAP();
#endif
// NOLINTEND

} // namespace MovementAbilitiesExt
