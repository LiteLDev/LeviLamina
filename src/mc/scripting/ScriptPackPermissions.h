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

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?sWildCardModuleName@ScriptPackPermissions@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sWildCardModuleName;

    // NOLINTEND
};
