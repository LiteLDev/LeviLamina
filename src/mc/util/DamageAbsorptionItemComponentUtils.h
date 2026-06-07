#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class Mob;
class SimpleContainer;
// clang-format on

namespace DamageAbsorptionItemComponentUtils {
// functions
// NOLINTBEGIN
MCNAPI bool canEquipmentAbsorbDamage(::Mob const& mob, ::SharedTypes::Legacy::ActorDamageCause cause);

MCNAPI bool tryAbsorbDamageWithEquipment(::Mob& mob, ::ActorDamageSource const& source, float damage);

MCNAPI bool tryAbsorbDamageWithItemInSlot(
    ::Mob&                     mob,
    ::SimpleContainer const&   armorContainer,
    int                        slot,
    ::ActorDamageSource const& source,
    float                      damage
);
// NOLINTEND

} // namespace DamageAbsorptionItemComponentUtils
