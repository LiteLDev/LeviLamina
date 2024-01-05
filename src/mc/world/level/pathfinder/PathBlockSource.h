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
    // vIndex: 0, symbol: ??1PathBlockSource@@UEAA@XZ
    virtual ~PathBlockSource();

    // vIndex: 1, symbol: ?isInWater@PathBlockSource@@UEBA_NXZ
    virtual bool isInWater() const;

    // vIndex: 2, symbol: ?isInLava@PathBlockSource@@UEBA_NXZ
    virtual bool isInLava() const;

    // vIndex: 3, symbol: ?isWaterBlock@PathBlockSource@@UEBA_NAEBVBlockPos@@@Z
    virtual bool isWaterBlock(class BlockPos const& blockPos) const;

    // vIndex: 4, symbol: ?isLavaBlock@PathBlockSource@@UEBA_NAEBVBlockPos@@@Z
    virtual bool isLavaBlock(class BlockPos const& blockPos) const;

    // vIndex: 5, symbol: ?isSolidBlock@PathBlockSource@@UEBA_NAEBVBlockPos@@@Z
    virtual bool isSolidBlock(class BlockPos const& blockPos) const;

    // NOLINTEND
};
