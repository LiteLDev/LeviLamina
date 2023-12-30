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
    // ?reloadHardcoded@AreaEffectCloud@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(enum ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1AreaEffectCloud@@UEAA@XZ
    virtual ~AreaEffectCloud() = default;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 29, symbol: ?normalTick@AreaEffectCloud@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: ?getShadowRadius@AreaEffectCloud@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 68, symbol: ?setOwner@AreaEffectCloud@@UEAAXUActorUniqueID@@@Z
    virtual void setOwner(struct ActorUniqueID ownerID);

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 164, symbol: ?readAdditionalSaveData@AreaEffectCloud@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 165, symbol: ?addAdditionalSaveData@AreaEffectCloud@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

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
    MCAPI void setAffectOwner(bool shouldAffect);

    // symbol: ?setDuration@AreaEffectCloud@@QEAAXH@Z
    MCAPI void setDuration(int duration);

    // symbol: ?setInitialRadius@AreaEffectCloud@@QEAAXM@Z
    MCAPI void setInitialRadius(float radius);

    // symbol: ?setParticle@AreaEffectCloud@@QEAAXW4ParticleType@@@Z
    MCAPI void setParticle(enum ParticleType type);

    // symbol: ?setParticleColor@AreaEffectCloud@@QEAAXAEAVColor@mce@@@Z
    MCAPI void setParticleColor(class mce::Color&);

    // symbol: ?setPotion@AreaEffectCloud@@QEAAXF@Z
    MCAPI void setPotion(short potionAUX);

    // symbol: ?setRadiusChangeOnPickup@AreaEffectCloud@@QEAAXM@Z
    MCAPI void setRadiusChangeOnPickup(float changeAmount);

    // symbol: ?setRadiusOnUse@AreaEffectCloud@@QEAAXM@Z
    MCAPI void setRadiusOnUse(float radiusOnUse);

    // symbol: ?setRadiusPerTick@AreaEffectCloud@@QEAAXM@Z
    MCAPI void setRadiusPerTick(float radiusPerTick);

    // symbol: ?setReapplicationDelay@AreaEffectCloud@@QEAAXH@Z
    MCAPI void setReapplicationDelay(int delay);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getTicksAlive@AreaEffectCloud@@AEBA_JXZ
    MCAPI int64 _getTicksAlive() const;

    // symbol: ?_setSpawnTick@AreaEffectCloud@@AEAAX_J@Z
    MCAPI void _setSpawnTick(int64);

    // symbol: ?_spawnParticles@AreaEffectCloud@@AEAAXAEAVRandom@@IM@Z
    MCAPI void _spawnParticles(class Random& random, uint numParticles, float radius);

    // NOLINTEND
};
