#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class IBlockWorldGenAPI;
class Random;
class SculkSpreader;
// clang-format on

class SculkBehavior {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int updateDecayDelay(int const) const = 0;

    virtual int updateFacingData(int const, ::Block const&) const = 0;

    virtual bool canChangeBlockOnSpread() const = 0;

    virtual bool
    attemptSpreadVeins(::IBlockWorldGenAPI&, ::BlockPos const&, ::Block const&, int, ::SculkSpreader&) const = 0;

    virtual int attemptUseCharge(
        ::IBlockWorldGenAPI&,
        ::BlockSource*,
        ::BlockPos const&,
        ::BlockPos const&,
        int,
        int,
        ::Random&,
        ::SculkSpreader&,
        bool const
    ) const = 0;

    virtual void onDischarged(::IBlockWorldGenAPI&, ::BlockSource*, ::BlockPos const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
