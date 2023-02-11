/**
 * @file  BedrockBlockTypes.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -472217336
     * @symbol  ?mAir\@BedrockBlockTypes\@\@3V?$WeakPtr\@VBlockLegacy\@\@\@\@A
     */
    MCAPI extern class WeakPtr<class BlockLegacy> mAir;
    /**
     * @hash   810753976
     * @symbol  ?mClientRequestPlaceholderBlock\@BedrockBlockTypes\@\@3V?$WeakPtr\@VBlockLegacy\@\@\@\@A
     */
    MCAPI extern class WeakPtr<class BlockLegacy> mClientRequestPlaceholderBlock;
    /**
     * @hash   -1316835176
     * @symbol  ?mUnknown\@BedrockBlockTypes\@\@3V?$WeakPtr\@VBlockLegacy\@\@\@\@A
     */
    MCAPI extern class WeakPtr<class BlockLegacy> mUnknown;
    /**
     * @hash   -32963074
     * @symbol  ?registerBlocks\@BedrockBlockTypes\@\@YAXXZ
     */
    MCAPI void registerBlocks();
    /**
     * @hash   -670319856
     * @symbol  ?unregisterBlocks\@BedrockBlockTypes\@\@YAXXZ
     */
    MCAPI void unregisterBlocks();

};