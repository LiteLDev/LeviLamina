#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/block_serialization_utils/NBTState.h"

// auto generated forward declare list
// clang-format off
namespace BlockSerializationUtils { struct NbtToBlockCache; }
class CompoundTag;
// clang-format on

namespace BlockSerializationUtils {
// NOLINTBEGIN
MCAPI void clearBlockReplaceDataMap();

MCAPI void clearNBTToBlockCache();

MCAPI class Block const& getBlockFromNBT(
    class CompoundTag const&                                        tag,
    class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry> unknownBlockRegistry
);

MCAPI void initBlockReplaceDataMap();

MCAPI std::pair<::BlockSerializationUtils::NBTState, class Block const*>
      tryGetBlockFromNBT(class CompoundTag const&, struct BlockSerializationUtils::NbtToBlockCache* = nullptr);
// NOLINTEND

// thunks
// NOLINTBEGIN
MCAPI std::unordered_map<class HashedString, std::function<void(int, class CompoundTag&)>>& BLOCK_REPLACE_DATA_MAP();
// NOLINTEND

}; // namespace BlockSerializationUtils
