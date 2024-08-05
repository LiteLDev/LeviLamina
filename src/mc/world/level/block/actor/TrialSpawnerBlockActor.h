#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class TrialSpawnerBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    TrialSpawnerBlockActor& operator=(TrialSpawnerBlockActor const&);
    TrialSpawnerBlockActor(TrialSpawnerBlockActor const&);
    TrialSpawnerBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TrialSpawnerBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2
    virtual bool save(class CompoundTag&) const;

    // vIndex: 7
    virtual void tick(class BlockSource&);

    // vIndex: 13
    virtual void onRemoved(class BlockSource&);

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    MCAPI explicit TrialSpawnerBlockActor(class BlockPos const&);

    MCAPI void setMob(class BlockSource&, struct ActorDefinitionIdentifier const&, class Actor*);

    // NOLINTEND
};
