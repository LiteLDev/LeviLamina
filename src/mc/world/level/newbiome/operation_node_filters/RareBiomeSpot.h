#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

namespace OperationNodeFilters {

class RareBiomeSpot {
public:
    // prevent constructor by default
    RareBiomeSpot& operator=(RareBiomeSpot const&);
    RareBiomeSpot(RareBiomeSpot const&);
    RareBiomeSpot();

public:
    // NOLINTBEGIN
    MCAPI RareBiomeSpot(uint oneInXChance, class Biome const& fromBiome, class Biome const& toBiome);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace OperationNodeFilters
