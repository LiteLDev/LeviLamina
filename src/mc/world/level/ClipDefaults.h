#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockSource;
class Block;

namespace ClipDefaults {
// thunks
// NOLINTBEGIN
MCAPI std::function<bool(class BlockSource const&, class Block const&, bool)> const& CHECK_ALL_PICKABLE_BLOCKS();
// NOLINTEND

}; // namespace ClipDefaults
