#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WanderingTraderScheduler {

public:
    // prevent constructor by default
    WanderingTraderScheduler& operator=(WanderingTraderScheduler const&) = delete;
    WanderingTraderScheduler(WanderingTraderScheduler const&)            = delete;
    WanderingTraderScheduler()                                           = delete;

public:
    /**
     * @symbol ?readSaveData\@WanderingTraderScheduler\@\@QEAAXXZ
     */
    MCAPI void readSaveData(); // NOLINT
    /**
     * @symbol ?tick\@WanderingTraderScheduler\@\@QEAAXXZ
     */
    MCAPI void tick(); // NOLINT
    /**
     * @symbol ?writeSaveData\@WanderingTraderScheduler\@\@QEBAXXZ
     */
    MCAPI void writeSaveData() const; // NOLINT

    // private:
    /**
     * @symbol ?_canSpawnAtPosition\@WanderingTraderScheduler\@\@AEBA_NAEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI bool _canSpawnAtPosition(class BlockPos const&, class BlockSource&) const; // NOLINT
    /**
     * @symbol ?_canWanderingTraderBeMoved\@WanderingTraderScheduler\@\@AEBA_NXZ
     */
    MCAPI bool _canWanderingTraderBeMoved() const; // NOLINT
    /**
     * @symbol ?_doesWanderingTraderExist\@WanderingTraderScheduler\@\@AEBA_NXZ
     */
    MCAPI bool _doesWanderingTraderExist() const; // NOLINT
    /**
     * @symbol
     * ?_findValidSpawnPosUnder\@WanderingTraderScheduler\@\@AEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI class std::optional<class BlockPos>
    _findValidSpawnPosUnder(class BlockPos const&, class BlockSource&) const; // NOLINT
    /**
     * @symbol
     * ?_getRandomHeightmapPosAroundOrigin\@WanderingTraderScheduler\@\@AEAA?AVBlockPos\@\@AEBVBlockSource\@\@AEBV2\@H_N\@Z
     */
    MCAPI class BlockPos
    _getRandomHeightmapPosAroundOrigin(class BlockSource const&, class BlockPos const&, int, bool); // NOLINT
    /**
     * @symbol ?_getRandomPlayerInOverworld\@WanderingTraderScheduler\@\@AEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor* _getRandomPlayerInOverworld() const; // NOLINT
    /**
     * @symbol
     * ?_getSpawnPosFromNearestVillageToPlayerPos\@WanderingTraderScheduler\@\@AEAA?AV?$optional\@VBlockPos\@\@\@std\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI class std::optional<class BlockPos>
    _getSpawnPosFromNearestVillageToPlayerPos(class BlockPos const&, class BlockSource&); // NOLINT
    /**
     * @symbol ?_spawnWanderingTraderAtPos\@WanderingTraderScheduler\@\@AEAAXAEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void _spawnWanderingTraderAtPos(class BlockPos const&, class BlockSource&); // NOLINT

private:
    /**
     * @symbol ?CHANCE_TO_SPAWN_IN_WILDERNESS\@WanderingTraderScheduler\@\@0MB
     */
    MCAPI static float const CHANCE_TO_SPAWN_IN_WILDERNESS; // NOLINT
    /**
     * @symbol ?CHANCE_TO_SPAWN_PER_DAY\@WanderingTraderScheduler\@\@0V?$vector\@MV?$allocator\@M\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<float> const CHANCE_TO_SPAWN_PER_DAY; // NOLINT
    /**
     * @symbol ?DISTANCE_IN_BLOCKS_FROM_MEETING_AREA\@WanderingTraderScheduler\@\@0HB
     */
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_MEETING_AREA; // NOLINT
    /**
     * @symbol ?DISTANCE_IN_BLOCKS_FROM_PLAYER\@WanderingTraderScheduler\@\@0HB
     */
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_PLAYER; // NOLINT
    /**
     * @symbol ?DISTANCE_IN_BLOCKS_FROM_PLAYER_SQUARE\@WanderingTraderScheduler\@\@0HB
     */
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_PLAYER_SQUARE; // NOLINT
    /**
     * @symbol ?LENGTH_OF_DAY_IN_TICKS\@WanderingTraderScheduler\@\@0HB
     */
    MCAPI static int const LENGTH_OF_DAY_IN_TICKS; // NOLINT
};
