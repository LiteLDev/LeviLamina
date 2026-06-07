#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockType;
// clang-format on

namespace Editor::ProjectUtils {
// functions
// NOLINTBEGIN
MCNAPI bool isAllowedBlock(::BlockType const& type);

#ifdef LL_PLAT_C
MCNAPI bool isTerrainBlock(::Block const& block);
#endif
// NOLINTEND

} // namespace Editor::ProjectUtils
