/**
 * @file  MC/DepthBasedBlockSupplier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DepthBasedBlockSupplier.
 *
 */
class DepthBasedBlockSupplier {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEPTHBASEDBLOCKSUPPLIER
public:
    class DepthBasedBlockSupplier& operator=(class DepthBasedBlockSupplier const &) = delete;
    DepthBasedBlockSupplier(class DepthBasedBlockSupplier const &) = delete;
    DepthBasedBlockSupplier() = delete;
#endif

public:
    /**
     * @hash   704784880
     * @symbol ??0DepthBasedBlockSupplier@@QEAA@VXoroshiroPositionalRandomFactory@@PEBVBlock@@@Z
     */
    MCAPI DepthBasedBlockSupplier(class XoroshiroPositionalRandomFactory, class Block const *);
    /**
     * @hash   -2086727495
     * @symbol ?getBlock@DepthBasedBlockSupplier@@QEBAPEBVBlock@@AEBVBlockPos@@PEBV2@@Z
     */
    MCAPI class Block const * getBlock(class BlockPos const &, class Block const *) const;

};