#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class NetherSpringFeature : public ::Feature {
public:
    // prevent constructor by default
    NetherSpringFeature& operator=(NetherSpringFeature const&);
    NetherSpringFeature(NetherSpringFeature const&);
    NetherSpringFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetherSpringFeature();

    // vIndex: 3
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    MCAPI NetherSpringFeature(class Block const&, bool);

    // NOLINTEND
};
