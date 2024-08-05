#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClipParameters {
public:
    // prevent constructor by default
    ClipParameters& operator=(ClipParameters const&);
    ClipParameters(ClipParameters const&);
    ClipParameters();

public:
    // NOLINTBEGIN
    MCAPI ClipParameters(class Vec3 const& a, class Vec3 const& b);

    MCAPI
    ClipParameters(class Vec3 const& a, class Vec3 const& b, std::function<bool(class BlockSource const&, class Block const&, bool)> const&);

    MCAPI ~ClipParameters();

    // NOLINTEND
};
