#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EndDragonFight {
public:
    // EndDragonFight inner types declare
    // clang-format off
    struct GateWayGenerator;
    // clang-format on

    // EndDragonFight inner types define
    enum class GatewayTask {};

    struct GateWayGenerator {

    public:
        // prevent constructor by default
        GateWayGenerator& operator=(GateWayGenerator const&) = delete;
        GateWayGenerator(GateWayGenerator const&)            = delete;
        GateWayGenerator()                                   = delete;

    public:
        /**
         * @symbol ??1GateWayGenerator\@EndDragonFight\@\@QEAA\@XZ
         */
        MCAPI ~GateWayGenerator(); // NOLINT
    };

public:
    // prevent constructor by default
    EndDragonFight& operator=(EndDragonFight const&) = delete;
    EndDragonFight(EndDragonFight const&)            = delete;
    EndDragonFight()                                 = delete;

public:
    /**
     * @symbol ??0EndDragonFight\@\@QEAA\@AEAVBlockSource\@\@\@Z
     */
    MCAPI EndDragonFight(class BlockSource&); // NOLINT
    /**
     * @symbol ?loadData\@EndDragonFight\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void loadData(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?onCrystalDestroyed\@EndDragonFight\@\@QEAAXAEBVEnderCrystal\@\@AEBVActorDamageSource\@\@\@Z
     */
    MCAPI void onCrystalDestroyed(class EnderCrystal const&, class ActorDamageSource const&); // NOLINT
    /**
     * @symbol ?resetSpikeCrystals\@EndDragonFight\@\@QEAAXXZ
     */
    MCAPI void resetSpikeCrystals(); // NOLINT
    /**
     * @symbol ?saveData\@EndDragonFight\@\@QEAAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void saveData(class CompoundTag&); // NOLINT
    /**
     * @symbol ?spawnNewGatewayChunks\@EndDragonFight\@\@QEAAXAEBVBlockPos\@\@_N1\@Z
     */
    MCAPI void spawnNewGatewayChunks(class BlockPos const&, bool, bool); // NOLINT
    /**
     * @symbol ?tick\@EndDragonFight\@\@QEAAXXZ
     */
    MCAPI void tick(); // NOLINT
    /**
     * @symbol ?tryRespawn\@EndDragonFight\@\@QEAAXXZ
     */
    MCAPI void tryRespawn(); // NOLINT
    /**
     * @symbol ?verifyExitPositions\@EndDragonFight\@\@QEAAXAEAVEndGatewayBlockActor\@\@\@Z
     */
    MCAPI void verifyExitPositions(class EndGatewayBlockActor&); // NOLINT

    // private:
    /**
     * @symbol ?_canSpawnNewGateway\@EndDragonFight\@\@AEBA_NPEAVChunkViewSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _canSpawnNewGateway(class ChunkViewSource*, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?_createNewDragon\@EndDragonFight\@\@AEAAXXZ
     */
    MCAPI void _createNewDragon(); // NOLINT
    /**
     * @symbol ?_findExitPortal\@EndDragonFight\@\@AEAA?AUBuildMatch\@\@XZ
     */
    MCAPI struct BuildMatch _findExitPortal(); // NOLINT
    /**
     * @symbol ?_initializeDragon\@EndDragonFight\@\@AEAAXAEAVEnderDragon\@\@\@Z
     */
    MCAPI void _initializeDragon(class EnderDragon&); // NOLINT
    /**
     * @symbol ?_makeEndIslandFeature\@EndDragonFight\@\@AEAAXAEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI void _makeEndIslandFeature(class BlockSource&, class BlockPos); // NOLINT
    /**
     * @symbol ?_placeAndLinkNewGatewayPair\@EndDragonFight\@\@AEAAXXZ
     */
    MCAPI void _placeAndLinkNewGatewayPair(); // NOLINT
    /**
     * @symbol ?_setEndGatewayBlockActorExitPosition\@EndDragonFight\@\@AEAA_NAEAVBlockSource\@\@0AEBVBlockPos\@\@1_N\@Z
     */
    MCAPI bool _setEndGatewayBlockActorExitPosition(
        class BlockSource&,
        class BlockSource&,
        class BlockPos const&,
        class BlockPos const&,
        bool
    ); // NOLINT
    /**
     * @symbol ?_setEndGatewayExitPositions\@EndDragonFight\@\@AEAAXXZ
     */
    MCAPI void _setEndGatewayExitPositions(); // NOLINT
    /**
     * @symbol ?_setRespawnStage\@EndDragonFight\@\@AEAAXW4RespawnAnimation\@\@\@Z
     */
    MCAPI void _setRespawnStage(enum class RespawnAnimation); // NOLINT
    /**
     * @symbol ?_spawnExitPortal\@EndDragonFight\@\@AEAAX_N\@Z
     */
    MCAPI void _spawnExitPortal(bool); // NOLINT
    /**
     * @symbol
     * ?_spawnNewGatewayChunksTask\@EndDragonFight\@\@AEAAXAEAV?$tuple\@W4GatewayTask\@EndDragonFight\@\@UGateWayGenerator\@2\@U32\@\@std\@\@\@Z
     */
    MCAPI void _spawnNewGatewayChunksTask(class std::tuple<
                                          enum class EndDragonFight::GatewayTask,
                                          struct EndDragonFight::GateWayGenerator,
                                          struct EndDragonFight::GateWayGenerator>&); // NOLINT
    /**
     * @symbol ?_spawnNewGatewayPair\@EndDragonFight\@\@AEAAXXZ
     */
    MCAPI void _spawnNewGatewayPair(); // NOLINT
    /**
     * @symbol
     * ?_tickRespawnAnimation\@EndDragonFight\@\@AEAAXAEBV?$vector\@UActorUniqueID\@\@V?$allocator\@UActorUniqueID\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI void _tickRespawnAnimation(std::vector<struct ActorUniqueID> const&, int); // NOLINT
    /**
     * @symbol ?_updateCrystalCount\@EndDragonFight\@\@AEAAXXZ
     */
    MCAPI void _updateCrystalCount(); // NOLINT
    /**
     * @symbol
     * ?_verifyExitPositionsTask\@EndDragonFight\@\@AEAAXAEAV?$tuple\@W4GatewayTask\@EndDragonFight\@\@UGateWayGenerator\@2\@U32\@\@std\@\@\@Z
     */
    MCAPI void _verifyExitPositionsTask(class std::tuple<
                                        enum class EndDragonFight::GatewayTask,
                                        struct EndDragonFight::GateWayGenerator,
                                        struct EndDragonFight::GateWayGenerator>&); // NOLINT

private:
    /**
     * @symbol ?ARENA_SIZE_CHUNKS\@EndDragonFight\@\@0HB
     */
    MCAPI static int const ARENA_SIZE_CHUNKS; // NOLINT
    /**
     * @symbol ?DEFAULT_PORTAL_LOCATION\@EndDragonFight\@\@0VBlockPos\@\@B
     */
    MCAPI static class BlockPos const DEFAULT_PORTAL_LOCATION; // NOLINT
    /**
     * @symbol ?GATEWAY_CHUNK_RADIUS\@EndDragonFight\@\@0HB
     */
    MCAPI static int const GATEWAY_CHUNK_RADIUS; // NOLINT
    /**
     * @symbol ?GATEWAY_COUNT\@EndDragonFight\@\@0HB
     */
    MCAPI static int const GATEWAY_COUNT; // NOLINT
    /**
     * @symbol ?GATEWAY_DISTANCE\@EndDragonFight\@\@0HB
     */
    MCAPI static int const GATEWAY_DISTANCE; // NOLINT
    /**
     * @symbol ?GATEWAY_HEIGHT\@EndDragonFight\@\@0HB
     */
    MCAPI static int const GATEWAY_HEIGHT; // NOLINT
    /**
     * @symbol ?TIME_BETWEEN_CRYSTAL_SCANS\@EndDragonFight\@\@0HB
     */
    MCAPI static int const TIME_BETWEEN_CRYSTAL_SCANS; // NOLINT
    /**
     * @symbol ?TIME_BETWEEN_PLAYER_SCANS\@EndDragonFight\@\@0HB
     */
    MCAPI static int const TIME_BETWEEN_PLAYER_SCANS; // NOLINT
    /**
     * @symbol ?TIME_BETWEEN_PORTAL_SCANS\@EndDragonFight\@\@0HB
     */
    MCAPI static int const TIME_BETWEEN_PORTAL_SCANS; // NOLINT
};
