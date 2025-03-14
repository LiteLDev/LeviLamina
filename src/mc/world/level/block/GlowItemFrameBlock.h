#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ItemFrameBlock.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

class GlowItemFrameBlock : public ::ItemFrameBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 150
    virtual ::HashedString getSpawnedItemName() const /*override*/;

    // vIndex: 0
    virtual ~GlowItemFrameBlock() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::HashedString $getSpawnedItemName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
