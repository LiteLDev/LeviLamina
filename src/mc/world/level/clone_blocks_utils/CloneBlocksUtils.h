#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/clone_blocks_utils/CloneMode.h"
#include "mc/world/level/clone_blocks_utils/MaskMode.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace CloneBlocksUtils { struct CloneBlocksResult; }
namespace CloneBlocksUtils { struct FilterBlockInfo; }
// clang-format on

namespace CloneBlocksUtils {
// functions
// NOLINTBEGIN
MCNAPI ::CloneBlocksUtils::CloneBlocksResult cloneBlocks(
    ::BlockPos const&                                                beginLocation,
    ::BlockPos const&                                                endLocation,
    ::BlockPos const&                                                destination,
    ::CloneBlocksUtils::MaskMode                                     maskMode,
    ::CloneBlocksUtils::CloneMode                                    cloneMode,
    ::std::optional<::CloneBlocksUtils::FilterBlockInfo>             filterBlockInfo,
    ::std::optional<int>                                             commandVersion,
    ::BlockSource&                                                   region,
    ::std::function<bool(::BlockPos const&, ::BlockPos const&, int)> checkArea
);
// NOLINTEND

} // namespace CloneBlocksUtils
