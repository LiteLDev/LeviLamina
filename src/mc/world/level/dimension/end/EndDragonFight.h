#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/end/EndDragonFightVersion.h"
#include "mc/world/level/dimension/end/RespawnAnimation.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorSoundIdentifier;
class BlockPatternBuilder;
class BlockSource;
class ChunkPos;
class ChunkViewSource;
class CompoundTag;
class EnderCrystal;
class EnderDragon;
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
        MCNAPI ~GateWayGenerator();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
    ::ll::TypedStorage<8, 8, ::BlockSource*>                           mRegion;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                      mGateways;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockPatternBuilder>> mExitPortalPattern;
    ::ll::TypedStorage<4, 4, int>                                      mNumCrystalsAlive;
    ::ll::TypedStorage<4, 4, int>                                      mTicksSinceCrystalsScanned;
    ::ll::TypedStorage<4, 4, int>                                      mTicksSincePortalScanned;
    ::ll::TypedStorage<4, 4, int>                                      mTicksSinceLastPlayerScan;
    ::ll::TypedStorage<1, 1, bool>                                     mDragonKilled;
    ::ll::TypedStorage<1, 1, bool>                                     mPreviouslyKilled;
    ::ll::TypedStorage<1, 1, bool>                                     mDragonSpawned;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                          mDragonUUID;
    ::ll::TypedStorage<4, 12, ::BlockPos>                              mPortalLocation;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                        mDragonSpawnPos;
    ::ll::TypedStorage<4, 4, ::RespawnAnimation>                       mRespawnStage;
    ::ll::TypedStorage<4, 4, int>                                      mRespawnTime;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>>          mRespawnCrystals;
    ::ll::TypedStorage<1, 1, ::EndDragonFightVersion>                  mFightVersion;
    ::ll::TypedStorage<8, 32, ::EndDragonFight::GateWayGenerator>      mEntryGenerator;
    ::ll::TypedStorage<8, 32, ::EndDragonFight::GateWayGenerator>      mExitGenerator;
    ::ll::TypedStorage<1, 1, ::EndDragonFight::GatewayTask>            mBuildingOrVerifyingEndGatewayPair;
    ::ll::TypedStorage<
        8,
        40,
        ::std::deque<::std::tuple<
            ::EndDragonFight::GatewayTask,
            ::EndDragonFight::GateWayGenerator,
            ::EndDragonFight::GateWayGenerator>>>
        mGatewayTasks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EndDragonFight(::BlockSource& level);

    MCNAPI bool _areaIsLoaded(::ChunkPos const& center, ::ChunkViewSource& source, int radius) const;

    MCNAPI bool _canSpawnNewGateway(::ChunkViewSource* source, ::BlockPos const& pos) const;

    MCNAPI void _createNewDragon();

    MCNAPI ::BuildMatch _findExitPortal();

    MCNAPI void _initializeDragon(::EnderDragon& enderDragon);

    MCNAPI void _makeEndIslandFeature(::BlockSource& region, ::BlockPos position);

    MCNAPI ::ActorSoundIdentifier _makeSoundIdentifier() const;

    MCNAPI void _placeAndLinkNewGatewayPair();

    MCNAPI bool _setEndGatewayBlockActorExitPosition(
        ::BlockSource&    entrySource,
        ::BlockSource&    exitSource,
        ::BlockPos const& endGatewayActorPos,
        ::BlockPos const& destinationPos,
        bool              lookForGateway
    );

    MCNAPI void _setRespawnStage(::RespawnAnimation stage);

    MCNAPI void _spawnExitPortal(bool activated);

    MCNAPI void _spawnNewGatewayChunksTask(::std::tuple<
                                           ::EndDragonFight::GatewayTask,
                                           ::EndDragonFight::GateWayGenerator,
                                           ::EndDragonFight::GateWayGenerator>& task);

    MCNAPI void _spawnNewGatewayPair();

    MCNAPI void _tickRespawnAnimation(::std::vector<::ActorUniqueID> const& crystalIDs, int time);

    MCNAPI void _updateCrystalCount();

    MCNAPI void _verifyExitPositionsTask(::std::tuple<
                                         ::EndDragonFight::GatewayTask,
                                         ::EndDragonFight::GateWayGenerator,
                                         ::EndDragonFight::GateWayGenerator>& task);

    MCNAPI void loadData(::CompoundTag const& tag);

    MCNAPI void onCrystalDestroyed(::EnderCrystal const& crystal, ::ActorDamageSource const& source);

    MCNAPI void resetSpikeCrystals();

    MCNAPI void saveData(::CompoundTag& tag);

    MCNAPI void spawnNewGatewayChunks(::BlockPos const& pos, bool placeEntryBlocks, bool placeExitBlocks);

    MCNAPI void tick();

    MCNAPI void tryRespawn();

    MCNAPI ~EndDragonFight();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BlockPos const& DEFAULT_PORTAL_LOCATION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource& level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
