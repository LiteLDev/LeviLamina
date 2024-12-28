#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
class IBlockWorldGenAPI;
class Random;
// clang-format on

class SculkSpreader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk12233c;
    ::ll::UntypedStorage<4, 4>  mUnk794889;
    ::ll::UntypedStorage<4, 4>  mUnkded1eb;
    ::ll::UntypedStorage<4, 4>  mUnk7ef054;
    ::ll::UntypedStorage<4, 4>  mUnkf04999;
    ::ll::UntypedStorage<8, 24> mUnka74eae;
    ::ll::UntypedStorage<8, 16> mUnk4093a2;
    // NOLINTEND

public:
    // prevent constructor by default
    SculkSpreader& operator=(SculkSpreader const&);
    SculkSpreader(SculkSpreader const&);

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

    MCAPI void addCursors(::BlockPos const& pos, int charge);

    MCAPI void clearCursors();

    MCAPI ::BlockPos getCursorPosition(int index) const;

    MCAPI int getMaxCharge() const;

    MCAPI int getNumberOfCursors() const;

    MCAPI int getTotalCharge() const;

    MCAPI void load(::CompoundTag const& tag);

    MCAPI void save(::CompoundTag& tag) const;

    MCAPI void updateCursors(
        ::IBlockWorldGenAPI& target,
        ::BlockSource*       region,
        ::BlockPos const&    originPos,
        ::Random&            random,
        bool                 spreadVeins
    );

    MCAPI ~SculkSpreader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void*
    $ctor(bool isWorldGen, int growthSpawnCost, int noGrowthRadius, int chargeDecayRate, int additionalDecayRate);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
