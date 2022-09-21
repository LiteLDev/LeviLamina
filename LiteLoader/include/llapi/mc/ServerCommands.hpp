/**
 * @file  MC/ServerCommands.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ServerCommands.
 *
 */
namespace ServerCommands {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   1803448847
     * @symbol ?setupCommonEnums@ServerCommands@@YAXAEAVCommandRegistry@@@Z
     */
    MCAPI void setupCommonEnums(class CommandRegistry &);
    /**
     * @hash   -1500158947
     * @symbol ?setupStandardServer@ServerCommands@@YAXAEAVMinecraft@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1PEAVPermissionsFile@@@Z
     */
    MCAPI void setupStandardServer(class Minecraft &, std::string const &, std::string const &, class PermissionsFile *);

};