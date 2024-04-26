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
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1AreaEffectCloud@@UEAA@XZ
    virtual ~AreaEffectCloud() = default;

    // vIndex: 26, symbol: ?normalTick@AreaEffectCloud@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 38, symbol: ?getShadowRadius@AreaEffectCloud@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 60, symbol: ?setOwner@AreaEffectCloud@@UEAAXUActorUniqueID@@@Z
    virtual void setOwner(struct ActorUniqueID ownerID);

    // vIndex: 149, symbol: ?readAdditionalSaveData@AreaEffectCloud@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@AreaEffectCloud@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ??0AreaEffectCloud@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI AreaEffectCloud(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?addAreaEffect@AreaEffectCloud@@QEAAXVMobEffectInstance@@@Z
    MCAPI void addAreaEffect(class MobEffectInstance effect);

    // symbol: ?getDuration@AreaEffectCloud@@QEBAHXZ
    MCAPI int getDuration() const;

    // symbol: ?getEffectiveRadius@AreaEffectCloud@@QEBAMXZ
    MCAPI float getEffectiveRadius() const;

    // symbol: ?getParticle@AreaEffectCloud@@QEBA?AW4ParticleType@@XZ
    MCAPI ::ParticleType getParticle() const;

    // symbol: ?getPickupCount@AreaEffectCloud@@QEBAHXZ
    MCAPI int getPickupCount() const;

    // symbol: ?notifyPickup@AreaEffectCloud@@QEAAXXZ
    MCAPI void notifyPickup();

    // symbol: ?setAffectOwner@AreaEffectCloud@@QEAAX_N@Z
    MCAPI void setAffectOwner(bool shouldAffect);

    // symbol: ?setDuration@AreaEffectCloud@@QEAAXH@Z
    MCAPI void setDuration(int duration);

    // symbol: ?setInitialRadius@AreaEffectCloud@@QEAAXM@Z
    MCAPI void setInitialRadius(float radius);

    // symbol: ?setParticle@AreaEffectCloud@@QEAAXW4ParticleType@@@Z
    MCAPI void setParticle(::ParticleType type);

    // symbol: ?setParticleColor@AreaEffectCloud@@QEAAXAEAVColor@mce@@@Z
    MCAPI void setParticleColor(class mce::Color& c);

    // symbol: ?setPickupCount@AreaEffectCloud@@QEAAXH@Z
    MCAPI void setPickupCount(int useCount);

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
    // symbol: ?_getSpawnTick@AreaEffectCloud@@AEBA_KXZ
    MCAPI uint64 _getSpawnTick() const;

    // symbol: ?_setSpawnTick@AreaEffectCloud@@AEAAX_J@Z
    MCAPI void _setSpawnTick(int64 time);

    // symbol: ?_spawnParticles@AreaEffectCloud@@AEAAXAEAVRandom@@IM@Z
    MCAPI void _spawnParticles(class Random& random, uint numParticles, float radius);

    // NOLINTEND
};
