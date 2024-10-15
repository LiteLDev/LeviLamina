#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseMobSpawner {
public:
    // prevent constructor by default
    BaseMobSpawner& operator=(BaseMobSpawner const&);
    BaseMobSpawner(BaseMobSpawner const&);
    BaseMobSpawner();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseMobSpawner();

    // vIndex: 1
    virtual void tick(class BlockSource& source);

    // vIndex: 2
    virtual void load(class CompoundTag const& data);

    // vIndex: 3
    virtual void save(class CompoundTag& tag);

    // vIndex: 4
    virtual class BlockPos const& getPos() = 0;

    MCAPI explicit BaseMobSpawner(struct ActorDefinitionIdentifier actorDefId);

    MCAPI void removeDisplayEntity();

    MCAPI void setEntityId(struct ActorDefinitionIdentifier actorDefId);

    MCAPI void setNextSpawnData(std::unique_ptr<class SpawnData> nextSpawnData);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _delay(class BlockSource& source);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(struct ActorDefinitionIdentifier actorDefId);

    MCAPI void dtor$();

    MCAPI void load$(class CompoundTag const& data);

    MCAPI void save$(class CompoundTag& tag);

    MCAPI void tick$(class BlockSource& source);

    // NOLINTEND
};
