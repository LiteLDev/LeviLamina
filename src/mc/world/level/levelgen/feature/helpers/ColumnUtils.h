#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ColumnUtils { struct ColumnRange; }
// clang-format on

namespace ColumnUtils {
// NOLINTBEGIN
MCAPI std::optional<struct ColumnUtils::ColumnRange>
scanColumn(class BlockPos const& pos, int searchRange, std::function<bool(class BlockPos const&)>, std::function<bool(class BlockPos const&)>);

MCAPI std::optional<struct ColumnUtils::ColumnRange>
scanColumnWithinPosBiome(class IBlockWorldGenAPI& target, class BlockPos const& pos, int searchRange, std::function<bool(class BlockPos const&)>, std::function<bool(class BlockPos const&)>);
// NOLINTEND

}; // namespace ColumnUtils
