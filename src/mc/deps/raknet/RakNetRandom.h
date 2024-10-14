#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakNetRandom {
public:
    // prevent constructor by default
    RakNetRandom& operator=(RakNetRandom const&);
    RakNetRandom(RakNetRandom const&);

public:
    // NOLINTBEGIN
    MCAPI RakNetRandom();

    MCAPI void SeedMT(uint seed);

    MCAPI ~RakNetRandom();

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

}; // namespace RakNet
