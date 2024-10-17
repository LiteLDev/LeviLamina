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
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

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
    virtual void onSynchedDataUpdate(int);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper&);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI FireworksRocketActor(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void init(
        class Level& level,
        class Vec3 const&,
        class CompoundTag const& rocketUserData,
        class Vec3 const&        dir,
        struct ActorUniqueID     attachedEntity,
        bool                     isProjectile
    );

    MCAPI bool isAttachedToEntity() const;

    MCAPI void postNormalTick();

    MCAPI void setDispensed(bool dispensed);

    MCAPI static void initData(
        class SynchedActorDataEntityWrapper& data,
        class CompoundTag const&             rocketUserData,
        class Vec3 const&                    dir,
        struct ActorUniqueID                 attachedEntity
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void checkAchievement() const;

    MCAPI void dealExplosionDamage();

    MCAPI void initTagData(class Random& random);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void addAdditionalSaveData$(class CompoundTag& tag) const;

    MCAPI float getShadowRadius$() const;

    MCAPI void handleEntityEvent$(::ActorEvent eventId, int data);

    MCAPI void lerpMotion$(class Vec3 const& delta);

    MCAPI void onSynchedDataUpdate$(int);

    MCAPI void readAdditionalSaveData$(class CompoundTag const& tag, class DataLoadHelper&);

    // NOLINTEND
};
