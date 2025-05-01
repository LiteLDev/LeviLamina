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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void updateDimensionBlockSourceTick(::Dimension& dimension) /*override*/;

    // vIndex: 2
    virtual void updateBlockSourceTick(::Player& player) /*override*/;

    // vIndex: 0
    virtual ~BlockSourceValidityProxy() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $updateDimensionBlockSourceTick(::Dimension& dimension);

    MCNAPI void $updateBlockSourceTick(::Player& player);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
