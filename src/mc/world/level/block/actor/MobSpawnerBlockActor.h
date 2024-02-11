#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class MobSpawnerBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    MobSpawnerBlockActor& operator=(MobSpawnerBlockActor const&);
    MobSpawnerBlockActor(MobSpawnerBlockActor const&);
    MobSpawnerBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MobSpawnerBlockActor@@UEAA@XZ
    virtual ~MobSpawnerBlockActor() = default;

    // vIndex: 1, symbol: ?load@MobSpawnerBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@MobSpawnerBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@MobSpawnerBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 13, symbol: ?onRemoved@MobSpawnerBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onRemoved(class BlockSource&);

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@MobSpawnerBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41, symbol: ?_onUpdatePacket@MobSpawnerBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ??0MobSpawnerBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit MobSpawnerBlockActor(class BlockPos const& pos);

    // symbol: ?getSpawner@MobSpawnerBlockActor@@QEAAAEAVBaseMobSpawner@@XZ
    MCAPI class BaseMobSpawner& getSpawner();

    // symbol: ?setMob@MobSpawnerBlockActor@@QEAAXAEAVBlockSource@@AEBUActorDefinitionIdentifier@@PEAVActor@@@Z
    MCAPI void setMob(class BlockSource&, struct ActorDefinitionIdentifier const&, class Actor*);

    // NOLINTEND
};
