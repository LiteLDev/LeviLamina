#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/RespawnAnimation.h"

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
        GateWayGenerator& operator=(GateWayGenerator const&);
        GateWayGenerator(GateWayGenerator const&);
        GateWayGenerator();

    public:
        // NOLINTBEGIN
        // symbol: ??1GateWayGenerator@EndDragonFight@@QEAA@XZ
        MCAPI ~GateWayGenerator();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    EndDragonFight& operator=(EndDragonFight const&);
    EndDragonFight(EndDragonFight const&);
    EndDragonFight();

public:
    // NOLINTBEGIN
    // symbol: ??0EndDragonFight@@QEAA@AEAVBlockSource@@@Z
    MCAPI explicit EndDragonFight(class BlockSource& level);

    // symbol: ?loadData@EndDragonFight@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void loadData(class CompoundTag const& tag);

    // symbol: ?onCrystalDestroyed@EndDragonFight@@QEAAXAEBVEnderCrystal@@AEBVActorDamageSource@@@Z
    MCAPI void onCrystalDestroyed(class EnderCrystal const& crystal, class ActorDamageSource const& source);

    // symbol: ?resetSpikeCrystals@EndDragonFight@@QEAAXXZ
    MCAPI void resetSpikeCrystals();

    // symbol: ?saveData@EndDragonFight@@QEAAXAEAVCompoundTag@@@Z
    MCAPI void saveData(class CompoundTag& tag);

    // symbol: ?spawnNewGatewayChunks@EndDragonFight@@QEAAXAEBVBlockPos@@_N1@Z
    MCAPI void spawnNewGatewayChunks(class BlockPos const& pos, bool placeEntryBlocks, bool placeExitBlocks);

    // symbol: ?tick@EndDragonFight@@QEAAXXZ
    MCAPI void tick();

    // symbol: ?tryRespawn@EndDragonFight@@QEAAXXZ
    MCAPI void tryRespawn();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canSpawnNewGateway@EndDragonFight@@AEBA_NPEAVChunkViewSource@@AEBVBlockPos@@@Z
    MCAPI bool _canSpawnNewGateway(class ChunkViewSource* source, class BlockPos const& pos) const;

    // symbol: ?_createNewDragon@EndDragonFight@@AEAAXXZ
    MCAPI void _createNewDragon();

    // symbol: ?_findExitPortal@EndDragonFight@@AEAA?AUBuildMatch@@XZ
    MCAPI struct BuildMatch _findExitPortal();

    // symbol: ?_initializeDragon@EndDragonFight@@AEAAXAEAVEnderDragon@@@Z
    MCAPI void _initializeDragon(class EnderDragon& enderDragon);

    // symbol: ?_makeEndIslandFeature@EndDragonFight@@AEAAXAEAVBlockSource@@VBlockPos@@@Z
    MCAPI void _makeEndIslandFeature(class BlockSource& region, class BlockPos position);

    // symbol: ?_placeAndLinkNewGatewayPair@EndDragonFight@@AEAAXXZ
    MCAPI void _placeAndLinkNewGatewayPair();

    // symbol: ?_setEndGatewayBlockActorExitPosition@EndDragonFight@@AEAA_NAEAVBlockSource@@0AEBVBlockPos@@1_N@Z
    MCAPI bool _setEndGatewayBlockActorExitPosition(
        class BlockSource&    entrySource,
        class BlockSource&    exitSource,
        class BlockPos const& endGatewayActorPos,
        class BlockPos const& destinationPos,
        bool                  lookForGateway
    );

    // symbol: ?_setEndGatewayExitPositions@EndDragonFight@@AEAAXXZ
    MCAPI void _setEndGatewayExitPositions();

    // symbol: ?_setRespawnStage@EndDragonFight@@AEAAXW4RespawnAnimation@@@Z
    MCAPI void _setRespawnStage(::RespawnAnimation stage);

    // symbol: ?_spawnExitPortal@EndDragonFight@@AEAAX_N@Z
    MCAPI void _spawnExitPortal(bool activated);

    // symbol:
    // ?_spawnNewGatewayChunksTask@EndDragonFight@@AEAAXAEAV?$tuple@W4GatewayTask@EndDragonFight@@UGateWayGenerator@2@U32@@std@@@Z
    MCAPI void _spawnNewGatewayChunksTask(std::tuple<
                                          ::EndDragonFight::GatewayTask,
                                          struct EndDragonFight::GateWayGenerator,
                                          struct EndDragonFight::GateWayGenerator>& task);

    // symbol: ?_spawnNewGatewayPair@EndDragonFight@@AEAAXXZ
    MCAPI void _spawnNewGatewayPair();

    // symbol:
    // ?_tickRespawnAnimation@EndDragonFight@@AEAAXAEBV?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@H@Z
    MCAPI void _tickRespawnAnimation(std::vector<struct ActorUniqueID> const& crystalIDs, int time);

    // symbol: ?_updateCrystalCount@EndDragonFight@@AEAAXXZ
    MCAPI void _updateCrystalCount();

    // symbol:
    // ?_verifyExitPositionsTask@EndDragonFight@@AEAAXAEAV?$tuple@W4GatewayTask@EndDragonFight@@UGateWayGenerator@2@U32@@std@@@Z
    MCAPI void _verifyExitPositionsTask(std::tuple<
                                        ::EndDragonFight::GatewayTask,
                                        struct EndDragonFight::GateWayGenerator,
                                        struct EndDragonFight::GateWayGenerator>& task);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ARENA_SIZE_CHUNKS@EndDragonFight@@0HB
    MCAPI static int const ARENA_SIZE_CHUNKS;

    // symbol: ?DEFAULT_PORTAL_LOCATION@EndDragonFight@@0VBlockPos@@B
    MCAPI static class BlockPos const DEFAULT_PORTAL_LOCATION;

    // symbol: ?GATEWAY_CHUNK_RADIUS@EndDragonFight@@0HB
    MCAPI static int const GATEWAY_CHUNK_RADIUS;

    // symbol: ?GATEWAY_COUNT@EndDragonFight@@0HB
    MCAPI static int const GATEWAY_COUNT;

    // symbol: ?GATEWAY_DISTANCE@EndDragonFight@@0HB
    MCAPI static int const GATEWAY_DISTANCE;

    // symbol: ?GATEWAY_HEIGHT@EndDragonFight@@0HB
    MCAPI static int const GATEWAY_HEIGHT;

    // symbol: ?TIME_BETWEEN_CRYSTAL_SCANS@EndDragonFight@@0HB
    MCAPI static int const TIME_BETWEEN_CRYSTAL_SCANS;

    // symbol: ?TIME_BETWEEN_PLAYER_SCANS@EndDragonFight@@0HB
    MCAPI static int const TIME_BETWEEN_PLAYER_SCANS;

    // symbol: ?TIME_BETWEEN_PORTAL_SCANS@EndDragonFight@@0HB
    MCAPI static int const TIME_BETWEEN_PORTAL_SCANS;

    // NOLINTEND
};
