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
    // symbol: ??0DepthBasedBlockSupplier@@QEAA@VXoroshiroPositionalRandomFactory@@PEBVBlock@@@Z
    MCAPI DepthBasedBlockSupplier(class XoroshiroPositionalRandomFactory, class Block const* block);

    // symbol: ?getBlock@DepthBasedBlockSupplier@@QEBAPEBVBlock@@AEBVBlockPos@@PEBV2@@Z
    MCAPI class Block const* getBlock(class BlockPos const& pos, class Block const* fallback) const;

    // NOLINTEND
};
