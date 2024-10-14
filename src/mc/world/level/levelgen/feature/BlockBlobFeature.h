#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BlockBlobFeature : public ::Feature {
public:
    // prevent constructor by default
    BlockBlobFeature& operator=(BlockBlobFeature const&);
    BlockBlobFeature(BlockBlobFeature const&);
    BlockBlobFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockBlobFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI BlockBlobFeature(class Block const& block, int radius);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
