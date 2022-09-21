/**
 * @file  MC/VanillaBlockConversion.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace VanillaBlockConversion.
 *
 */
namespace VanillaBlockConversion {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   -1366924269
     * @symbol ?getBlockTypeFromLegacyId@VanillaBlockConversion@@YA?AV?$WeakPtr@VBlockLegacy@@@@I@Z
     */
    MCAPI class WeakPtr<class BlockLegacy> getBlockTypeFromLegacyId(unsigned int);
    /**
     * @hash   -1096497838
     * @symbol ?getBlockTypeLegacyIdFromName@VanillaBlockConversion@@YAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI int getBlockTypeLegacyIdFromName(std::string const &);
    /**
     * @hash   613392646
     * @symbol ?tryGetLegacyState@VanillaBlockConversion@@YAPEBVBlock@@II@Z
     */
    MCAPI class Block const * tryGetLegacyState(unsigned int, unsigned int);

};