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
#include "mc/world/actor/monster/Zombie.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class PigZombie : public ::Zombie {
public:
    // prevent constructor by default
    PigZombie& operator=(PigZombie const&);
    PigZombie(PigZombie const&);
    PigZombie();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1PigZombie@@UEAA@XZ
    virtual ~PigZombie() = default;

    // vIndex: 26, symbol: ?normalTick@PigZombie@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 148, symbol: ?_hurt@PigZombie@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 149, symbol: ?readAdditionalSaveData@PigZombie@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@PigZombie@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& entityTag) const;

    // vIndex: 162, symbol: ?checkSpawnRules@PigZombie@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool fromSpawner);

    // symbol: ??0PigZombie@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI PigZombie(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?SPEED_MODIFIER_ATTACK_UUID@PigZombie@@0VUUID@mce@@B
    MCAPI static class mce::UUID const SPEED_MODIFIER_ATTACK_UUID;

    // NOLINTEND
};
