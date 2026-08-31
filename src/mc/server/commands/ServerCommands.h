#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Minecraft;
class PermissionsFile;
// clang-format on

namespace ServerCommands {
// functions
// NOLINTBEGIN
MCAPI void setupStandardServer(
    ::Minecraft&         server,
    ::std::string const& networkCommands,
    ::std::string const& networkTestCommands,
    ::PermissionsFile*   permissionsFile
);
// NOLINTEND

} // namespace ServerCommands
