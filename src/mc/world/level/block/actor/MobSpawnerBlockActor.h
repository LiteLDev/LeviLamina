#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class MobSpawnerBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    MobSpawnerBlockActor& operator=(MobSpawnerBlockActor const&);
    MobSpawnerBlockActor(MobSpawnerBlockActor const&);
    MobSpawnerBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MobSpawnerBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 13
    virtual void onRemoved(class BlockSource&);

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCAPI explicit MobSpawnerBlockActor(class BlockPos const& pos);

    MCAPI class BaseMobSpawner& getSpawner();

    MCAPI void
    setMob(class BlockSource& region, struct ActorDefinitionIdentifier const& identifier, class Actor* usingActor);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class BlockPos const& pos);

    MCAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket$(class BlockSource&);

    MCAPI void _onUpdatePacket$(class CompoundTag const& data, class BlockSource& region);

    MCAPI void load$(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void onRemoved$(class BlockSource&);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI void tick$(class BlockSource& region);

    // NOLINTEND
};
