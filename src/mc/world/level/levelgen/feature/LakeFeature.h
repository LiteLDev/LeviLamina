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
class XoroshiroPositionalRandomFactory;
// clang-format on

class LakeFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&> mBlock;
    ::ll::TypedStorage<8, 8, ::Block const&> mEmptyBlock;
    ::ll::TypedStorage<8, 32, ::std::optional<::XoroshiroPositionalRandomFactory> const>
        mXoroshiroPositionalRandomFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    LakeFeature& operator=(LakeFeature const&);
    LakeFeature(LakeFeature const&);
    LakeFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 0
    virtual ~LakeFeature() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LakeFeature(
        ::Block const&                                      block,
        ::std::optional<::XoroshiroPositionalRandomFactory> xoroshiroPositionalRandomFactory
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Block const& block, ::std::optional<::XoroshiroPositionalRandomFactory> xoroshiroPositionalRandomFactory);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
