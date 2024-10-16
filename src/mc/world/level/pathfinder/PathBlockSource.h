#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/pathfinder/IPathBlockSource.h"

class PathBlockSource : public ::IPathBlockSource {
public:
    // prevent constructor by default
    PathBlockSource& operator=(PathBlockSource const&);
    PathBlockSource(PathBlockSource const&);
    PathBlockSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PathBlockSource();

    // vIndex: 1
    virtual bool isInWater() const;

    // vIndex: 2
    virtual bool isInLava() const;

    // vIndex: 3
    virtual bool isWaterBlock(class BlockPos const& blockPos) const;

    // vIndex: 4
    virtual bool isLavaBlock(class BlockPos const& blockPos) const;

    // vIndex: 5
    virtual bool isSolidBlock(class BlockPos const& blockPos) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI bool isInLava$() const;

    MCAPI bool isInWater$() const;

    MCAPI bool isLavaBlock$(class BlockPos const& blockPos) const;

    MCAPI bool isSolidBlock$(class BlockPos const& blockPos) const;

    MCAPI bool isWaterBlock$(class BlockPos const& blockPos) const;

    // NOLINTEND
};
