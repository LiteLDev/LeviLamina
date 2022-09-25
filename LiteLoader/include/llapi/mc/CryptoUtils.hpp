/**
 * @file  CryptoUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace CryptoUtils.
 *
 */
namespace CryptoUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   -192664116
     * @symbol ?getDirectroyChecksum@CryptoUtils@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@@Z
     */
    MCAPI std::string getDirectroyChecksum(class Core::Path const &);
    /**
     * @hash   807171406
     * @symbol ?getFileChecksum@CryptoUtils@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@@Z
     */
    MCAPI std::string getFileChecksum(class Core::Path const &);

};