#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/enums/ArmorSlot.h"

namespace DamageAbsorptionItemComponentUtils {
// NOLINTBEGIN
// symbol: ?canEquipmentAbsorbDamage@DamageAbsorptionItemComponentUtils@@YA_NAEBVMob@@W4ActorDamageCause@@@Z
MCAPI bool canEquipmentAbsorbDamage(class Mob const&, ::ActorDamageCause);

// symbol: ?tryAbsorbDamageWithEquipment@DamageAbsorptionItemComponentUtils@@YA_NAEAVMob@@AEBVActorDamageSource@@M@Z
MCAPI bool tryAbsorbDamageWithEquipment(class Mob&, class ActorDamageSource const&, float);

// symbol:
// ?tryAbsorbDamageWithItemInSlot@DamageAbsorptionItemComponentUtils@@YA_NAEAVMob@@W4ArmorSlot@@AEBVActorDamageSource@@M@Z
MCAPI bool tryAbsorbDamageWithItemInSlot(class Mob&, ::ArmorSlot, class ActorDamageSource const&, float);
// NOLINTEND

}; // namespace DamageAbsorptionItemComponentUtils
