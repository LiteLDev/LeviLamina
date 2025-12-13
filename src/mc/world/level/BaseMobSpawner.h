#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class Mob;
class SpawnData;
// clang-format on

class BaseMobSpawner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                            mSpawnDelay;
    ::ll::TypedStorage<4, 4, float>                          mSpin;
    ::ll::TypedStorage<4, 4, float>                          mOSpin;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>  mActorDefId;
    ::ll::TypedStorage<8, 24, ::std::vector<::SpawnData>>    mSpawnPotentials;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SpawnData>> mNextSpawnData;
    ::ll::TypedStorage<4, 4, int>                            mMinSpawnDelay;
    ::ll::TypedStorage<4, 4, int>                            mMaxSpawnDelay;
    ::ll::TypedStorage<4, 4, int>                            mSpawnCount;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>               mDisplayEntity;
    ::ll::TypedStorage<4, 4, int>                            mMaxNearbyEntities;
    ::ll::TypedStorage<4, 4, int>                            mRequiredPlayerRange;
    ::ll::TypedStorage<4, 4, int>                            mSpawnRange;
    ::ll::TypedStorage<1, 1, bool>                           mActive;
    ::ll::TypedStorage<4, 4, float>                          mDisplayEntityWidth;
    ::ll::TypedStorage<4, 4, float>                          mDisplayEntityHeight;
    ::ll::TypedStorage<4, 4, float>                          mDisplayEntityScale;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseMobSpawner();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseMobSpawner() = default;

    virtual void tick(::BlockSource& source);

    virtual void load(::CompoundTag const& data);

    virtual void save(::CompoundTag& tag);

    virtual ::BlockPos const& getPos() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BaseMobSpawner(::ActorDefinitionIdentifier actorDefId);

    MCAPI void _delay(::BlockSource& source);

    MCAPI_C ::Actor* createAndAddDisplayEntity(::BlockSource& region);

    MCAPI ::ActorDefinitionIdentifier getSpawnTypeId() const;

    MCAPI void removeDisplayEntity();

    MCAPI void setEntityId(::ActorDefinitionIdentifier actorDefId);

    MCAPI_C ::Mob* tryGetOrCreateDisplayEntity(::BlockSource& region);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorDefinitionIdentifier actorDefId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& source);

    MCAPI void $load(::CompoundTag const& data);

    MCAPI void $save(::CompoundTag& tag);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
