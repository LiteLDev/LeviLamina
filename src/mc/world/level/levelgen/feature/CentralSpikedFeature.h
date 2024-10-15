#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class CentralSpikedFeature : public ::Feature {
public:
    // prevent constructor by default
    CentralSpikedFeature& operator=(CentralSpikedFeature const&);
    CentralSpikedFeature(CentralSpikedFeature const&);
    CentralSpikedFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CentralSpikedFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI explicit CentralSpikedFeature(class Block const& block);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Block const& block);

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
