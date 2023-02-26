/**
 * @file  BlockSerializationUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "CompoundTag.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC namespace BlockSerializationUtils.
 *
 */
namespace BlockSerializationUtils {

#define AFTER_EXTRA
// Add Member There
struct NbtToBlockCache {
    NbtToBlockCache() = delete;
    NbtToBlockCache(NbtToBlockCache const&) = delete;
    NbtToBlockCache(NbtToBlockCache const&&) = delete;
};
enum class NBTState;

#undef AFTER_EXTRA
    /**
     * @symbol  ?BLOCK_REPLACE_DATA_MAP\@BlockSerializationUtils\@\@3V?$unordered_map\@VHashedString\@\@V?$function\@$$A6AXHAEAVCompoundTag\@\@\@Z\@std\@\@U?$hash\@VHashedString\@\@\@3\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$function\@$$A6AXHAEAVCompoundTag\@\@\@Z\@std\@\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI extern class std::unordered_map<class HashedString, class std::function<void (int, class CompoundTag &)>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::function<void (int, class CompoundTag &)>>>> BLOCK_REPLACE_DATA_MAP;
    /**
     * @symbol  ?clearBlockReplaceDataMap\@BlockSerializationUtils\@\@YAXXZ
     */
    MCAPI void clearBlockReplaceDataMap();
    /**
     * @symbol  ?clearNBTToBlockCache\@BlockSerializationUtils\@\@YAXXZ
     */
    MCAPI void clearNBTToBlockCache();
    /**
     * @symbol  ?initBlockReplaceDataMap\@BlockSerializationUtils\@\@YAXXZ
     */
    MCAPI void initBlockReplaceDataMap();
    /**
     * @symbol  ?tryGetBlockFromNBT\@BlockSerializationUtils\@\@YA?AU?$pair\@W4NBTState\@BlockSerializationUtils\@\@PEBVBlock\@\@\@std\@\@AEBVCompoundTag\@\@PEAUNbtToBlockCache\@1\@\@Z
     */
    MCAPI struct std::pair<enum class BlockSerializationUtils::NBTState, class Block const *> tryGetBlockFromNBT(class CompoundTag const &, struct BlockSerializationUtils::NbtToBlockCache *);

};