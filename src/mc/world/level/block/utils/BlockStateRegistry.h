#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockStateRegistry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATEREGISTRY
public:
    BlockStateRegistry& operator=(BlockStateRegistry const&) = delete;
    BlockStateRegistry(BlockStateRegistry const&)            = delete;
    BlockStateRegistry()                                     = delete;
#endif

public:
    /**
     * @symbol ?registerBlockState\@BlockStateRegistry\@\@QEAAXAEBVBlockState\@\@\@Z
     */
    MCAPI void registerBlockState(class BlockState const&);
    /**
     * @symbol ?unregisterBlockStates\@BlockStateRegistry\@\@QEAAXXZ
     */
    MCAPI void unregisterBlockStates();
    /**
     * @symbol ?get\@BlockStateRegistry\@\@SAAEAV1\@XZ
     */
    MCAPI static class BlockStateRegistry& get();
};
