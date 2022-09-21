/**
 * @file  MC/WanderingTraderScheduler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1362603325
     * @symbol ??0WanderingTraderScheduler@@QEAA@AEAVLevel@@@Z
     */
    MCAPI WanderingTraderScheduler(class Level &);
    /**
     * @hash   -675280185
     * @symbol ?isWanderingTraderCurrentlyManaged@WanderingTraderScheduler@@QEAA_NAEBVActor@@@Z
     */
    MCAPI bool isWanderingTraderCurrentlyManaged(class Actor const &);
    /**
     * @hash   -471906107
     * @symbol ?readSaveData@WanderingTraderScheduler@@QEAAXXZ
     */
    MCAPI void readSaveData();
    /**
     * @hash   -459873131
     * @symbol ?tick@WanderingTraderScheduler@@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @hash   670726513
     * @symbol ?writeSaveData@WanderingTraderScheduler@@QEBAXXZ
     */
    MCAPI void writeSaveData() const;
    /**
     * @hash   -1687807902
     * @symbol ??1WanderingTraderScheduler@@QEAA@XZ
     */
    MCAPI ~WanderingTraderScheduler();

//private:
    /**
     * @hash   264567625
     * @symbol ?_doesWanderingTraderExist@WanderingTraderScheduler@@AEBA_NXZ
     */
    MCAPI bool _doesWanderingTraderExist() const;
    /**
     * @hash   1657253363
     * @symbol ?_findValidSpawnPosUnder@WanderingTraderScheduler@@AEBA?AV?$optional@VBlockPos@@@std@@AEBVBlockPos@@AEAVBlockSource@@@Z
     */
    MCAPI class std::optional<class BlockPos> _findValidSpawnPosUnder(class BlockPos const &, class BlockSource &) const;
    /**
     * @hash   -1653203240
     * @symbol ?_getRandomHeightmapPosAroundOrigin@WanderingTraderScheduler@@AEAA?AVBlockPos@@AEBVBlockSource@@AEBV2@H_N@Z
     */
    MCAPI class BlockPos _getRandomHeightmapPosAroundOrigin(class BlockSource const &, class BlockPos const &, int, bool);
    /**
     * @hash   -1870439830
     * @symbol ?_getRandomPlayerInOverworld@WanderingTraderScheduler@@AEBAPEAVActor@@XZ
     */
    MCAPI class Actor * _getRandomPlayerInOverworld() const;
    /**
     * @hash   456017353
     * @symbol ?_getSpawnPosFromNearestVillageToPlayerPos@WanderingTraderScheduler@@AEAA?AV?$optional@VBlockPos@@@std@@AEBVBlockPos@@AEAVBlockSource@@@Z
     */
    MCAPI class std::optional<class BlockPos> _getSpawnPosFromNearestVillageToPlayerPos(class BlockPos const &, class BlockSource &);

private:
    /**
     * @hash   1740532274
     * @symbol ?CHANCE_TO_SPAWN_IN_WILDERNESS@WanderingTraderScheduler@@0MB
     */
    MCAPI static float const CHANCE_TO_SPAWN_IN_WILDERNESS;
    /**
     * @hash   -730948801
     * @symbol ?CHANCE_TO_SPAWN_PER_DAY@WanderingTraderScheduler@@0V?$vector@MV?$allocator@M@std@@@std@@B
     */
    MCAPI static std::vector<float> const CHANCE_TO_SPAWN_PER_DAY;
    /**
     * @hash   -855558419
     * @symbol ?DISTANCE_IN_BLOCKS_FROM_MEETING_AREA@WanderingTraderScheduler@@0HB
     */
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_MEETING_AREA;
    /**
     * @hash   1480639125
     * @symbol ?DISTANCE_IN_BLOCKS_FROM_PLAYER@WanderingTraderScheduler@@0HB
     */
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_PLAYER;
    /**
     * @hash   -812269093
     * @symbol ?DISTANCE_IN_BLOCKS_FROM_PLAYER_SQUARE@WanderingTraderScheduler@@0HB
     */
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_PLAYER_SQUARE;
    /**
     * @hash   -645566458
     * @symbol ?LENGTH_OF_DAY_IN_TICKS@WanderingTraderScheduler@@0HB
     */
    MCAPI static int const LENGTH_OF_DAY_IN_TICKS;

};