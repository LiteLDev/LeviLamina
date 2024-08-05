#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
// clang-format on

namespace OperationNodeFilters {

struct RiverInit {
public:
    // prevent constructor by default
    RiverInit& operator=(RiverInit const&);
    RiverInit(RiverInit const&);
    RiverInit();

public:
    // NOLINTBEGIN
    MCAPI explicit RiverInit(class BiomeRegistry const& biomeRegistry);

    // NOLINTEND
};

}; // namespace OperationNodeFilters
