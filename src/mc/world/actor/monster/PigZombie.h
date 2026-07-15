#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/Zombie.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
struct ActorDefinitionIdentifier;
struct HurtParameters;
// clang-format on

class PigZombie : public ::Zombie {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mAngerTime;
    ::ll::TypedStorage<4, 4, int> mPlayAngrySoundIn;
    ::ll::TypedStorage<4, 4, int> mStunedTime;
    // NOLINTEND

public:
    // prevent constructor by default
    PigZombie();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void normalTick() /*override*/;

    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& entityTag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PigZombie(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
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
    MCAPI void $normalTick();

    MCAPI bool $checkSpawnRules(bool fromSpawner);

    MCAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);

    MCAPI void $addAdditionalSaveData(::CompoundTag& entityTag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
