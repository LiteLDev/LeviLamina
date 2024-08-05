#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/utils/NBTState.h"

// auto generated forward declare list
// clang-format off
namespace BlockSerializationUtils { struct NbtToBlockCache; }
// clang-format on

namespace BlockSerializationUtils {
// NOLINTBEGIN
MCAPI extern std::unordered_map<class HashedString, std::function<void(int, class CompoundTag&)>>
    BLOCK_REPLACE_DATA_MAP;

MCAPI void clearBlockReplaceDataMap();

MCAPI void clearNBTToBlockCache();

MCAPI class Block const&
getBlockFromNBT(class CompoundTag const&, class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry>);

MCAPI void initBlockReplaceDataMap();

MCAPI std::pair<::BlockSerializationUtils::NBTState, class Block const*>
      tryGetBlockFromNBT(class CompoundTag const& tag, struct BlockSerializationUtils::NbtToBlockCache* localCache);
// NOLINTEND

}; // namespace BlockSerializationUtils
