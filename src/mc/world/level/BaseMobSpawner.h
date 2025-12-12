#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
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
    // vIndex: 0
    virtual ~BaseMobSpawner() = default;

    // vIndex: 1
    virtual void tick(::BlockSource& source);

    // vIndex: 2
    virtual void load(::CompoundTag const& data);

    // vIndex: 3
    virtual void save(::CompoundTag& tag);

    // vIndex: 4
    virtual ::BlockPos const& getPos() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BaseMobSpawner(::ActorDefinitionIdentifier actorDefId);

    MCAPI void _delay(::BlockSource& source);

    MCAPI ::ActorDefinitionIdentifier getSpawnTypeId() const;

    MCAPI void removeDisplayEntity();

    MCAPI void setEntityId(::ActorDefinitionIdentifier actorDefId);
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
