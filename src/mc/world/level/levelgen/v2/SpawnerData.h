#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct SpawnerData {
public:
    // prevent constructor by default
    SpawnerData& operator=(SpawnerData const&);
    SpawnerData();

public:
    // NOLINTBEGIN
    MCAPI SpawnerData(struct br::worldgen::SpawnerData const& other);

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

}; // namespace br::worldgen
