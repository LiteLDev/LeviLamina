#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/enums/ArmorSlot.h"

namespace DamageAbsorptionItemComponentUtils {
// NOLINTBEGIN
MCAPI bool canEquipmentAbsorbDamage(class Mob const&, ::ActorDamageCause);

MCAPI bool tryAbsorbDamageWithEquipment(class Mob&, class ActorDamageSource const&, float);

MCAPI bool tryAbsorbDamageWithItemInSlot(class Mob&, ::ArmorSlot, class ActorDamageSource const&, float);
// NOLINTEND

}; // namespace DamageAbsorptionItemComponentUtils
