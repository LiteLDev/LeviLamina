#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

class ReinforcedDeepslateBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canBeOriginalSurface(bool) const /*override*/;

    virtual ~ReinforcedDeepslateBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canBeOriginalSurface(bool) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
