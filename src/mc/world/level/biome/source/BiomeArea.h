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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
