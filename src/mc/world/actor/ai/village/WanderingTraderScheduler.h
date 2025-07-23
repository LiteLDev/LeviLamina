#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Level;
// clang-format on

class WanderingTraderScheduler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&>        mLevel;
    ::ll::TypedStorage<8, 8, uint64>          mTickToCheckIfSpawning;
    ::ll::TypedStorage<1, 1, bool>            mSpawnWanderingTrader;
    ::ll::TypedStorage<4, 4, int>             mDaysSinceLastSpawn;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mWanderingTraderUUID;
    // NOLINTEND

public:
    // prevent constructor by default
    WanderingTraderScheduler& operator=(WanderingTraderScheduler const&);
    WanderingTraderScheduler(WanderingTraderScheduler const&);
    WanderingTraderScheduler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _canSpawnAtPosition(::BlockPos const& pos, ::BlockSource& region) const;

    MCAPI bool _canWanderingTraderBeMoved() const;

    MCAPI bool _doesWanderingTraderExist() const;

    MCAPI ::std::optional<::BlockPos> _findValidSpawnPosUnder(::BlockPos const& pos, ::BlockSource& region) const;

    MCAPI ::BlockPos _getRandomHeightmapPosAroundOrigin(
        ::BlockSource const& region,
        ::BlockPos const&    origin,
        int                  distFromOrigin,
        bool                 exactDist
    );

    MCAPI ::Actor* _getRandomPlayerInOverworld() const;

    MCAPI ::std::optional<::BlockPos>
    _getRandomWildernessPosAroundSpecifiedPos(::BlockPos const& position, ::BlockSource& region);

    MCAPI ::std::optional<::BlockPos>
    _getSpawnPosFromNearestVillageToPlayerPos(::BlockPos const& playerPos, ::BlockSource& region);

    MCAPI void readSaveData();

    MCAPI void tick();

    MCAPI void writeSaveData() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<float> const& CHANCE_TO_SPAWN_PER_DAY();
    // NOLINTEND
};
