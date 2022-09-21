/**
 * @file  MC/BedrockBlockTypes.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1375757224
     * @symbol ?mAir@BedrockBlockTypes@@3V?$WeakPtr@VBlockLegacy@@@@A
     */
    MCAPI extern class WeakPtr<class BlockLegacy> mAir;
    /**
     * @hash   -92785912
     * @symbol ?mClientRequestPlaceholderBlock@BedrockBlockTypes@@3V?$WeakPtr@VBlockLegacy@@@@A
     */
    MCAPI extern class WeakPtr<class BlockLegacy> mClientRequestPlaceholderBlock;
    /**
     * @hash   2074592232
     * @symbol ?mUnknown@BedrockBlockTypes@@3V?$WeakPtr@VBlockLegacy@@@@A
     */
    MCAPI extern class WeakPtr<class BlockLegacy> mUnknown;
    /**
     * @hash   -846368850
     * @symbol ?registerBlocks@BedrockBlockTypes@@YAXXZ
     */
    MCAPI void registerBlocks();
    /**
     * @hash   -1484063904
     * @symbol ?unregisterBlocks@BedrockBlockTypes@@YAXXZ
     */
    MCAPI void unregisterBlocks();

};