#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
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
struct HurtParameters;
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

    virtual void onBorn(::Actor&, ::Actor& parentRight) /*override*/;

    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    virtual void setSitting(bool value) /*override*/;

    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    virtual bool isAlliedTo(::Mob* other) /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Wolf(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI void _updateTintColor();

    MCNAPI void postNormalTick();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $newServerAiStep();

    MCNAPI bool $load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void $onBorn(::Actor&, ::Actor& parentRight);

    MCNAPI void $onSynchedDataUpdate(int dataId);

    MCNAPI void $setSitting(bool value);

    MCNAPI void $handleEntityEvent(::ActorEvent id, int data);

    MCNAPI bool $isAlliedTo(::Mob* other);

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;

    MCNAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
