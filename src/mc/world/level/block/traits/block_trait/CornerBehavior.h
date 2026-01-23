#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/traits/block_trait/UpsideDown.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockDescriptor;
// clang-format on

namespace BlockTrait::CornerBehavior {
// functions
// NOLINTBEGIN
MCAPI bool doesCornerBehavior(::Block const& block, ::gsl::span<::BlockDescriptor const> blocksToCornerWith);

MCAPI ::Direction::Type getDirection(::Block const& block);

MCAPI ::BlockTrait::CornerBehavior::UpsideDown getIsUpsideDown(::Block const& block);
// NOLINTEND

} // namespace BlockTrait::CornerBehavior
