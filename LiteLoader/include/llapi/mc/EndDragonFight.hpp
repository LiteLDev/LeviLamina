/**
 * @file  EndDragonFight.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EndDragonFight.
 *
 */
class EndDragonFight {

#define AFTER_EXTRA
// Add Member There
public:
enum class GatewayTask;
struct GateWayGenerator {
    GateWayGenerator() = delete;
    GateWayGenerator(GateWayGenerator const&) = delete;
    GateWayGenerator(GateWayGenerator const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDDRAGONFIGHT
public:
    class EndDragonFight& operator=(class EndDragonFight const &) = delete;
    EndDragonFight(class EndDragonFight const &) = delete;
    EndDragonFight() = delete;
#endif

public:
    /**
     * @hash   -865371989
     * @symbol  ??0EndDragonFight\@\@QEAA\@AEAVBlockSource\@\@\@Z
     */
    MCAPI EndDragonFight(class BlockSource &);
    /**
     * @hash   590134658
     * @symbol  ?loadData\@EndDragonFight\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void loadData(class CompoundTag const &);
    /**
     * @hash   1516569393
     * @symbol  ?onCrystalDestroyed\@EndDragonFight\@\@QEAAXAEBVEnderCrystal\@\@AEBVActorDamageSource\@\@\@Z
     */
    MCAPI void onCrystalDestroyed(class EnderCrystal const &, class ActorDamageSource const &);
    /**
     * @hash   287349557
     * @symbol  ?resetSpikeCrystals\@EndDragonFight\@\@QEAAXXZ
     */
    MCAPI void resetSpikeCrystals();
    /**
     * @hash   -1482744618
     * @symbol  ?saveData\@EndDragonFight\@\@QEAAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void saveData(class CompoundTag &);
    /**
     * @hash   1857240640
     * @symbol  ?spawnNewGatewayChunks\@EndDragonFight\@\@QEAAXAEBVBlockPos\@\@_N1\@Z
     */
    MCAPI void spawnNewGatewayChunks(class BlockPos const &, bool, bool);
    /**
     * @hash   1070039189
     * @symbol  ?tick\@EndDragonFight\@\@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @hash   966121445
     * @symbol  ?tryRespawn\@EndDragonFight\@\@QEAAXXZ
     */
    MCAPI void tryRespawn();
    /**
     * @hash   -574900474
     * @symbol  ?verifyExitPositions\@EndDragonFight\@\@QEAAXAEAVEndGatewayBlockActor\@\@\@Z
     */
    MCAPI void verifyExitPositions(class EndGatewayBlockActor &);
    /**
     * @hash   -749306772
     * @symbol  ??1EndDragonFight\@\@QEAA\@XZ
     */
    MCAPI ~EndDragonFight();

//private:
    /**
     * @hash   -330688904
     * @symbol  ?_canSpawnNewGateway\@EndDragonFight\@\@AEBA_NPEAVChunkViewSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _canSpawnNewGateway(class ChunkViewSource *, class BlockPos const &) const;
    /**
     * @hash   1216274962
     * @symbol  ?_createNewDragon\@EndDragonFight\@\@AEAAXXZ
     */
    MCAPI void _createNewDragon();
    /**
     * @hash   -2021710405
     * @symbol  ?_findExitPortal\@EndDragonFight\@\@AEAA?AUBuildMatch\@\@XZ
     */
    MCAPI struct BuildMatch _findExitPortal();
    /**
     * @hash   979964133
     * @symbol  ?_initializeDragon\@EndDragonFight\@\@AEAAXAEAVEnderDragon\@\@\@Z
     */
    MCAPI void _initializeDragon(class EnderDragon &);
    /**
     * @hash   1495904293
     * @symbol  ?_makeEndIslandFeature\@EndDragonFight\@\@AEAAXAEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI void _makeEndIslandFeature(class BlockSource &, class BlockPos);
    /**
     * @hash   -2137031935
     * @symbol  ?_placeAndLinkNewGatewayPair\@EndDragonFight\@\@AEAAXXZ
     */
    MCAPI void _placeAndLinkNewGatewayPair();
    /**
     * @hash   1284650805
     * @symbol  ?_setEndGatewayBlockActorExitPosition\@EndDragonFight\@\@AEAA_NAEAVBlockSource\@\@0AEBVBlockPos\@\@1_N\@Z
     */
    MCAPI bool _setEndGatewayBlockActorExitPosition(class BlockSource &, class BlockSource &, class BlockPos const &, class BlockPos const &, bool);
    /**
     * @hash   1505653194
     * @symbol  ?_setEndGatewayExitPositions\@EndDragonFight\@\@AEAAXXZ
     */
    MCAPI void _setEndGatewayExitPositions();
    /**
     * @hash   1041822077
     * @symbol  ?_setRespawnStage\@EndDragonFight\@\@AEAAXW4RespawnAnimation\@\@\@Z
     */
    MCAPI void _setRespawnStage(enum class RespawnAnimation);
    /**
     * @hash   -146848780
     * @symbol  ?_spawnExitPortal\@EndDragonFight\@\@AEAAX_N\@Z
     */
    MCAPI void _spawnExitPortal(bool);
    /**
     * @hash   -2021433928
     * @symbol  ?_spawnNewGatewayChunksTask\@EndDragonFight\@\@AEAAXAEAV?$tuple\@W4GatewayTask\@EndDragonFight\@\@UGateWayGenerator\@2\@U32\@\@std\@\@\@Z
     */
    MCAPI void _spawnNewGatewayChunksTask(class std::tuple<enum class EndDragonFight::GatewayTask, struct EndDragonFight::GateWayGenerator, struct EndDragonFight::GateWayGenerator> &);
    /**
     * @hash   -1922903324
     * @symbol  ?_spawnNewGatewayPair\@EndDragonFight\@\@AEAAXXZ
     */
    MCAPI void _spawnNewGatewayPair();
    /**
     * @hash   464851498
     * @symbol  ?_tickRespawnAnimation\@EndDragonFight\@\@AEAAXAEBV?$vector\@UActorUniqueID\@\@V?$allocator\@UActorUniqueID\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI void _tickRespawnAnimation(std::vector<struct ActorUniqueID> const &, int);
    /**
     * @hash   957692683
     * @symbol  ?_updateCrystalCount\@EndDragonFight\@\@AEAAXXZ
     */
    MCAPI void _updateCrystalCount();
    /**
     * @hash   1809544314
     * @symbol  ?_verifyExitPositionsTask\@EndDragonFight\@\@AEAAXAEAV?$tuple\@W4GatewayTask\@EndDragonFight\@\@UGateWayGenerator\@2\@U32\@\@std\@\@\@Z
     */
    MCAPI void _verifyExitPositionsTask(class std::tuple<enum class EndDragonFight::GatewayTask, struct EndDragonFight::GateWayGenerator, struct EndDragonFight::GateWayGenerator> &);

private:
    /**
     * @hash   -1931769718
     * @symbol  ?ARENA_SIZE_CHUNKS\@EndDragonFight\@\@0HB
     */
    MCAPI static int const ARENA_SIZE_CHUNKS;
    /**
     * @hash   -210989467
     * @symbol  ?DEFAULT_PORTAL_LOCATION\@EndDragonFight\@\@0VBlockPos\@\@B
     */
    MCAPI static class BlockPos const DEFAULT_PORTAL_LOCATION;
    /**
     * @hash   -747332383
     * @symbol  ?GATEWAY_CHUNK_RADIUS\@EndDragonFight\@\@0HB
     */
    MCAPI static int const GATEWAY_CHUNK_RADIUS;
    /**
     * @hash   443307610
     * @symbol  ?GATEWAY_COUNT\@EndDragonFight\@\@0HB
     */
    MCAPI static int const GATEWAY_COUNT;
    /**
     * @hash   1983369018
     * @symbol  ?GATEWAY_DISTANCE\@EndDragonFight\@\@0HB
     */
    MCAPI static int const GATEWAY_DISTANCE;
    /**
     * @hash   -474241168
     * @symbol  ?GATEWAY_HEIGHT\@EndDragonFight\@\@0HB
     */
    MCAPI static int const GATEWAY_HEIGHT;
    /**
     * @hash   -6331114
     * @symbol  ?TIME_BETWEEN_CRYSTAL_SCANS\@EndDragonFight\@\@0HB
     */
    MCAPI static int const TIME_BETWEEN_CRYSTAL_SCANS;
    /**
     * @hash   -671577545
     * @symbol  ?TIME_BETWEEN_PLAYER_SCANS\@EndDragonFight\@\@0HB
     */
    MCAPI static int const TIME_BETWEEN_PLAYER_SCANS;
    /**
     * @hash   -1349775770
     * @symbol  ?TIME_BETWEEN_PORTAL_SCANS\@EndDragonFight\@\@0HB
     */
    MCAPI static int const TIME_BETWEEN_PORTAL_SCANS;

};