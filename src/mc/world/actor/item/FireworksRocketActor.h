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
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class FireworksRocketActor : public ::PredictableProjectile {
public:
    // prevent constructor by default
    FireworksRocketActor& operator=(FireworksRocketActor const&);
    FireworksRocketActor(FireworksRocketActor const&);
    FireworksRocketActor();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~FireworksRocketActor() = default;

    // vIndex: 24
    virtual void lerpMotion(class Vec3 const& delta);

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 74
    virtual void handleEntityEvent(::ActorEvent eventId, int data);

    // vIndex: 99
    virtual void onSynchedDataUpdate(int dataId);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI FireworksRocketActor(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void init(
        class Level&             level,
        class Vec3 const&        pos,
        class CompoundTag const& rocketUserData,
        class Vec3 const&        dir,
        struct ActorUniqueID     attachedEntity,
        bool                     isProjectile
    );

    MCAPI bool isAttachedToEntity() const;

    MCAPI void postNormalTick();

    MCAPI void setDispensed(bool dispensed);

    MCAPI static void
    initData(class SynchedActorDataEntityWrapper&, class CompoundTag const&, class Vec3 const&, struct ActorUniqueID);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void checkAchievement() const;

    MCAPI void dealExplosionDamage();

    MCAPI void initTagData(class Random& random);

    // NOLINTEND
};
