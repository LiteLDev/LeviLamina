#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct FlowerBedArchetype {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                 mHasStems;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mVisualHeight;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
