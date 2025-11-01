#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
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
    ::ll::TypedStorage<1, 1, bool> mIsWorldGen;
    ::ll::TypedStorage<4, 4, int> mGrowthSpawnCost;
    ::ll::TypedStorage<4, 4, int> mNoGrowthRadius;
    ::ll::TypedStorage<4, 4, int> mChargeDecayRate;
    ::ll::TypedStorage<4, 4, int> mAdditionalDecayRate;
    ::ll::TypedStorage<8, 24, ::std::vector<::SculkChargeCursor>> mCursors;
    ::ll::TypedStorage<8, 16, ::std::set<::Block const*>> mSculkReplaceableBlocks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addCursors(::BlockPos const& pos, int charge);

    MCAPI void save(::CompoundTag& tag) const;

    MCAPI void updateCursors(::IBlockWorldGenAPI& target, ::BlockSource* region, ::BlockPos const& originPos, ::Random& random, bool spreadVeins);

    MCAPI ~SculkSpreader();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
