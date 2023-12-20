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

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 81, symbol: ?onLightningHit@VillagerBase@@UEAAXXZ
    virtual void onLightningHit();

    // vIndex: 83, symbol: ?handleEntityEvent@VillagerBase@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 164, symbol: ?readAdditionalSaveData@VillagerBase@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 165, symbol: ?addAdditionalSaveData@VillagerBase@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: __unk_vfn_168
    virtual void __unk_vfn_168();

    // symbol: ?interactPreventDefault@VillagerBase@@UEAA_NXZ
    MCVAPI bool interactPreventDefault();

    // symbol: ??0VillagerBase@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI VillagerBase(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?consumeLoveFood@VillagerBase@@QEAAXXZ
    MCAPI void consumeLoveFood();

    // symbol: ?getBreedingStackIndex@VillagerBase@@QEBAHXZ
    MCAPI int getBreedingStackIndex() const;

    // symbol: ?isChasing@VillagerBase@@QEBA_NXZ
    MCAPI bool isChasing() const;

    // symbol: ?isWillingToBreed@VillagerBase@@QEAA_N_N@Z
    MCAPI bool isWillingToBreed(bool);

    // symbol: ?setChasing@VillagerBase@@QEAAX_N@Z
    MCAPI void setChasing(bool);

    // symbol: ?setWillingToBreed@VillagerBase@@QEAAX_N@Z
    MCAPI void setWillingToBreed(bool);

    // symbol: ?stopGoals@VillagerBase@@QEAAXXZ
    MCAPI void stopGoals();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addParticlesAroundSelf@VillagerBase@@AEAAXW4ParticleType@@@Z
    MCAPI void _addParticlesAroundSelf(::ParticleType);

    // NOLINTEND
};
