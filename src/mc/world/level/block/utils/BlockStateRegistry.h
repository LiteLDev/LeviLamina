#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockStateRegistry {
public:
    // prevent constructor by default
    BlockStateRegistry& operator=(BlockStateRegistry const&);
    BlockStateRegistry(BlockStateRegistry const&);
    BlockStateRegistry();

public:
    // NOLINTBEGIN
    // symbol: ?get@BlockStateRegistry@@SAAEAV1@XZ
    MCAPI static class BlockStateRegistry& get();

    // NOLINTEND
};
