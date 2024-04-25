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
#include "mc/enums/ParticleType.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class VillagerBase : public ::Mob {
public:
    // prevent constructor by default
    VillagerBase& operator=(VillagerBase const&);
    VillagerBase(VillagerBase const&);
    VillagerBase();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: ??1VillagerBase@@UEAA@XZ
    virtual ~VillagerBase();

    // vIndex: 73, symbol: ?onLightningHit@VillagerBase@@UEAAXXZ
    virtual void onLightningHit();

    // vIndex: 75, symbol: ?handleEntityEvent@VillagerBase@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent event, int data);

    // vIndex: 149, symbol: ?readAdditionalSaveData@VillagerBase@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@VillagerBase@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ??0VillagerBase@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI VillagerBase(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?consumeLoveFood@VillagerBase@@QEAAXXZ
    MCAPI void consumeLoveFood();

    // symbol: ?getBreedingStackIndex@VillagerBase@@QEBAHXZ
    MCAPI int getBreedingStackIndex() const;

    // symbol: ?isChasing@VillagerBase@@QEBA_NXZ
    MCAPI bool isChasing() const;

    // symbol: ?isWillingToBreed@VillagerBase@@QEAA_N_N@Z
    MCAPI bool isWillingToBreed(bool consumeFoodIfNecessary);

    // symbol: ?setChasing@VillagerBase@@QEAAX_N@Z
    MCAPI void setChasing(bool chasing);

    // symbol: ?setWillingToBreed@VillagerBase@@QEAAX_N@Z
    MCAPI void setWillingToBreed(bool willingToBreed);

    // symbol: ?stopGoals@VillagerBase@@QEAAXXZ
    MCAPI void stopGoals();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addParticlesAroundSelf@VillagerBase@@AEAAXW4ParticleType@@@Z
    MCAPI void _addParticlesAroundSelf(::ParticleType particleType);

    // NOLINTEND
};
