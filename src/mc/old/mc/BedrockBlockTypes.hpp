/**
 * @file  BedrockBlockTypes.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace BedrockBlockTypes.
 *
 */
namespace BedrockBlockTypes {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?mAir\@BedrockBlockTypes\@\@3V?$WeakPtr\@VBlockLegacy\@\@\@\@A
     */
    MCAPI extern class WeakPtr<class BlockLegacy> mAir;
    /**
     * @symbol  ?mClientRequestPlaceholderBlock\@BedrockBlockTypes\@\@3V?$WeakPtr\@VBlockLegacy\@\@\@\@A
     */
    MCAPI extern class WeakPtr<class BlockLegacy> mClientRequestPlaceholderBlock;
    /**
     * @symbol  ?mUnknown\@BedrockBlockTypes\@\@3V?$WeakPtr\@VBlockLegacy\@\@\@\@A
     */
    MCAPI extern class WeakPtr<class BlockLegacy> mUnknown;
    /**
     * @symbol  ?registerBlocks\@BedrockBlockTypes\@\@YAXXZ
     */
    MCAPI void registerBlocks();
    /**
     * @symbol  ?unregisterBlocks\@BedrockBlockTypes\@\@YAXXZ
     */
    MCAPI void unregisterBlocks();

};