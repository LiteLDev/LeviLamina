#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DepthBasedBlockSupplier {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEPTHBASEDBLOCKSUPPLIER
public:
    DepthBasedBlockSupplier& operator=(DepthBasedBlockSupplier const&) = delete;
    DepthBasedBlockSupplier(DepthBasedBlockSupplier const&)            = delete;
    DepthBasedBlockSupplier()                                          = delete;
#endif

public:
    /**
     * @symbol ??0DepthBasedBlockSupplier\@\@QEAA\@VXoroshiroPositionalRandomFactory\@\@PEBVBlock\@\@\@Z
     */
    MCAPI DepthBasedBlockSupplier(class XoroshiroPositionalRandomFactory, class Block const*);
    /**
     * @symbol ?getBlock\@DepthBasedBlockSupplier\@\@QEBAPEBVBlock\@\@AEBVBlockPos\@\@PEBV2\@\@Z
     */
    MCAPI class Block const* getBlock(class BlockPos const&, class Block const*) const;
};
