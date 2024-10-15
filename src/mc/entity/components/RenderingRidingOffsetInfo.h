#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RenderingRidingOffsetInfo {
public:
    // prevent constructor by default
    RenderingRidingOffsetInfo& operator=(RenderingRidingOffsetInfo const&);
    RenderingRidingOffsetInfo(RenderingRidingOffsetInfo const&);
    RenderingRidingOffsetInfo();

public:
    // NOLINTBEGIN
    MCAPI RenderingRidingOffsetInfo(std::string const& baseLocator, std::string const& seatLocator);

    MCAPI ~RenderingRidingOffsetInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::string const& baseLocator, std::string const& seatLocator);

    MCAPI void dtor$();

    // NOLINTEND
};
