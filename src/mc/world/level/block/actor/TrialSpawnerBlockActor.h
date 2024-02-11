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
    // vIndex: 0, symbol: __gen_??1TrialSpawnerBlockActor@@UEAA@XZ
    virtual ~TrialSpawnerBlockActor() = default;

    // vIndex: 1, symbol: ?load@TrialSpawnerBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2, symbol: ?save@TrialSpawnerBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 7, symbol: ?tick@TrialSpawnerBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource&);

    // vIndex: 13, symbol: ?onRemoved@TrialSpawnerBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onRemoved(class BlockSource&);

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@TrialSpawnerBlockActor@@EEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41, symbol: ?_onUpdatePacket@TrialSpawnerBlockActor@@EEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    // symbol: ??0TrialSpawnerBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit TrialSpawnerBlockActor(class BlockPos const&);

    // symbol: ?setMob@TrialSpawnerBlockActor@@QEAAXAEAVBlockSource@@AEBUActorDefinitionIdentifier@@PEAVActor@@@Z
    MCAPI void setMob(class BlockSource&, struct ActorDefinitionIdentifier const&, class Actor*);

    // NOLINTEND
};
