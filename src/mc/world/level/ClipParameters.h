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

    MCAPI ClipParameters(
        class Vec3 const&                                                              a,
        class Vec3 const&                                                              b,
        std::function<bool(class BlockSource const&, class Block const&, bool)> const& shouldCheckBlock
    );

    MCAPI ~ClipParameters();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        class Vec3 const&                                                              a,
        class Vec3 const&                                                              b,
        std::function<bool(class BlockSource const&, class Block const&, bool)> const& shouldCheckBlock
    );

    MCAPI void* ctor$(class Vec3 const& a, class Vec3 const& b);

    MCAPI void dtor$();

    // NOLINTEND
};
