#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
// clang-format on

class WanderingTraderScheduler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk4b885e;
    ::ll::UntypedStorage<8, 8> mUnk9a2f11;
    ::ll::UntypedStorage<1, 1> mUnk1a81a3;
    ::ll::UntypedStorage<4, 4> mUnk788faf;
    ::ll::UntypedStorage<8, 8> mUnkbbd251;
    // NOLINTEND

public:
    // prevent constructor by default
    WanderingTraderScheduler& operator=(WanderingTraderScheduler const&);
    WanderingTraderScheduler(WanderingTraderScheduler const&);
    WanderingTraderScheduler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _canSpawnAtPosition(::BlockPos const& pos, ::BlockSource& region) const;

    MCNAPI bool _canWanderingTraderBeMoved() const;

    MCNAPI bool _doesWanderingTraderExist() const;

    MCNAPI ::std::optional<::BlockPos> _findValidSpawnPosUnder(::BlockPos const& pos, ::BlockSource& region) const;

    MCNAPI ::BlockPos _getRandomHeightmapPosAroundOrigin(
        ::BlockSource const& region,
        ::BlockPos const&    origin,
        int                  distFromOrigin,
        bool                 exactDist
    );

    MCNAPI ::Actor* _getRandomPlayerInOverworld() const;

    MCNAPI ::std::optional<::BlockPos>
    _getRandomWildernessPosAroundSpecifiedPos(::BlockPos const& position, ::BlockSource& region);

    MCNAPI ::std::optional<::BlockPos>
    _getSpawnPosFromNearestVillageToPlayerPos(::BlockPos const& playerPos, ::BlockSource& region);

    MCNAPI void _spawnWanderingTraderAtPos(::BlockPos const& pos, ::BlockSource& region);

    MCNAPI void readSaveData();

    MCNAPI void tick();

    MCNAPI void writeSaveData() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<float> const& CHANCE_TO_SPAWN_PER_DAY();
    // NOLINTEND
};
