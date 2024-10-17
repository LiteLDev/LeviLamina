#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/item/ArmorSlot.h"

namespace DamageAbsorptionItemComponentUtils {
// NOLINTBEGIN
MCAPI bool canEquipmentAbsorbDamage(class Mob const& mob, ::ActorDamageCause cause);

MCAPI bool tryAbsorbDamageWithEquipment(class Mob& mob, class ActorDamageSource const& source, float damage);

MCAPI bool
tryAbsorbDamageWithItemInSlot(class Mob& mob, ::ArmorSlot slot, class ActorDamageSource const& source, float damage);
// NOLINTEND

}; // namespace DamageAbsorptionItemComponentUtils
