#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ColumnUtils { struct ColumnRange; }
// clang-format on

namespace ColumnUtils {
// NOLINTBEGIN
// symbol:
// ?scanColumn@ColumnUtils@@YA?AV?$optional@UColumnRange@ColumnUtils@@@std@@AEBVBlockPos@@HV?$function@$$A6A_NAEBVBlockPos@@@Z@3@1@Z
MCAPI std::optional<struct ColumnUtils::ColumnRange>
scanColumn(class BlockPos const& pos, int searchRange, std::function<bool(class BlockPos const&)>, std::function<bool(class BlockPos const&)>);

// symbol:
// ?scanColumnWithinPosBiome@ColumnUtils@@YA?AV?$optional@UColumnRange@ColumnUtils@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@HV?$function@$$A6A_NAEBVBlockPos@@@Z@3@2@Z
MCAPI std::optional<struct ColumnUtils::ColumnRange>
scanColumnWithinPosBiome(class IBlockWorldGenAPI& target, class BlockPos const& pos, int searchRange, std::function<bool(class BlockPos const&)>, std::function<bool(class BlockPos const&)>);
// NOLINTEND

}; // namespace ColumnUtils
