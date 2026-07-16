#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockType;
// clang-format on

namespace br::worldgen::processors::JigsawReplacementHelpers {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::Block const*& AIR();
#endif

#ifdef LL_PLAT_S
MCAPI ::Block const*& AIR();
#endif

#ifdef LL_PLAT_C
MCAPI ::BlockType const*& JIGSAW_BLOCK();
#endif

#ifdef LL_PLAT_S
MCAPI ::BlockType const*& JIGSAW_BLOCK();
#endif

#ifdef LL_PLAT_C
MCAPI ::BlockType const*& STRUCTURE_VOID();
#endif

#ifdef LL_PLAT_S
MCAPI ::BlockType const*& STRUCTURE_VOID();
#endif
// NOLINTEND

} // namespace br::worldgen::processors::JigsawReplacementHelpers
