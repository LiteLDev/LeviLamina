#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class Mob;
class SimpleContainer;
// clang-format on

namespace DamageAbsorptionItemComponentUtils {
// functions
// NOLINTBEGIN
MCNAPI bool tryAbsorbDamageWithItemInSlot(::Mob& mob, ::SimpleContainer const& armorContainer, int slot, ::ActorDamageSource const& source, float damage);
// NOLINTEND

}
