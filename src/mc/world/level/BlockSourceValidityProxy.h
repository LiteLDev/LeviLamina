#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IBlockSourceValidityProxy.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Player;
// clang-format on

class BlockSourceValidityProxy : public ::IBlockSourceValidityProxy {
public:
    // prevent constructor by default
    BlockSourceValidityProxy& operator=(BlockSourceValidityProxy const&);
    BlockSourceValidityProxy(BlockSourceValidityProxy const&);
    BlockSourceValidityProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void updateDimensionBlockSourceTick(::Dimension& dimension) /*override*/;

    // vIndex: 2
    virtual void updateBlockSourceTick(::Player& player) /*override*/;

    // vIndex: 0
    virtual ~BlockSourceValidityProxy() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $updateDimensionBlockSourceTick(::Dimension& dimension);

    MCAPI void $updateBlockSourceTick(::Player& player);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
