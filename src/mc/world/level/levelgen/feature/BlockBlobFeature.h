#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class HashedString;
class Random;
// clang-format on

class BlockBlobFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&>                                                       mBlock;
    ::ll::TypedStorage<4, 4, int>                                                                  mStartRadius;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::reference_wrapper<::HashedString const>> const&> mPlaceableOnBlocks;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockBlobFeature& operator=(BlockBlobFeature const&);
    BlockBlobFeature(BlockBlobFeature const&);
    BlockBlobFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;
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
