#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ColumnUtils { struct ColumnRange; }
// clang-format on

namespace ColumnUtils {
// NOLINTBEGIN
MCAPI std::optional<struct ColumnUtils::ColumnRange> scanColumn(
    class BlockPos const&                      pos,
    int                                        searchRange,
    std::function<bool(class BlockPos const&)> insideColumnPredicate,
    std::function<bool(class BlockPos const&)> validEdgePredicate
);

MCAPI std::optional<struct ColumnUtils::ColumnRange> scanColumnWithinPosBiome(
    class IBlockWorldGenAPI&                   target,
    class BlockPos const&                      pos,
    int                                        searchRange,
    std::function<bool(class BlockPos const&)> insideColumnPredicate,
    std::function<bool(class BlockPos const&)> validEdgePredicate
);
// NOLINTEND

}; // namespace ColumnUtils
