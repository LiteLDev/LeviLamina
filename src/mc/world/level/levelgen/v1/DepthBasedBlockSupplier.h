#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DepthBasedBlockSupplier {
public:
    // prevent constructor by default
    DepthBasedBlockSupplier& operator=(DepthBasedBlockSupplier const&);
    DepthBasedBlockSupplier(DepthBasedBlockSupplier const&);
    DepthBasedBlockSupplier();

public:
    // NOLINTBEGIN
    MCAPI DepthBasedBlockSupplier(class XoroshiroPositionalRandomFactory randomFactory, class Block const* block);

    MCAPI class Block const* getBlock(class BlockPos const& pos, class Block const* fallback) const;

    // NOLINTEND
};
