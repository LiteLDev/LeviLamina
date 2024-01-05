#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PermissionsFile;
class Minecraft;
class CommandRegistry;

namespace ServerCommands {
// NOLINTBEGIN
// symbol: ?setupCommonEnums@ServerCommands@@YAXAEAVCommandRegistry@@@Z
MCAPI void setupCommonEnums(class CommandRegistry& registry);

// symbol:
// ?setupStandardServer@ServerCommands@@YAXAEAVMinecraft@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1PEAVPermissionsFile@@@Z
MCAPI void setupStandardServer(
    class Minecraft&       server,
    std::string const&     networkCommands,
    std::string const&     networkTestCommands,
    class PermissionsFile* permissionsFile
);
// NOLINTEND

}; // namespace ServerCommands
