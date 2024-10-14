#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
// clang-format on

namespace OperationNodeFilters {

class Shore {
public:
    // prevent constructor by default
    Shore& operator=(Shore const&);
    Shore(Shore const&);
    Shore();

public:
    // NOLINTBEGIN
    MCAPI Shore(class BiomeRegistry const& registry, class Biome const& defaultShore);

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
