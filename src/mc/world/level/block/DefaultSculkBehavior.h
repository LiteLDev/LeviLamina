#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SculkBehavior.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class IBlockWorldGenAPI;
class Random;
class SculkSpreader;
// clang-format on

class DefaultSculkBehavior : public ::SculkBehavior {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int updateDecayDelay(int const currentValue) const /*override*/;

    virtual int updateFacingData(int const currentValue, ::Block const&) const /*override*/;

    virtual bool canChangeBlockOnSpread() const /*override*/;

    virtual bool attemptSpreadVeins(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&    pos,
        ::Block const&       block,
        int                  facingData,
        ::SculkSpreader&
    ) const /*override*/;

    virtual int attemptUseCharge(
        ::IBlockWorldGenAPI&,
        ::BlockSource*,
        ::BlockPos const&,
        ::BlockPos const&,
        int charge,
        int decayDelay,
        ::Random&,
        ::SculkSpreader&,
        bool const
    ) const /*override*/;

    virtual void onDischarged(::IBlockWorldGenAPI&, ::BlockSource*, ::BlockPos const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $updateDecayDelay(int const currentValue) const;

    MCNAPI int $updateFacingData(int const currentValue, ::Block const&) const;

    MCNAPI bool $canChangeBlockOnSpread() const;

    MCNAPI bool $attemptSpreadVeins(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&    pos,
        ::Block const&       block,
        int                  facingData,
        ::SculkSpreader&
    ) const;

    MCNAPI int $attemptUseCharge(
        ::IBlockWorldGenAPI&,
        ::BlockSource*,
        ::BlockPos const&,
        ::BlockPos const&,
        int charge,
        int decayDelay,
        ::Random&,
        ::SculkSpreader&,
        bool const
    ) const;

    MCNAPI void $onDischarged(::IBlockWorldGenAPI&, ::BlockSource*, ::BlockPos const&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
