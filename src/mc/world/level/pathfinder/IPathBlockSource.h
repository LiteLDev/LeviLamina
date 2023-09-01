#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPathBlockSource {
public:
    // prevent constructor by default
    IPathBlockSource& operator=(IPathBlockSource const&) = delete;
    IPathBlockSource(IPathBlockSource const&)            = delete;
    IPathBlockSource()                                   = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isInWater@PathBlockSource@@UEBA_NXZ
    virtual bool isInWater() const = 0;

    // vIndex: 2, symbol: ?isInLava@PathBlockSource@@UEBA_NXZ
    virtual bool isInLava() const = 0;

    // vIndex: 3, symbol: ?isWaterBlock@PathBlockSource@@UEBA_NAEBVBlockPos@@@Z
    virtual bool isWaterBlock(class BlockPos const&) const = 0;

    // vIndex: 4, symbol: ?isLavaBlock@PathBlockSource@@UEBA_NAEBVBlockPos@@@Z
    virtual bool isLavaBlock(class BlockPos const&) const = 0;

    // vIndex: 5, symbol: ?isSolidBlock@PathBlockSource@@UEBA_NAEBVBlockPos@@@Z
    virtual bool isSolidBlock(class BlockPos const&) const = 0;

    // NOLINTEND
};
