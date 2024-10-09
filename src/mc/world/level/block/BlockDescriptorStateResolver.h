#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"

namespace BlockDescriptorStateResolver {
// NOLINTBEGIN
MCAPI bool helpResolveBlockStateValue(
    class BlockState const&              state,
    struct BlockDescriptor::State const& stateProxy,
    int&                                 blockStateValue
);
// NOLINTEND

}; // namespace BlockDescriptorStateResolver
