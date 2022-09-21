/**
 * @file  MC/BedrockBlocks.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   371600150
     * @symbol ?assignBlocks@BedrockBlocks@@YAXXZ
     */
    MCAPI void assignBlocks();
    /**
     * @hash   490781668
     * @symbol ?mAir@BedrockBlocks@@3PEBVBlock@@EB
     */
    MCAPI extern class Block const * mAir;
    /**
     * @hash   -482102740
     * @symbol ?mClientRequestPlaceholderBlock@BedrockBlocks@@3PEBVBlock@@EB
     */
    MCAPI extern class Block const * mClientRequestPlaceholderBlock;
    /**
     * @hash   -1414434956
     * @symbol ?mUnknown@BedrockBlocks@@3PEBVBlock@@EB
     */
    MCAPI extern class Block const * mUnknown;
    /**
     * @hash   1859031224
     * @symbol ?unassignBlocks@BedrockBlocks@@YAXXZ
     */
    MCAPI void unassignBlocks();

};