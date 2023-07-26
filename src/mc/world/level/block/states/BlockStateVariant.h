#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class BlockStateVariant {

public:
    // prevent constructor by default
    BlockStateVariant& operator=(BlockStateVariant const&) = delete;
    BlockStateVariant(BlockStateVariant const&)            = delete;
    BlockStateVariant()                                    = delete;
};
