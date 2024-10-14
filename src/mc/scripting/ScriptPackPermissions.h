#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/Value.h"
#include "mc/server/commands/CommandPermissionLevel.h"

class ScriptPackPermissions {
public:
    std::unordered_map<std::string, std::unordered_map<std::string, Json::Value>> mModulePermissions;
    std::vector<std::string>                                                      mAllowedModules;
    std::optional<CommandPermissionLevel>                                         mCommandsPermissionLevel;

public:
    // prevent constructor by default
    ScriptPackPermissions& operator=(ScriptPackPermissions const&);
    ScriptPackPermissions(ScriptPackPermissions const&);
    ScriptPackPermissions();

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::string const& sWildCardModuleName();

    // NOLINTEND
};
