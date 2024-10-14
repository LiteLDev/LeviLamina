#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/operation_node_details/NeighborhoodReader.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

namespace OperationNodeFilters {

class PromoteCenter {
public:
    // prevent constructor by default
    PromoteCenter& operator=(PromoteCenter const&);
    PromoteCenter(PromoteCenter const&);
    PromoteCenter();

public:
    // NOLINTBEGIN
    MCAPI PromoteCenter(class Biome const& from, class Biome const& to);

    MCAPI class Biome const*
    operator()(struct OperationNodeDetails::NeighborhoodReader<class Biome const*, 1, 1>& reader) const;

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
