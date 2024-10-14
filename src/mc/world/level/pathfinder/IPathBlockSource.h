#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPathBlockSource {
public:
    // prevent constructor by default
    IPathBlockSource& operator=(IPathBlockSource const&);
    IPathBlockSource(IPathBlockSource const&);
    IPathBlockSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPathBlockSource() = default;

    // vIndex: 1
    virtual bool isInWater() const = 0;

    // vIndex: 2
    virtual bool isInLava() const = 0;

    // vIndex: 3
    virtual bool isWaterBlock(class BlockPos const& blockPos) const = 0;

    // vIndex: 4
    virtual bool isLavaBlock(class BlockPos const& blockPos) const = 0;

    // vIndex: 5
    virtual bool isSolidBlock(class BlockPos const& blockPos) const = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
