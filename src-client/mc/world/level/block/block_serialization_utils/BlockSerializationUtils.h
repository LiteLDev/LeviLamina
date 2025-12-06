#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_serialization_utils/NBTState.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
class HashedString;
namespace BlockSerializationUtils { struct NbtToBlockCache; }
// clang-format on

namespace BlockSerializationUtils {
// functions
// NOLINTBEGIN
MCAPI void initBlockReplaceDataMap();

MCAPI ::std::pair<::BlockSerializationUtils::NBTState, ::Block const*>
tryGetBlockFromNBT(::CompoundTag const& tag, ::BlockSerializationUtils::NbtToBlockCache* localCache);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::unordered_map<::HashedString, ::std::function<void(int, ::CompoundTag&)>>& BLOCK_REPLACE_DATA_MAP();
// NOLINTEND

} // namespace BlockSerializationUtils
