#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
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
    // vIndex: 4, symbol:
    // ?reloadHardcoded@AreaEffectCloud@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 29, symbol: ?normalTick@AreaEffectCloud@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: ?getShadowRadius@AreaEffectCloud@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 69, symbol: ?setOwner@AreaEffectCloud@@UEAAXUActorUniqueID@@@Z
    virtual void setOwner(struct ActorUniqueID);

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 148, symbol: __unk_vfn_148
    virtual void __unk_vfn_148();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 167, symbol: ?readAdditionalSaveData@AreaEffectCloud@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 168, symbol: ?addAdditionalSaveData@AreaEffectCloud@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

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
