#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WanderingTraderScheduler {
public:
    // prevent constructor by default
    WanderingTraderScheduler& operator=(WanderingTraderScheduler const&);
    WanderingTraderScheduler(WanderingTraderScheduler const&);
    WanderingTraderScheduler();

public:
    // NOLINTBEGIN
    // symbol: ??0WanderingTraderScheduler@@QEAA@AEAVLevel@@@Z
    MCAPI explicit WanderingTraderScheduler(class Level& level);

    // symbol: ?isWanderingTraderCurrentlyManaged@WanderingTraderScheduler@@QEAA_NAEBVActor@@@Z
    MCAPI bool isWanderingTraderCurrentlyManaged(class Actor const& actor);

    // symbol: ?readSaveData@WanderingTraderScheduler@@QEAAXXZ
    MCAPI void readSaveData();

    // symbol: ?tick@WanderingTraderScheduler@@QEAAXXZ
    MCAPI void tick();

    // symbol: ?writeSaveData@WanderingTraderScheduler@@QEBAXXZ
    MCAPI void writeSaveData() const;

    // symbol: ??1WanderingTraderScheduler@@QEAA@XZ
    MCAPI ~WanderingTraderScheduler();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canSpawnAtPosition@WanderingTraderScheduler@@AEBA_NAEBVBlockPos@@AEAVBlockSource@@@Z
    MCAPI bool _canSpawnAtPosition(class BlockPos const& pos, class BlockSource& region) const;

    // symbol: ?_canWanderingTraderBeMoved@WanderingTraderScheduler@@AEBA_NXZ
    MCAPI bool _canWanderingTraderBeMoved() const;

    // symbol: ?_doesWanderingTraderExist@WanderingTraderScheduler@@AEBA_NXZ
    MCAPI bool _doesWanderingTraderExist() const;

    // symbol:
    // ?_findValidSpawnPosUnder@WanderingTraderScheduler@@AEBA?AV?$optional@VBlockPos@@@std@@AEBVBlockPos@@AEAVBlockSource@@@Z
    MCAPI std::optional<class BlockPos>
          _findValidSpawnPosUnder(class BlockPos const& pos, class BlockSource& region) const;

    // symbol:
    // ?_getRandomHeightmapPosAroundOrigin@WanderingTraderScheduler@@AEAA?AVBlockPos@@AEBVBlockSource@@AEBV2@H_N@Z
    MCAPI class BlockPos _getRandomHeightmapPosAroundOrigin(
        class BlockSource const& region,
        class BlockPos const&    origin,
        int                      distFromOrigin,
        bool                     exactDist
    );

    // symbol: ?_getRandomPlayerInOverworld@WanderingTraderScheduler@@AEBAPEAVActor@@XZ
    MCAPI class Actor* _getRandomPlayerInOverworld() const;

    // symbol:
    // ?_getSpawnPosFromNearestVillageToPlayerPos@WanderingTraderScheduler@@AEAA?AV?$optional@VBlockPos@@@std@@AEBVBlockPos@@AEAVBlockSource@@@Z
    MCAPI std::optional<class BlockPos>
          _getSpawnPosFromNearestVillageToPlayerPos(class BlockPos const& playerPos, class BlockSource& region);

    // symbol: ?_spawnWanderingTraderAtPos@WanderingTraderScheduler@@AEAAXAEBVBlockPos@@AEAVBlockSource@@@Z
    MCAPI void _spawnWanderingTraderAtPos(class BlockPos const& pos, class BlockSource& region);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?CHANCE_TO_SPAWN_IN_WILDERNESS@WanderingTraderScheduler@@0MB
    MCAPI static float const CHANCE_TO_SPAWN_IN_WILDERNESS;

    // symbol: ?CHANCE_TO_SPAWN_PER_DAY@WanderingTraderScheduler@@0V?$vector@MV?$allocator@M@std@@@std@@B
    MCAPI static std::vector<float> const CHANCE_TO_SPAWN_PER_DAY;

    // symbol: ?DISTANCE_IN_BLOCKS_FROM_MEETING_AREA@WanderingTraderScheduler@@0HB
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_MEETING_AREA;

    // symbol: ?DISTANCE_IN_BLOCKS_FROM_PLAYER@WanderingTraderScheduler@@0HB
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_PLAYER;

    // symbol: ?DISTANCE_IN_BLOCKS_FROM_PLAYER_SQUARE@WanderingTraderScheduler@@0HB
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_PLAYER_SQUARE;

    // symbol: ?LENGTH_OF_DAY_IN_TICKS@WanderingTraderScheduler@@0HB
    MCAPI static int const LENGTH_OF_DAY_IN_TICKS;

    // NOLINTEND
};
