/**
 * @file  MC/ItemTransactionLogger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ItemTransactionLogger.
 *
 */
namespace ItemTransactionLogger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   -1314310987
     * @symbol ?initializeLogger@ItemTransactionLogger@@YAX_N@Z
     */
    MCAPI void initializeLogger(bool);
    /**
     * @hash   984341010
     * @symbol ?log@ItemTransactionLogger@@YAXAEBVInventoryAction@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void log(class InventoryAction const &, std::string);
    /**
     * @hash   -400885646
     * @symbol ?log@ItemTransactionLogger@@YAXAEBVInventoryTransactionPacket@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void log(class InventoryTransactionPacket const &, std::string);
    /**
     * @hash   -1011674286
     * @symbol ?log@ItemTransactionLogger@@YAXAEBVItemStack@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void log(class ItemStack const &, std::string);
    /**
     * @hash   -456676814
     * @symbol ?log@ItemTransactionLogger@@YAXAEBVItemStackResponsePacket@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void log(class ItemStackResponsePacket const &, std::string);
    /**
     * @hash   1172416935
     * @symbol ?log@ItemTransactionLogger@@YAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void log(std::string);

};