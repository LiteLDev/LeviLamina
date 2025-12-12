#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class BasaltPillarFeature : public ::Feature {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    virtual ~BasaltPillarFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    _blendAtGroundLevel(::BlockSource& region, ::BlockPos const& pos, ::Random& random, ::Block const& basalt) const;

    MCNAPI bool _growColumn(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Random&         random,
        float             placeChance,
        ::Block const&    basalt
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
