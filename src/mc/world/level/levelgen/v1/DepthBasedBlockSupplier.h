#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class XoroshiroPositionalRandomFactory;
// clang-format on

class DepthBasedBlockSupplier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2dec1b;
    ::ll::UntypedStorage<8, 8>  mUnkdecfa3;
    // NOLINTEND

public:
    // prevent constructor by default
    DepthBasedBlockSupplier& operator=(DepthBasedBlockSupplier const&);
    DepthBasedBlockSupplier(DepthBasedBlockSupplier const&);
    DepthBasedBlockSupplier();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DepthBasedBlockSupplier(::XoroshiroPositionalRandomFactory randomFactory, ::Block const* block);

    MCAPI ::Block const* getBlock(::BlockPos const& pos, ::Block const* fallback) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::XoroshiroPositionalRandomFactory randomFactory, ::Block const* block);
    // NOLINTEND
};
