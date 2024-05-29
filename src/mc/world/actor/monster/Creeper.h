#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Creeper : public ::Monster {
public:
    // prevent constructor by default
    Creeper& operator=(Creeper const&);
    Creeper(Creeper const&);
    Creeper();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1Creeper@@UEAA@XZ
    virtual ~Creeper() = default;

    // vIndex: 26, symbol: ?normalTick@Creeper@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 133, symbol: ?die@Creeper@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const& source);

    // symbol: ??0Creeper@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Creeper(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?getSwellDir@Creeper@@QEAAHXZ
    MCAPI int getSwellDir();

    // symbol: ?getSwelling@Creeper@@QEBAMM@Z
    MCAPI float getSwelling(float a) const;

    // symbol: ?tryGetFromEntity@Creeper@@SAPEAV1@AEAVEntityContext@@_N@Z
    MCAPI static class Creeper* tryGetFromEntity(class EntityContext& entity, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_setSwellDir@Creeper@@AEAAXH@Z
    MCAPI void _setSwellDir(int dir);

    // NOLINTEND
};
