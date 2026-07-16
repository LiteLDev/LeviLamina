#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/end/EndDragonFightVersion.h"
#include "mc/world/level/dimension/end/RespawnAnimation.h"

// auto generated forward declare list
// clang-format off
class BlockPatternMatcher;
class BlockSource;
class ChunkViewSource;
// clang-format on

class EndDragonFight {
public:
    // EndDragonFight inner types declare
    // clang-format off
    struct GateWayGenerator;
    // clang-format on

    // EndDragonFight inner types define
    enum class GatewayTask : uchar {
        GeneratePair = 0,
        VerifyPair   = 1,
        NoTask       = 2,
    };

    struct GateWayGenerator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                 mPlaceNewBlocks;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkViewSource>> mSource;
        ::ll::TypedStorage<4, 12, ::BlockPos>                          mPosition;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource*>                                 mRegion;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                            mGateways;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockPatternMatcher const>> mExitPortalPattern;
    ::ll::TypedStorage<4, 4, int>                                            mNumCrystalsAlive;
    ::ll::TypedStorage<4, 4, int>                                            mTicksSinceCrystalsScanned;
    ::ll::TypedStorage<4, 4, int>                                            mTicksSincePortalScanned;
    ::ll::TypedStorage<4, 4, int>                                            mTicksSinceLastPlayerScan;
    ::ll::TypedStorage<1, 1, bool>                                           mDragonKilled;
    ::ll::TypedStorage<1, 1, bool>                                           mPreviouslyKilled;
    ::ll::TypedStorage<1, 1, bool>                                           mDragonSpawned;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                mDragonUUID;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                    mPortalLocation;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                              mDragonSpawnPos;
    ::ll::TypedStorage<4, 4, ::RespawnAnimation>                             mRespawnStage;
    ::ll::TypedStorage<4, 4, int>                                            mRespawnTime;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>>                mRespawnCrystals;
    ::ll::TypedStorage<1, 1, ::EndDragonFightVersion>                        mFightVersion;
    ::ll::TypedStorage<8, 32, ::EndDragonFight::GateWayGenerator>            mEntryGenerator;
    ::ll::TypedStorage<8, 32, ::EndDragonFight::GateWayGenerator>            mExitGenerator;
    ::ll::TypedStorage<1, 1, ::EndDragonFight::GatewayTask>                  mBuildingOrVerifyingEndGatewayPair;
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
    MCAPI void tryRespawn();
    // NOLINTEND
};
