/**
 * @file  WanderingTraderScheduler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WanderingTraderScheduler.
 *
 */
class WanderingTraderScheduler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WANDERINGTRADERSCHEDULER
public:
    class WanderingTraderScheduler& operator=(class WanderingTraderScheduler const &) = delete;
    WanderingTraderScheduler(class WanderingTraderScheduler const &) = delete;
    WanderingTraderScheduler() = delete;
#endif

public:
    /**
     * @hash   299983341
     * @symbol  ??0WanderingTraderScheduler\@\@QEAA\@AEAVLevel\@\@\@Z
     */
    MCAPI WanderingTraderScheduler(class Level &);
    /**
     * @hash   -1736685465
     * @symbol  ?isWanderingTraderCurrentlyManaged\@WanderingTraderScheduler\@\@QEAA_NAEBVActor\@\@\@Z
     */
    MCAPI bool isWanderingTraderCurrentlyManaged(class Actor const &);
    /**
     * @hash   -1533311387
     * @symbol  ?readSaveData\@WanderingTraderScheduler\@\@QEAAXXZ
     */
    MCAPI void readSaveData();
    /**
     * @hash   -1521232283
     * @symbol  ?tick\@WanderingTraderScheduler\@\@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @hash   -390771023
     * @symbol  ?writeSaveData\@WanderingTraderScheduler\@\@QEBAXXZ
     */
    MCAPI void writeSaveData() const;
    /**
     * @hash   -1595920926
     * @symbol  ??1WanderingTraderScheduler\@\@QEAA\@XZ
     */
    MCAPI ~WanderingTraderScheduler();

//private:
    /**
     * @hash   -1518229883
     * @symbol  ?_canSpawnAtPosition\@WanderingTraderScheduler\@\@AEBA_NAEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI bool _canSpawnAtPosition(class BlockPos const &, class BlockSource &) const;
    /**
     * @hash   -1227099797
     * @symbol  ?_canWanderingTraderBeMoved\@WanderingTraderScheduler\@\@AEBA_NXZ
     */
    MCAPI bool _canWanderingTraderBeMoved() const;
    /**
     * @hash   -797268183
     * @symbol  ?_doesWanderingTraderExist\@WanderingTraderScheduler\@\@AEBA_NXZ
     */
    MCAPI bool _doesWanderingTraderExist() const;
    /**
     * @hash   595417555
     * @symbol  ?_findValidSpawnPosUnder\@WanderingTraderScheduler\@\@AEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI class std::optional<class BlockPos> _findValidSpawnPosUnder(class BlockPos const &, class BlockSource &) const;
    /**
     * @hash   1579928248
     * @symbol  ?_getRandomHeightmapPosAroundOrigin\@WanderingTraderScheduler\@\@AEAA?AVBlockPos\@\@AEBVBlockSource\@\@AEBV2\@H_N\@Z
     */
    MCAPI class BlockPos _getRandomHeightmapPosAroundOrigin(class BlockSource const &, class BlockPos const &, int, bool);
    /**
     * @hash   1362707034
     * @symbol  ?_getRandomPlayerInOverworld\@WanderingTraderScheduler\@\@AEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor * _getRandomPlayerInOverworld() const;
    /**
     * @hash   -605772327
     * @symbol  ?_getSpawnPosFromNearestVillageToPlayerPos\@WanderingTraderScheduler\@\@AEAA?AV?$optional\@VBlockPos\@\@\@std\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI class std::optional<class BlockPos> _getSpawnPosFromNearestVillageToPlayerPos(class BlockPos const &, class BlockSource &);

private:
    /**
     * @hash   -1612728058
     * @symbol  ?CHANCE_TO_SPAWN_IN_WILDERNESS\@WanderingTraderScheduler\@\@0MB
     */
    MCAPI static float const CHANCE_TO_SPAWN_IN_WILDERNESS;
    /**
     * @hash   324382959
     * @symbol  ?CHANCE_TO_SPAWN_PER_DAY\@WanderingTraderScheduler\@\@0V?$vector\@MV?$allocator\@M\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<float> const CHANCE_TO_SPAWN_PER_DAY;
    /**
     * @hash   86148545
     * @symbol  ?DISTANCE_IN_BLOCKS_FROM_MEETING_AREA\@WanderingTraderScheduler\@\@0HB
     */
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_MEETING_AREA;
    /**
     * @hash   -1872621207
     * @symbol  ?DISTANCE_IN_BLOCKS_FROM_PLAYER\@WanderingTraderScheduler\@\@0HB
     */
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_PLAYER;
    /**
     * @hash   129437871
     * @symbol  ?DISTANCE_IN_BLOCKS_FROM_PLAYER_SQUARE\@WanderingTraderScheduler\@\@0HB
     */
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_PLAYER_SQUARE;
    /**
     * @hash   296140506
     * @symbol  ?LENGTH_OF_DAY_IN_TICKS\@WanderingTraderScheduler\@\@0HB
     */
    MCAPI static int const LENGTH_OF_DAY_IN_TICKS;

};