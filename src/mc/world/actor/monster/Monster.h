#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class BlockPos;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
struct ActorDefinitionIdentifier;
struct HurtParameters;
// clang-format on

class Monster : public ::Mob {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mLastHurtByMobId;
    // NOLINTEND

public:
    // prevent constructor by default
    Monster();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void normalTick() /*override*/;

    virtual bool isDarkEnoughToSpawn() const;

    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;

    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Monster(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
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
    MCAPI void $normalTick();

    MCNAPI bool $isDarkEnoughToSpawn() const;

    MCNAPI bool $checkSpawnRules(bool fromSpawner);

    MCNAPI float $_getWalkTargetValue(::BlockPos const& pos);

    MCNAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);

    MCNAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
