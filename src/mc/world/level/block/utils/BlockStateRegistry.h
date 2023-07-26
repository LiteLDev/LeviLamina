#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockStateRegistry {

public:
    // prevent constructor by default
    BlockStateRegistry& operator=(BlockStateRegistry const&) = delete;
    BlockStateRegistry(BlockStateRegistry const&)            = delete;
    BlockStateRegistry()                                     = delete;

public:
    /**
     * @symbol ?registerBlockState\@BlockStateRegistry\@\@QEAAXAEBVBlockState\@\@\@Z
     */
    MCAPI void registerBlockState(class BlockState const&); // NOLINT
    /**
     * @symbol ?unregisterBlockStates\@BlockStateRegistry\@\@QEAAXXZ
     */
    MCAPI void unregisterBlockStates(); // NOLINT
    /**
     * @symbol ?get\@BlockStateRegistry\@\@SAAEAV1\@XZ
     */
    MCAPI static class BlockStateRegistry& get(); // NOLINT
};
