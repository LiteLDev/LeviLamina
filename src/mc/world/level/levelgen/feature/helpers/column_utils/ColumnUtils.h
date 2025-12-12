#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
namespace ColumnUtils { struct ColumnRange; }
// clang-format on

namespace ColumnUtils {
// functions
// NOLINTBEGIN
MCNAPI ::std::optional<::ColumnUtils::ColumnRange> scanColumn(
    ::BlockPos const&                        pos,
    int                                      searchRange,
    ::std::function<bool(::BlockPos const&)> insideColumnPredicate,
    ::std::function<bool(::BlockPos const&)> validEdgePredicate
);

MCNAPI ::std::optional<::ColumnUtils::ColumnRange> scanColumnWithinPosBiome(
    ::IBlockWorldGenAPI&                     target,
    ::BlockPos const&                        pos,
    int                                      searchRange,
    ::std::function<bool(::BlockPos const&)> insideColumnPredicate,
    ::std::function<bool(::BlockPos const&)> validEdgePredicate
);
// NOLINTEND

} // namespace ColumnUtils
