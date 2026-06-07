#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CauldronBlockActor;
class MovingBlockActor;
namespace BlockTessellatorCustomExtraData { class CauldronData; }
namespace BlockTessellatorCustomExtraData { class Map; }
// clang-format on

namespace BlockTessellatorCustomExtraData {
// functions
// NOLINTBEGIN
MCAPI ::BlockTessellatorCustomExtraData::Map
extract(::BlockSource& region, ::BlockPos const& min, ::BlockPos const& max);

MCAPI void extractCauldronData(
    ::std::unordered_map<::BlockPos, ::BlockTessellatorCustomExtraData::CauldronData>& map,
    ::BlockSource&                                                                     region,
    ::CauldronBlockActor&                                                              cauldronEntity,
    ::MovingBlockActor*                                                                movingEntity
);
// NOLINTEND

} // namespace BlockTessellatorCustomExtraData
