#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class LakeFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString const>                                                mFluidBlock;
    ::ll::TypedStorage<8, 48, ::HashedString>                                                      mBarrierBlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::HashedString const>> const> mProhibitedBlocks;
    // NOLINTEND

public:
    // prevent constructor by default
    LakeFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LakeFeature(
        ::HashedString                                                       fluidBlock,
        ::HashedString                                                       barrierBlock,
        ::std::vector<::std::reference_wrapper<::HashedString const>> const& prohibitedBlocks
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::HashedString                                                       fluidBlock,
        ::HashedString                                                       barrierBlock,
        ::std::vector<::std::reference_wrapper<::HashedString const>> const& prohibitedBlocks
    );
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
