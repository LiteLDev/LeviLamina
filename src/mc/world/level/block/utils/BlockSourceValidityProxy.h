#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/IBlockSourceValidityProxy.h"

class BlockSourceValidityProxy : public ::IBlockSourceValidityProxy {
public:
    // prevent constructor by default
    BlockSourceValidityProxy& operator=(BlockSourceValidityProxy const&);
    BlockSourceValidityProxy(BlockSourceValidityProxy const&);
    BlockSourceValidityProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockSourceValidityProxy@@UEAA@XZ
    virtual ~BlockSourceValidityProxy() = default;

    // vIndex: 1, symbol: ?updateDimensionBlockSourceTick@BlockSourceValidityProxy@@UEAAXAEAVDimension@@@Z
    virtual void updateDimensionBlockSourceTick(class Dimension&);

    // vIndex: 2, symbol: ?updateBlockSourceTick@BlockSourceValidityProxy@@UEAAXAEAVPlayer@@@Z
    virtual void updateBlockSourceTick(class Player&);

    // NOLINTEND
};
