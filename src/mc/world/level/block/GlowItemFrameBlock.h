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
    virtual ::HashedString getSpawnedItemName() const /*override*/;

    virtual ~GlowItemFrameBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::HashedString $getSpawnedItemName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
