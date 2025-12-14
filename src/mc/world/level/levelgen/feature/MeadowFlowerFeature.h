#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"
#include "mc/world/level/levelgen/synth/PerlinSimplexNoise.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class MeadowFlowerFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise const>            mBiomeInfoNoise;
    ::ll::TypedStorage<8, 64, ::std::array<::Block const*, 8> const> mPossibleBlocks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random&) const /*override*/;

    virtual ~MeadowFlowerFeature() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
