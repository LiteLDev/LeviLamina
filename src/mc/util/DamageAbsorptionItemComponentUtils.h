#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDamageCause.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class Mob;
class SimpleContainer;
// clang-format on

namespace DamageAbsorptionItemComponentUtils {
// functions
// NOLINTBEGIN
MCAPI bool canEquipmentAbsorbDamage(::Mob const& mob, ::ActorDamageCause cause);

MCAPI bool tryAbsorbDamageWithEquipment(::Mob& mob, ::ActorDamageSource const& source, float damage);

MCAPI bool tryAbsorbDamageWithItemInSlot(
    ::Mob&                     mob,
    ::SimpleContainer const&   armorContainer,
    int                        slot,
    ::ActorDamageSource const& source,
    float                      damage
);
// NOLINTEND

} // namespace DamageAbsorptionItemComponentUtils
