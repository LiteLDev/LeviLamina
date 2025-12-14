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

class SeagrassFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>      mIterations;
    ::ll::TypedStorage<4, 4, float const>    mTallSeagrassChance;
    ::ll::TypedStorage<8, 8, ::Block const&> mSeagrassBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    SeagrassFeature& operator=(SeagrassFeature const&);
    SeagrassFeature(SeagrassFeature const&);
    SeagrassFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    virtual ~SeagrassFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void
    _tryPlaceSeagrass(::BlockSource& region, ::BlockPos const& pos, ::Random& random, bool isColdEnoughForIce) const;

    MCAPI void _tryPlaceTallSeagrass(::BlockSource& region, ::BlockPos const& pos, bool isColdEnoughForIce) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
