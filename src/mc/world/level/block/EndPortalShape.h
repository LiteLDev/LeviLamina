#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EndPortalShape {
public:
    // prevent constructor by default
    EndPortalShape& operator=(EndPortalShape const&);
    EndPortalShape(EndPortalShape const&);
    EndPortalShape();

public:
    // NOLINTBEGIN
    MCAPI EndPortalShape(class BlockSource& region, class BlockPos pos);

    MCAPI class BlockPos getOrigin() const;

    MCAPI bool isValid(class BlockSource& region);

    MCAPI ~EndPortalShape();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class BlockSource& region, class BlockPos pos);

    MCAPI void dtor$();

    // NOLINTEND
};
