#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Mob;
struct ActorDefinitionIdentifier;
// clang-format on

class Wolf : public ::Animal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mShakeAnim;
    ::ll::TypedStorage<4, 4, float> mShakeAnimO;
    ::ll::TypedStorage<4, 4, float> mInterestedAngle;
    ::ll::TypedStorage<4, 4, float> mInterestedAngleO;
    ::ll::TypedStorage<1, 1, bool>  mIsWet;
    ::ll::TypedStorage<1, 1, bool>  mIsShaking;
    // NOLINTEND

public:
    // prevent constructor by default
    Wolf();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void newServerAiStep() /*override*/;

    virtual bool load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual void onBorn(::Actor& parentRight, ::Actor&) /*override*/;

    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    virtual void setSitting(bool value) /*override*/;

    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    virtual bool isAlliedTo(::Mob* other) /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Wolf(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _avoidSnowBury();

    MCAPI void _updateTintColor();

    MCAPI float getHeadRollAngle(float a);

    MCAPI float getShakeAnim() const;

    MCAPI float getTailAngle();

    MCAPI bool isShaking() const;

    MCAPI void postNormalTick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::SharedTypes::Legacy::LevelSoundEvent>
    getCustomHurtSound(::Mob const& mob, ::SharedTypes::Legacy::ActorDamageCause cause);
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
    MCAPI void $newServerAiStep();

    MCAPI bool $load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $onBorn(::Actor& parentRight, ::Actor&);

    MCAPI void $onSynchedDataUpdate(int dataId);

    MCAPI void $setSitting(bool value);

    MCAPI void $handleEntityEvent(::ActorEvent id, int data);

    MCAPI bool $isAlliedTo(::Mob* other);

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;

    MCAPI ::ActorHurtResult $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
