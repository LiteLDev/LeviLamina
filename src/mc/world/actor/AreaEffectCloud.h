#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/ParticleType.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

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
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~AreaEffectCloud() = default;

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 59
    virtual void setOwner(struct ActorUniqueID ownerID);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI AreaEffectCloud(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void addAreaEffect(class MobEffectInstance effect);

    MCAPI int getDuration() const;

    MCAPI float getEffectiveRadius() const;

    MCAPI ::ParticleType getParticle() const;

    MCAPI int getPickupCount() const;

    MCAPI void notifyPickup();

    MCAPI void setAffectOwner(bool shouldAffect);

    MCAPI void setDuration(int duration);

    MCAPI void setInitialRadius(float radius);

    MCAPI void setParticle(::ParticleType type);

    MCAPI void setParticleColor(class mce::Color& c);

    MCAPI void setPickupCount(int useCount);

    MCAPI void setPotion(short potionAUX);

    MCAPI void setRadiusChangeOnPickup(float changeAmount);

    MCAPI void setRadiusOnUse(float radiusOnUse);

    MCAPI void setRadiusPerTick(float radiusPerTick);

    MCAPI void setReapplicationDelay(int delay);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _spawnParticles(class Random& random, uint numParticles, float radius);

    // NOLINTEND
};
