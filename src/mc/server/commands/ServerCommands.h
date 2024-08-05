#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PermissionsFile;
class Minecraft;
class CommandRegistry;

namespace ServerCommands {
// NOLINTBEGIN
MCAPI void setupCommonEnums(class CommandRegistry& registry);

MCAPI void setupStandardServer(
    class Minecraft&       server,
    std::string const&     networkCommands,
    std::string const&     networkTestCommands,
    class PermissionsFile* permissionsFile
);
// NOLINTEND

}; // namespace ServerCommands
