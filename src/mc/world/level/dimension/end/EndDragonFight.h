#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/end/RespawnAnimation.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class BlockPos;
class BlockSource;
class ChunkViewSource;
class CompoundTag;
class EndGatewayBlockActor;
class EnderCrystal;
class EnderDragon;
struct ActorUniqueID;
struct BuildMatch;
// clang-format on

class EndDragonFight {
public:
    // EndDragonFight inner types declare
    // clang-format off
    struct GateWayGenerator;
    // clang-format on

    // EndDragonFight inner types define
    struct GateWayGenerator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnk581d19;
        ::ll::UntypedStorage<8, 8>  mUnk1cd584;
        ::ll::UntypedStorage<4, 12> mUnkc5e5b6;
        // NOLINTEND

    public:
        // prevent constructor by default
        GateWayGenerator& operator=(GateWayGenerator const&);
        GateWayGenerator(GateWayGenerator const&);
        GateWayGenerator();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~GateWayGenerator();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    enum class GatewayTask : uchar {
        GeneratePair = 0,
        VerifyPair   = 1,
        NoTask       = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3074b4;
    ::ll::UntypedStorage<8, 24> mUnkd2cb31;
    ::ll::UntypedStorage<8, 8>  mUnkfe37e5;
    ::ll::UntypedStorage<4, 4>  mUnk9d1c98;
    ::ll::UntypedStorage<4, 4>  mUnk57dcd9;
    ::ll::UntypedStorage<4, 4>  mUnk699483;
    ::ll::UntypedStorage<4, 4>  mUnkb67f6c;
    ::ll::UntypedStorage<1, 1>  mUnkde9c45;
    ::ll::UntypedStorage<1, 1>  mUnk47c04d;
    ::ll::UntypedStorage<1, 1>  mUnkf7c308;
    ::ll::UntypedStorage<8, 8>  mUnk63c6c7;
    ::ll::UntypedStorage<4, 12> mUnk31f1af;
    ::ll::UntypedStorage<4, 12> mUnk93b99b;
    ::ll::UntypedStorage<4, 4>  mUnk33e167;
    ::ll::UntypedStorage<4, 4>  mUnka333be;
    ::ll::UntypedStorage<8, 24> mUnk26e1c5;
    ::ll::UntypedStorage<1, 1>  mUnk487fc6;
    ::ll::UntypedStorage<8, 32> mUnk8a98cb;
    ::ll::UntypedStorage<8, 32> mUnk3022b3;
    ::ll::UntypedStorage<1, 1>  mUnk507824;
    ::ll::UntypedStorage<8, 40> mUnk985b0f;
    // NOLINTEND

public:
    // prevent constructor by default
    EndDragonFight& operator=(EndDragonFight const&);
    EndDragonFight(EndDragonFight const&);
    EndDragonFight();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EndDragonFight(::BlockSource& level);

    MCAPI bool _canSpawnNewGateway(::ChunkViewSource* source, ::BlockPos const& pos) const;

    MCAPI void _createNewDragon();

    MCAPI ::BuildMatch _findExitPortal();

    MCAPI void _initializeDragon(::EnderDragon& enderDragon);

    MCAPI void _makeEndIslandFeature(::BlockSource& region, ::BlockPos position);

    MCAPI void _placeAndLinkNewGatewayPair();

    MCAPI bool _setEndGatewayBlockActorExitPosition(
        ::BlockSource&    entrySource,
        ::BlockSource&    exitSource,
        ::BlockPos const& endGatewayActorPos,
        ::BlockPos const& destinationPos,
        bool              lookForGateway
    );

    MCAPI void _setEndGatewayExitPositions();

    MCAPI void _setRespawnStage(::RespawnAnimation stage);

    MCAPI void _spawnExitPortal(bool activated);

    MCAPI void _spawnNewGatewayChunksTask(::std::tuple<
                                          ::EndDragonFight::GatewayTask,
                                          ::EndDragonFight::GateWayGenerator,
                                          ::EndDragonFight::GateWayGenerator>& task);

    MCAPI void _spawnNewGatewayPair();

    MCAPI void _tickRespawnAnimation(::std::vector<::ActorUniqueID> const& crystalIDs, int time);

    MCAPI void _updateCrystalCount();

    MCAPI void _verifyExitPositionsTask(::std::tuple<
                                        ::EndDragonFight::GatewayTask,
                                        ::EndDragonFight::GateWayGenerator,
                                        ::EndDragonFight::GateWayGenerator>& task);

    MCAPI void loadData(::CompoundTag const& tag);

    MCAPI void onCrystalDestroyed(::EnderCrystal const& crystal, ::ActorDamageSource const& source);

    MCAPI void resetSpikeCrystals();

    MCAPI void saveData(::CompoundTag& tag);

    MCAPI void spawnNewGatewayChunks(::BlockPos const& pos, bool placeEntryBlocks, bool placeExitBlocks);

    MCAPI void tick();

    MCAPI void tryRespawn();

    MCAPI void verifyExitPositions(::EndGatewayBlockActor& endGatewayBlockActor);

    MCAPI ~EndDragonFight();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& ARENA_SIZE_CHUNKS();

    MCAPI static ::BlockPos const& DEFAULT_PORTAL_LOCATION();

    MCAPI static int const& GATEWAY_CHUNK_RADIUS();

    MCAPI static int const& GATEWAY_COUNT();

    MCAPI static int const& GATEWAY_DISTANCE();

    MCAPI static int const& GATEWAY_HEIGHT();

    MCAPI static int const& TIME_BETWEEN_CRYSTAL_SCANS();

    MCAPI static int const& TIME_BETWEEN_PLAYER_SCANS();

    MCAPI static int const& TIME_BETWEEN_PORTAL_SCANS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockSource& level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
