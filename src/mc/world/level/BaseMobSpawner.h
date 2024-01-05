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
    // vIndex: 0, symbol: ??1BaseMobSpawner@@UEAA@XZ
    virtual ~BaseMobSpawner();

    // vIndex: 1, symbol: ?tick@BaseMobSpawner@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& source);

    // vIndex: 2, symbol: ?load@BaseMobSpawner@@UEAAXAEBVCompoundTag@@@Z
    virtual void load(class CompoundTag const& data);

    // vIndex: 3, symbol: ?save@BaseMobSpawner@@UEAAXAEAVCompoundTag@@@Z
    virtual void save(class CompoundTag& tag);

    // vIndex: 4, symbol: ?getPos@DefaultMobSpawner@@UEAAAEBVBlockPos@@XZ
    virtual class BlockPos const& getPos() = 0;

    // symbol: ??0BaseMobSpawner@@QEAA@UActorDefinitionIdentifier@@@Z
    MCAPI explicit BaseMobSpawner(struct ActorDefinitionIdentifier);

    // symbol: ?removeDisplayEntity@BaseMobSpawner@@QEAAXXZ
    MCAPI void removeDisplayEntity();

    // symbol: ?setEntityId@BaseMobSpawner@@QEAAXUActorDefinitionIdentifier@@@Z
    MCAPI void setEntityId(struct ActorDefinitionIdentifier);

    // symbol:
    // ?setNextSpawnData@BaseMobSpawner@@QEAAXV?$unique_ptr@VSpawnData@@U?$default_delete@VSpawnData@@@std@@@std@@@Z
    MCAPI void setNextSpawnData(std::unique_ptr<class SpawnData> nextSpawnData);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_delay@BaseMobSpawner@@IEAAXAEAVBlockSource@@@Z
    MCAPI void _delay(class BlockSource& source);

    // NOLINTEND
};
