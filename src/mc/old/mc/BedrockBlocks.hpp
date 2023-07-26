/**
 * @file  BedrockBlocks.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace BedrockBlocks.
 *
 */
namespace BedrockBlocks {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?assignBlocks\@BedrockBlocks\@\@YAXXZ
     */
    MCAPI void assignBlocks();
    /**
     * @symbol  ?mAir\@BedrockBlocks\@\@3PEBVBlock\@\@EB
     */
    MCAPI extern class Block const * mAir;
    /**
     * @symbol  ?mClientRequestPlaceholderBlock\@BedrockBlocks\@\@3PEBVBlock\@\@EB
     */
    MCAPI extern class Block const * mClientRequestPlaceholderBlock;
    /**
     * @symbol  ?mUnknown\@BedrockBlocks\@\@3PEBVBlock\@\@EB
     */
    MCAPI extern class Block const * mUnknown;
    /**
     * @symbol  ?unassignBlocks\@BedrockBlocks\@\@YAXXZ
     */
    MCAPI void unassignBlocks();

};