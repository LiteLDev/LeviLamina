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
    // vIndex: 0, symbol: __gen_??1IPathBlockSource@@UEAA@XZ
    virtual ~IPathBlockSource() = default;

    // vIndex: 1, symbol: ?isInWater@PathBlockSource@@UEBA_NXZ
    virtual bool isInWater() const = 0;

    // vIndex: 2, symbol: ?isInLava@PathBlockSource@@UEBA_NXZ
    virtual bool isInLava() const = 0;

    // vIndex: 3, symbol: ?isWaterBlock@PathBlockSource@@UEBA_NAEBVBlockPos@@@Z
    virtual bool isWaterBlock(class BlockPos const& blockPos) const = 0;

    // vIndex: 4, symbol: ?isLavaBlock@PathBlockSource@@UEBA_NAEBVBlockPos@@@Z
    virtual bool isLavaBlock(class BlockPos const& blockPos) const = 0;

    // vIndex: 5, symbol: ?isSolidBlock@PathBlockSource@@UEBA_NAEBVBlockPos@@@Z
    virtual bool isSolidBlock(class BlockPos const& blockPos) const = 0;

    // NOLINTEND
};
