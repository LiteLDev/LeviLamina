#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace BlockTessellatorCustomExtraData { class Map; }
// clang-format on

namespace BlockTessellatorCustomExtraData {
// functions
// NOLINTBEGIN
MCAPI ::BlockTessellatorCustomExtraData::Map
extract(::BlockSource& region, ::BlockPos const& min, ::BlockPos const& max);
// NOLINTEND

} // namespace BlockTessellatorCustomExtraData
