/**
 * @file  ServerCommands.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?setupCommonEnums\@ServerCommands\@\@YAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI void setupCommonEnums(class CommandRegistry &);
    /**
     * @symbol  ?setupStandardServer\@ServerCommands\@\@YAXAEAVMinecraft\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1PEAVPermissionsFile\@\@\@Z
     */
    MCAPI void setupStandardServer(class Minecraft &, std::string const &, std::string const &, class PermissionsFile *);

};