#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class EndGatewayFeature : public ::Feature {
public:
    // prevent constructor by default
    EndGatewayFeature& operator=(EndGatewayFeature const&);
    EndGatewayFeature(EndGatewayFeature const&);
    EndGatewayFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EndGatewayFeature();

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random&) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& origin, class Random&) const;

    // NOLINTEND
};
