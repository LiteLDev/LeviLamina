#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/Block.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
class IBlockWorldGenAPI;
class Random;
class SculkChargeCursor;
// clang-format on

class SculkSpreader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                mIsWorldGen;
    ::ll::TypedStorage<4, 4, int>                                 mGrowthSpawnCost;
    ::ll::TypedStorage<4, 4, int>                                 mNoGrowthRadius;
    ::ll::TypedStorage<4, 4, int>                                 mChargeDecayRate;
    ::ll::TypedStorage<4, 4, int>                                 mAdditionalDecayRate;
    ::ll::TypedStorage<8, 24, ::std::vector<::SculkChargeCursor>> mCursors;
    ::ll::TypedStorage<8, 16, ::std::set<::Block const*>>         mSculkReplaceableBlocks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SculkSpreader();

    MCAPI SculkSpreader(
        bool isWorldGen,
        int  growthSpawnCost,
        int  noGrowthRadius,
        int  chargeDecayRate,
        int  additionalDecayRate
    );

    MCAPI void load(::CompoundTag const& tag);

    MCAPI void save(::CompoundTag& tag) const;

    MCAPI void updateCursors(
        ::IBlockWorldGenAPI& target,
        ::BlockSource*       region,
        ::BlockPos const&    originPos,
        ::Random&            random,
        bool                 spreadVeins
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void*
    $ctor(bool isWorldGen, int growthSpawnCost, int noGrowthRadius, int chargeDecayRate, int additionalDecayRate);
    // NOLINTEND
};
