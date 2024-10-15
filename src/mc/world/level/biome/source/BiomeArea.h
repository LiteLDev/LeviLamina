#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BiomeArea {
public:
    // prevent constructor by default
    BiomeArea& operator=(BiomeArea const&);
    BiomeArea(BiomeArea const&);
    BiomeArea();

public:
    // NOLINTBEGIN
    MCAPI BiomeArea(class BoundingBox const& area, uint scale);

    MCAPI bool containsAny(gsl::span<uint64 const>);

    MCAPI ~BiomeArea();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class BoundingBox const& area, uint scale);

    MCAPI void dtor$();

    // NOLINTEND
};
