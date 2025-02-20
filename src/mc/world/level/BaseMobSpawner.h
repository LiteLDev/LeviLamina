#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
class SpawnData;
struct ActorDefinitionIdentifier;
// clang-format on

class BaseMobSpawner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkd2dbeb;
    ::ll::UntypedStorage<4, 4>   mUnk2f3a7a;
    ::ll::UntypedStorage<4, 4>   mUnk4b3eed;
    ::ll::UntypedStorage<8, 176> mUnk940170;
    ::ll::UntypedStorage<8, 24>  mUnka1c2c0;
    ::ll::UntypedStorage<8, 8>   mUnkf3fbaa;
    ::ll::UntypedStorage<4, 4>   mUnk91d28a;
    ::ll::UntypedStorage<4, 4>   mUnk242bd7;
    ::ll::UntypedStorage<4, 4>   mUnkb155c4;
    ::ll::UntypedStorage<8, 24>  mUnkb9b5e0;
    ::ll::UntypedStorage<4, 4>   mUnk40445d;
    ::ll::UntypedStorage<4, 4>   mUnk345749;
    ::ll::UntypedStorage<4, 4>   mUnk8b3a4b;
    ::ll::UntypedStorage<1, 1>   mUnkdc1334;
    ::ll::UntypedStorage<4, 4>   mUnk1f4926;
    ::ll::UntypedStorage<4, 4>   mUnk3cea86;
    ::ll::UntypedStorage<4, 4>   mUnkb02a14;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseMobSpawner& operator=(BaseMobSpawner const&);
    BaseMobSpawner(BaseMobSpawner const&);
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

    MCAPI void removeDisplayEntity();

    MCAPI void setEntityId(::ActorDefinitionIdentifier actorDefId);

    MCAPI void setNextSpawnData(::std::unique_ptr<::SpawnData> nextSpawnData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorDefinitionIdentifier actorDefId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
