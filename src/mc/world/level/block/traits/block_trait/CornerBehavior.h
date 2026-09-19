#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/traits/block_trait/UpsideDown.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockDescriptor;
namespace BlockTrait { class IConnectionUpdateCallback; }
// clang-format on

namespace BlockTrait::CornerBehavior {
// functions
// NOLINTBEGIN
MCAPI ::Direction::Type getDirection(::Block const& block);

MCAPI ::BlockTrait::CornerBehavior::UpsideDown getIsUpsideDown(::Block const& block);

MCAPI ::std::unique_ptr<::BlockTrait::IConnectionUpdateCallback>
makeCornerConnectionCallback(::std::function<::std::vector<::BlockDescriptor>()> blocksToCornerWithFactory);
// NOLINTEND

} // namespace BlockTrait::CornerBehavior
