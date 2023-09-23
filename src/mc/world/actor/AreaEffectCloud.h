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
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class AreaEffectCloud : public ::Actor {
public:
    // prevent constructor by default
    AreaEffectCloud& operator=(AreaEffectCloud const&);
    AreaEffectCloud(AreaEffectCloud const&);
    AreaEffectCloud();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol:
    // ?reloadHardcoded@AreaEffectCloud@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 43, symbol: ?normalTick@AreaEffectCloud@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 68, symbol: ?getShadowRadius@AreaEffectCloud@@UEBAMXZ
    virtual float getShadowRadius() const;

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

    // vIndex: 105, symbol: ?setOwner@AreaEffectCloud@@UEAAXUActorUniqueID@@@Z
    virtual void setOwner(struct ActorUniqueID);

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

    // vIndex: 239, symbol: ?readAdditionalSaveData@AreaEffectCloud@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 240, symbol: ?addAdditionalSaveData@AreaEffectCloud@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // symbol: ??0AreaEffectCloud@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI AreaEffectCloud(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?addAreaEffect@AreaEffectCloud@@QEAAXVMobEffectInstance@@@Z
    MCAPI void addAreaEffect(class MobEffectInstance);

    // symbol: ?getDuration@AreaEffectCloud@@QEBAHXZ
    MCAPI int getDuration() const;

    // symbol: ?getEffectiveRadius@AreaEffectCloud@@QEBAMXZ
    MCAPI float getEffectiveRadius() const;

    // symbol: ?getParticle@AreaEffectCloud@@QEBA?AW4ParticleType@@XZ
    MCAPI ::ParticleType getParticle() const;

    // symbol: ?notifyPickup@AreaEffectCloud@@QEAAXXZ
    MCAPI void notifyPickup();

    // symbol: ?setAffectOwner@AreaEffectCloud@@QEAAX_N@Z
    MCAPI void setAffectOwner(bool);

    // symbol: ?setDuration@AreaEffectCloud@@QEAAXH@Z
    MCAPI void setDuration(int);

    // symbol: ?setInitialRadius@AreaEffectCloud@@QEAAXM@Z
    MCAPI void setInitialRadius(float);

    // symbol: ?setParticle@AreaEffectCloud@@QEAAXW4ParticleType@@@Z
    MCAPI void setParticle(::ParticleType);

    // symbol: ?setParticleColor@AreaEffectCloud@@QEAAXAEAVColor@mce@@@Z
    MCAPI void setParticleColor(class mce::Color&);

    // symbol: ?setPotion@AreaEffectCloud@@QEAAXF@Z
    MCAPI void setPotion(short);

    // symbol: ?setRadiusChangeOnPickup@AreaEffectCloud@@QEAAXM@Z
    MCAPI void setRadiusChangeOnPickup(float);

    // symbol: ?setRadiusOnUse@AreaEffectCloud@@QEAAXM@Z
    MCAPI void setRadiusOnUse(float);

    // symbol: ?setRadiusPerTick@AreaEffectCloud@@QEAAXM@Z
    MCAPI void setRadiusPerTick(float);

    // symbol: ?setReapplicationDelay@AreaEffectCloud@@QEAAXH@Z
    MCAPI void setReapplicationDelay(int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getTicksAlive@AreaEffectCloud@@AEBA_JXZ
    MCAPI int64 _getTicksAlive() const;

    // symbol: ?_setSpawnTick@AreaEffectCloud@@AEAAX_J@Z
    MCAPI void _setSpawnTick(int64);

    // symbol: ?_spawnParticles@AreaEffectCloud@@AEAAXAEAVRandom@@IM@Z
    MCAPI void _spawnParticles(class Random&, uint, float);

    // NOLINTEND
};
