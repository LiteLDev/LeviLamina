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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
