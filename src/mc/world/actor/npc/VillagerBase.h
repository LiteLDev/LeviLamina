#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AnimationComponentGroupType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/enums/ParticleType.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/item/components/ItemUseMethod.h"

class VillagerBase : public ::Mob {
public:
    // VillagerBase inner types define
    enum class BiomeType {};

public:
    // prevent constructor by default
    VillagerBase& operator=(VillagerBase const&);
    VillagerBase(VillagerBase const&);
    VillagerBase();

public:
    // NOLINTBEGIN
    // vIndex: 13, symbol:
    // ?reloadComponents@VillagerBase@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadComponents(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 82, symbol: __unk_vfn_82
    virtual void __unk_vfn_82();

    // vIndex: 85, symbol: __unk_vfn_85
    virtual void __unk_vfn_85();

    // vIndex: 92, symbol: __unk_vfn_92
    virtual void __unk_vfn_92();

    // vIndex: 94, symbol: __unk_vfn_94
    virtual void __unk_vfn_94();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 97, symbol: __unk_vfn_97
    virtual void __unk_vfn_97();

    // vIndex: 122, symbol: ?onLightningHit@VillagerBase@@UEAAXXZ
    virtual void onLightningHit();

    // vIndex: 125, symbol: ?handleEntityEvent@VillagerBase@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 239, symbol: ?readAdditionalSaveData@VillagerBase@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 240, symbol: ?addAdditionalSaveData@VillagerBase@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 247, symbol: ?_onSizeUpdated@VillagerBase@@EEAAXXZ
    virtual void _onSizeUpdated();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 270, symbol: __unk_vfn_270
    virtual void __unk_vfn_270();

    // vIndex: 274, symbol: __unk_vfn_274
    virtual void __unk_vfn_274();

    // vIndex: 313, symbol: ?_serverAiMobStep@VillagerBase@@MEAAXXZ
    virtual void _serverAiMobStep();

    // symbol: ?interactPreventDefault@VillagerBase@@UEAA_NXZ
    MCVAPI bool interactPreventDefault();

    // symbol: ??1VillagerBase@@UEAA@XZ
    MCVAPI ~VillagerBase();

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

    // symbol:
    // ?BiomeStrToEnum@VillagerBase@@SA?AW4BiomeType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static ::VillagerBase::BiomeType BiomeStrToEnum(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addParticlesAroundSelf@VillagerBase@@AEAAXW4ParticleType@@@Z
    MCAPI void _addParticlesAroundSelf(::ParticleType);

    // NOLINTEND
};
