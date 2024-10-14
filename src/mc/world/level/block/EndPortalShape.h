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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
