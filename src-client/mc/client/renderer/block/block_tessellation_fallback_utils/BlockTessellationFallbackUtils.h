#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockType;
namespace BlockTessellationFallbackUtils { struct TessellationConfigInfo; }
// clang-format on

namespace BlockTessellationFallbackUtils {
// functions
// NOLINTBEGIN
MCAPI bool shouldFallbackToOldTessellation(
    ::BlockType const&                                              blockType,
    ::BlockTessellationFallbackUtils::TessellationConfigInfo const& configInfo
);
// NOLINTEND

} // namespace BlockTessellationFallbackUtils
