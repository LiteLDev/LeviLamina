/**
 * @file  EndDragonFight.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1110357797
     * @symbol ??0EndDragonFight@@QEAA@AEAVBlockSource@@@Z
     */
    MCAPI EndDragonFight(class BlockSource &);
    /**
     * @hash   344195538
     * @symbol ?loadData@EndDragonFight@@QEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void loadData(class CompoundTag const &);
    /**
     * @hash   1270614897
     * @symbol ?onCrystalDestroyed@EndDragonFight@@QEAAXAEBVEnderCrystal@@AEBVActorDamageSource@@@Z
     */
    MCAPI void onCrystalDestroyed(class EnderCrystal const &, class ActorDamageSource const &);
    /**
     * @hash   41379685
     * @symbol ?resetSpikeCrystals@EndDragonFight@@QEAAXXZ
     */
    MCAPI void resetSpikeCrystals();
    /**
     * @hash   -1728714490
     * @symbol ?saveData@EndDragonFight@@QEAAXAEAVCompoundTag@@@Z
     */
    MCAPI void saveData(class CompoundTag &);
    /**
     * @hash   1611286144
     * @symbol ?spawnNewGatewayChunks@EndDragonFight@@QEAAXAEBVBlockPos@@_N1@Z
     */
    MCAPI void spawnNewGatewayChunks(class BlockPos const &, bool, bool);
    /**
     * @hash   824069317
     * @symbol ?tick@EndDragonFight@@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @hash   720674357
     * @symbol ?tryRespawn@EndDragonFight@@QEAAXXZ
     */
    MCAPI void tryRespawn();
    /**
     * @hash   -820378314
     * @symbol ?verifyExitPositions@EndDragonFight@@QEAAXAEAVEndGatewayBlockActor@@@Z
     */
    MCAPI void verifyExitPositions(class EndGatewayBlockActor &);
    /**
     * @hash   -958082100
     * @symbol ??1EndDragonFight@@QEAA@XZ
     */
    MCAPI ~EndDragonFight();

//private:
    /**
     * @hash   -575797720
     * @symbol ?_canSpawnNewGateway@EndDragonFight@@AEBA_NPEAVChunkViewSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool _canSpawnNewGateway(class ChunkViewSource *, class BlockPos const &) const;
    /**
     * @hash   971135394
     * @symbol ?_createNewDragon@EndDragonFight@@AEAAXXZ
     */
    MCAPI void _createNewDragon();
    /**
     * @hash   2028086571
     * @symbol ?_findExitPortal@EndDragonFight@@AEAA?AUBuildMatch@@XZ
     */
    MCAPI struct BuildMatch _findExitPortal();
    /**
     * @hash   734793813
     * @symbol ?_initializeDragon@EndDragonFight@@AEAAXAEAVEnderDragon@@@Z
     */
    MCAPI void _initializeDragon(class EnderDragon &);
    /**
     * @hash   1250764725
     * @symbol ?_makeEndIslandFeature@EndDragonFight@@AEAAXAEAVBlockSource@@VBlockPos@@@Z
     */
    MCAPI void _makeEndIslandFeature(class BlockSource &, class BlockPos);
    /**
     * @hash   1912795793
     * @symbol ?_placeAndLinkNewGatewayPair@EndDragonFight@@AEAAXXZ
     */
    MCAPI void _placeAndLinkNewGatewayPair();
    /**
     * @hash   1039495861
     * @symbol ?_setEndGatewayBlockActorExitPosition@EndDragonFight@@AEAA_NAEAVBlockSource@@0AEBVBlockPos@@1_N@Z
     */
    MCAPI bool _setEndGatewayBlockActorExitPosition(class BlockSource &, class BlockSource &, class BlockPos const &, class BlockPos const &, bool);
    /**
     * @hash   796175101
     * @symbol ?_setRespawnStage@EndDragonFight@@AEAAXW4RespawnAnimation@@@Z
     */
    MCAPI void _setRespawnStage(enum class RespawnAnimation);
    /**
     * @hash   -392526508
     * @symbol ?_spawnExitPortal@EndDragonFight@@AEAAX_N@Z
     */
    MCAPI void _spawnExitPortal(bool);
    /**
     * @hash   2027809512
     * @symbol ?_spawnNewGatewayChunksTask@EndDragonFight@@AEAAXAEAV?$tuple@W4GatewayTask@EndDragonFight@@UGateWayGenerator@2@U32@@std@@@Z
     */
    MCAPI void _spawnNewGatewayChunksTask(class std::tuple<enum class EndDragonFight::GatewayTask, struct EndDragonFight::GateWayGenerator, struct EndDragonFight::GateWayGenerator> &);
    /**
     * @hash   2126324740
     * @symbol ?_spawnNewGatewayPair@EndDragonFight@@AEAAXXZ
     */
    MCAPI void _spawnNewGatewayPair();
    /**
     * @hash   219081514
     * @symbol ?_tickRespawnAnimation@EndDragonFight@@AEAAXAEBV?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@H@Z
     */
    MCAPI void _tickRespawnAnimation(std::vector<struct ActorUniqueID> const &, int);
    /**
     * @hash   711799691
     * @symbol ?_updateCrystalCount@EndDragonFight@@AEAAXXZ
     */
    MCAPI void _updateCrystalCount();
    /**
     * @hash   1563635946
     * @symbol ?_verifyExitPositionsTask@EndDragonFight@@AEAAXAEAV?$tuple@W4GatewayTask@EndDragonFight@@UGateWayGenerator@2@U32@@std@@@Z
     */
    MCAPI void _verifyExitPositionsTask(class std::tuple<enum class EndDragonFight::GatewayTask, struct EndDragonFight::GateWayGenerator, struct EndDragonFight::GateWayGenerator> &);

private:
    /**
     * @hash   1402981754
     * @symbol ?ARENA_SIZE_CHUNKS@EndDragonFight@@0HB
     */
    MCAPI static int const ARENA_SIZE_CHUNKS;
    /**
     * @hash   -1272748395
     * @symbol ?DEFAULT_PORTAL_LOCATION@EndDragonFight@@0VBlockPos@@B
     */
    MCAPI static class BlockPos const DEFAULT_PORTAL_LOCATION;
    /**
     * @hash   -1707548207
     * @symbol ?GATEWAY_CHUNK_RADIUS@EndDragonFight@@0HB
     */
    MCAPI static int const GATEWAY_CHUNK_RADIUS;
    /**
     * @hash   -516908214
     * @symbol ?GATEWAY_COUNT@EndDragonFight@@0HB
     */
    MCAPI static int const GATEWAY_COUNT;
    /**
     * @hash   1023153194
     * @symbol ?GATEWAY_DISTANCE@EndDragonFight@@0HB
     */
    MCAPI static int const GATEWAY_DISTANCE;
    /**
     * @hash   -1434456992
     * @symbol ?GATEWAY_HEIGHT@EndDragonFight@@0HB
     */
    MCAPI static int const GATEWAY_HEIGHT;
    /**
     * @hash   -966546938
     * @symbol ?TIME_BETWEEN_CRYSTAL_SCANS@EndDragonFight@@0HB
     */
    MCAPI static int const TIME_BETWEEN_CRYSTAL_SCANS;
    /**
     * @hash   -1631793369
     * @symbol ?TIME_BETWEEN_PLAYER_SCANS@EndDragonFight@@0HB
     */
    MCAPI static int const TIME_BETWEEN_PLAYER_SCANS;
    /**
     * @hash   1984975702
     * @symbol ?TIME_BETWEEN_PORTAL_SCANS@EndDragonFight@@0HB
     */
    MCAPI static int const TIME_BETWEEN_PORTAL_SCANS;

};