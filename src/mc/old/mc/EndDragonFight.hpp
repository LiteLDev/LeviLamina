/**
 * @file  EndDragonFight.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0EndDragonFight\@\@QEAA\@AEAVBlockSource\@\@\@Z
     */
    MCAPI EndDragonFight(class BlockSource &);
    /**
     * @symbol  ?loadData\@EndDragonFight\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void loadData(class CompoundTag const &);
    /**
     * @symbol  ?onCrystalDestroyed\@EndDragonFight\@\@QEAAXAEBVEnderCrystal\@\@AEBVActorDamageSource\@\@\@Z
     */
    MCAPI void onCrystalDestroyed(class EnderCrystal const &, class ActorDamageSource const &);
    /**
     * @symbol  ?resetSpikeCrystals\@EndDragonFight\@\@QEAAXXZ
     */
    MCAPI void resetSpikeCrystals();
    /**
     * @symbol  ?saveData\@EndDragonFight\@\@QEAAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void saveData(class CompoundTag &);
    /**
     * @symbol  ?spawnNewGatewayChunks\@EndDragonFight\@\@QEAAXAEBVBlockPos\@\@_N1\@Z
     */
    MCAPI void spawnNewGatewayChunks(class BlockPos const &, bool, bool);
    /**
     * @symbol  ?tick\@EndDragonFight\@\@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @symbol  ?tryRespawn\@EndDragonFight\@\@QEAAXXZ
     */
    MCAPI void tryRespawn();
    /**
     * @symbol  ?verifyExitPositions\@EndDragonFight\@\@QEAAXAEAVEndGatewayBlockActor\@\@\@Z
     */
    MCAPI void verifyExitPositions(class EndGatewayBlockActor &);
    /**
     * @symbol  ??1EndDragonFight\@\@QEAA\@XZ
     */
    MCAPI ~EndDragonFight();

//private:
    /**
     * @symbol  ?_canSpawnNewGateway\@EndDragonFight\@\@AEBA_NPEAVChunkViewSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _canSpawnNewGateway(class ChunkViewSource *, class BlockPos const &) const;
    /**
     * @symbol  ?_createNewDragon\@EndDragonFight\@\@AEAAXXZ
     */
    MCAPI void _createNewDragon();
    /**
     * @symbol  ?_findExitPortal\@EndDragonFight\@\@AEAA?AUBuildMatch\@\@XZ
     */
    MCAPI struct BuildMatch _findExitPortal();
    /**
     * @symbol  ?_initializeDragon\@EndDragonFight\@\@AEAAXAEAVEnderDragon\@\@\@Z
     */
    MCAPI void _initializeDragon(class EnderDragon &);
    /**
     * @symbol  ?_makeEndIslandFeature\@EndDragonFight\@\@AEAAXAEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI void _makeEndIslandFeature(class BlockSource &, class BlockPos);
    /**
     * @symbol  ?_placeAndLinkNewGatewayPair\@EndDragonFight\@\@AEAAXXZ
     */
    MCAPI void _placeAndLinkNewGatewayPair();
    /**
     * @symbol  ?_setEndGatewayBlockActorExitPosition\@EndDragonFight\@\@AEAA_NAEAVBlockSource\@\@0AEBVBlockPos\@\@1_N\@Z
     */
    MCAPI bool _setEndGatewayBlockActorExitPosition(class BlockSource &, class BlockSource &, class BlockPos const &, class BlockPos const &, bool);
    /**
     * @symbol  ?_setEndGatewayExitPositions\@EndDragonFight\@\@AEAAXXZ
     */
    MCAPI void _setEndGatewayExitPositions();
    /**
     * @symbol  ?_setRespawnStage\@EndDragonFight\@\@AEAAXW4RespawnAnimation\@\@\@Z
     */
    MCAPI void _setRespawnStage(enum class RespawnAnimation);
    /**
     * @symbol  ?_spawnExitPortal\@EndDragonFight\@\@AEAAX_N\@Z
     */
    MCAPI void _spawnExitPortal(bool);
    /**
     * @symbol  ?_spawnNewGatewayChunksTask\@EndDragonFight\@\@AEAAXAEAV?$tuple\@W4GatewayTask\@EndDragonFight\@\@UGateWayGenerator\@2\@U32\@\@std\@\@\@Z
     */
    MCAPI void _spawnNewGatewayChunksTask(class std::tuple<enum class EndDragonFight::GatewayTask, struct EndDragonFight::GateWayGenerator, struct EndDragonFight::GateWayGenerator> &);
    /**
     * @symbol  ?_spawnNewGatewayPair\@EndDragonFight\@\@AEAAXXZ
     */
    MCAPI void _spawnNewGatewayPair();
    /**
     * @symbol  ?_tickRespawnAnimation\@EndDragonFight\@\@AEAAXAEBV?$vector\@UActorUniqueID\@\@V?$allocator\@UActorUniqueID\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI void _tickRespawnAnimation(std::vector<struct ActorUniqueID> const &, int);
    /**
     * @symbol  ?_updateCrystalCount\@EndDragonFight\@\@AEAAXXZ
     */
    MCAPI void _updateCrystalCount();
    /**
     * @symbol  ?_verifyExitPositionsTask\@EndDragonFight\@\@AEAAXAEAV?$tuple\@W4GatewayTask\@EndDragonFight\@\@UGateWayGenerator\@2\@U32\@\@std\@\@\@Z
     */
    MCAPI void _verifyExitPositionsTask(class std::tuple<enum class EndDragonFight::GatewayTask, struct EndDragonFight::GateWayGenerator, struct EndDragonFight::GateWayGenerator> &);

private:
    /**
     * @symbol  ?ARENA_SIZE_CHUNKS\@EndDragonFight\@\@0HB
     */
    MCAPI static int const ARENA_SIZE_CHUNKS;
    /**
     * @symbol  ?DEFAULT_PORTAL_LOCATION\@EndDragonFight\@\@0VBlockPos\@\@B
     */
    MCAPI static class BlockPos const DEFAULT_PORTAL_LOCATION;
    /**
     * @symbol  ?GATEWAY_CHUNK_RADIUS\@EndDragonFight\@\@0HB
     */
    MCAPI static int const GATEWAY_CHUNK_RADIUS;
    /**
     * @symbol  ?GATEWAY_COUNT\@EndDragonFight\@\@0HB
     */
    MCAPI static int const GATEWAY_COUNT;
    /**
     * @symbol  ?GATEWAY_DISTANCE\@EndDragonFight\@\@0HB
     */
    MCAPI static int const GATEWAY_DISTANCE;
    /**
     * @symbol  ?GATEWAY_HEIGHT\@EndDragonFight\@\@0HB
     */
    MCAPI static int const GATEWAY_HEIGHT;
    /**
     * @symbol  ?TIME_BETWEEN_CRYSTAL_SCANS\@EndDragonFight\@\@0HB
     */
    MCAPI static int const TIME_BETWEEN_CRYSTAL_SCANS;
    /**
     * @symbol  ?TIME_BETWEEN_PLAYER_SCANS\@EndDragonFight\@\@0HB
     */
    MCAPI static int const TIME_BETWEEN_PLAYER_SCANS;
    /**
     * @symbol  ?TIME_BETWEEN_PORTAL_SCANS\@EndDragonFight\@\@0HB
     */
    MCAPI static int const TIME_BETWEEN_PORTAL_SCANS;

};