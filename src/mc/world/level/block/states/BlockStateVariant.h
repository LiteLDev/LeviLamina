#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class BlockStateVariant {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATEVARIANT
public:
    BlockStateVariant& operator=(BlockStateVariant const&) = delete;
    BlockStateVariant(BlockStateVariant const&)            = delete;
    BlockStateVariant()                                    = delete;
#endif

public:
};
