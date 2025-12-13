#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Level;
class Random;
class SynchedActorDataEntityWrapper;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
// clang-format on

class FireworksRocketActor : public ::PredictableProjectile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbd0e89;
    ::ll::UntypedStorage<4, 4> mUnk917817;
    ::ll::UntypedStorage<1, 1> mUnke7a725;
    // NOLINTEND

public:
    // prevent constructor by default
    FireworksRocketActor& operator=(FireworksRocketActor const&);
    FireworksRocketActor(FireworksRocketActor const&);
    FireworksRocketActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual float getShadowRadius() const /*override*/;

    virtual void lerpMotion(::Vec3 const& delta) /*override*/;

    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual ~FireworksRocketActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FireworksRocketActor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void checkAchievement() const;

    MCAPI void dealExplosionDamage();

    MCAPI void init(
        ::Level& level,
        ::Vec3 const&,
        ::CompoundTag const& rocketUserData,
        ::Vec3 const&        dir,
        ::ActorUniqueID      attachedEntity,
        bool                 isProjectile
    );

    MCAPI void initTagData(::Random& random);

    MCAPI void postNormalTick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void initData(
        ::SynchedActorDataEntityWrapper& data,
        ::CompoundTag const&             rocketUserData,
        ::Vec3 const&                    dir,
        ::ActorUniqueID                  attachedEntity
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD float $getShadowRadius() const;

    MCAPI void $lerpMotion(::Vec3 const& delta);

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCAPI void $onSynchedDataUpdate(int dataId);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
