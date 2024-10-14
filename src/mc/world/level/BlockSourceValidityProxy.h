#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IBlockSourceValidityProxy.h"

class BlockSourceValidityProxy : public ::IBlockSourceValidityProxy {
public:
    // prevent constructor by default
    BlockSourceValidityProxy& operator=(BlockSourceValidityProxy const&);
    BlockSourceValidityProxy(BlockSourceValidityProxy const&);
    BlockSourceValidityProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockSourceValidityProxy() = default;

    // vIndex: 1
    virtual void updateDimensionBlockSourceTick(class Dimension& dimension);

    // vIndex: 2
    virtual void updateBlockSourceTick(class Player& player);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void updateBlockSourceTick$(class Player& player);

    MCAPI void updateDimensionBlockSourceTick$(class Dimension& dimension);

    // NOLINTEND
};
