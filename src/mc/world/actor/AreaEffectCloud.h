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
