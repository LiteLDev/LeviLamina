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
    AreaEffectCloud& operator=(AreaEffectCloud const&) = delete;
    AreaEffectCloud(AreaEffectCloud const&)            = delete;
    AreaEffectCloud()                                  = delete;

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

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 69, symbol: ?getShadowRadius@AreaEffectCloud@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 86, symbol: __unk_vfn_86
    virtual void __unk_vfn_86();

    // vIndex: 93, symbol: __unk_vfn_93
    virtual void __unk_vfn_93();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 96, symbol: __unk_vfn_96
    virtual void __unk_vfn_96();

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 106, symbol: ?setOwner@AreaEffectCloud@@UEAAXUActorUniqueID@@@Z
    virtual void setOwner(struct ActorUniqueID);

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 178, symbol: __unk_vfn_178
    virtual void __unk_vfn_178();

    // vIndex: 202, symbol: __unk_vfn_202
    virtual void __unk_vfn_202();

    // vIndex: 203, symbol: __unk_vfn_203
    virtual void __unk_vfn_203();

    // vIndex: 219, symbol: __unk_vfn_219
    virtual void __unk_vfn_219();

    // vIndex: 222, symbol: __unk_vfn_222
    virtual void __unk_vfn_222();

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 243, symbol: ?readAdditionalSaveData@AreaEffectCloud@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 244, symbol: ?addAdditionalSaveData@AreaEffectCloud@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

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

    // symbol: ?_spawnParticles@AreaEffectCloud@@AEAAXAEAVRandom@@IM@Z
    MCAPI void _spawnParticles(class Random&, uint, float);

    // NOLINTEND
};
