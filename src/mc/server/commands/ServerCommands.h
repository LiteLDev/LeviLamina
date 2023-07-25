#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerCommands {
/**
 * @symbol ?setupCommonEnums\@ServerCommands\@\@YAXAEAVCommandRegistry\@\@\@Z
 */
MCAPI void setupCommonEnums(class CommandRegistry&);
/**
 * @symbol
 * ?setupStandardServer\@ServerCommands\@\@YAXAEAVMinecraft\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1PEAVPermissionsFile\@\@\@Z
 */
MCAPI void setupStandardServer(class Minecraft&, std::string const&, std::string const&, class PermissionsFile*);

}; // namespace ServerCommands
