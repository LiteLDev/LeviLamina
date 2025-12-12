#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

class HugeMushroomBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockType& init() /*override*/;

    virtual ~HugeMushroomBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockType& $init();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
