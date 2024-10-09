#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/end/RespawnAnimation.h"

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
    MCAPI explicit EndDragonFight(class BlockSource& level);

    MCAPI void loadData(class CompoundTag const& tag);

    MCAPI void onCrystalDestroyed(class EnderCrystal const& crystal, class ActorDamageSource const& source);

    MCAPI void resetSpikeCrystals();

    MCAPI void saveData(class CompoundTag& tag);

    MCAPI void spawnNewGatewayChunks(class BlockPos const& pos, bool placeEntryBlocks, bool placeExitBlocks);

    MCAPI void tick();

    MCAPI void tryRespawn();

    MCAPI void verifyExitPositions(class EndGatewayBlockActor& endGatewayBlockActor);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canSpawnNewGateway(class ChunkViewSource* source, class BlockPos const& pos) const;

    MCAPI void _createNewDragon();

    MCAPI struct BuildMatch _findExitPortal();

    MCAPI void _initializeDragon(class EnderDragon& enderDragon);

    MCAPI void _makeEndIslandFeature(class BlockSource& region, class BlockPos position);

    MCAPI void _placeAndLinkNewGatewayPair();

    MCAPI bool _setEndGatewayBlockActorExitPosition(
        class BlockSource&    entrySource,
        class BlockSource&    exitSource,
        class BlockPos const& endGatewayActorPos,
        class BlockPos const& destinationPos,
        bool                  lookForGateway
    );

    MCAPI void _setEndGatewayExitPositions();

    MCAPI void _setRespawnStage(::RespawnAnimation stage);

    MCAPI void _spawnExitPortal(bool activated);

    MCAPI void _spawnNewGatewayChunksTask(std::tuple<
                                          ::EndDragonFight::GatewayTask,
                                          struct EndDragonFight::GateWayGenerator,
                                          struct EndDragonFight::GateWayGenerator>& task);

    MCAPI void _spawnNewGatewayPair();

    MCAPI void _tickRespawnAnimation(std::vector<struct ActorUniqueID> const& crystalIDs, int time);

    MCAPI void _updateCrystalCount();

    MCAPI void _verifyExitPositionsTask(std::tuple<
                                        ::EndDragonFight::GatewayTask,
                                        struct EndDragonFight::GateWayGenerator,
                                        struct EndDragonFight::GateWayGenerator>& task);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int const ARENA_SIZE_CHUNKS;

    MCAPI static class BlockPos const DEFAULT_PORTAL_LOCATION;

    MCAPI static int const GATEWAY_CHUNK_RADIUS;

    MCAPI static int const GATEWAY_COUNT;

    MCAPI static int const GATEWAY_DISTANCE;

    MCAPI static int const GATEWAY_HEIGHT;

    MCAPI static int const TIME_BETWEEN_CRYSTAL_SCANS;

    MCAPI static int const TIME_BETWEEN_PLAYER_SCANS;

    MCAPI static int const TIME_BETWEEN_PORTAL_SCANS;

    // NOLINTEND
};
