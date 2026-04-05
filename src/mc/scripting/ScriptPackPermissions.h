#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ScriptPackPermissions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unordered_map<::std::string, ::Json::Value>>>
                                                                        mModulePermissions;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>             mAllowedModules;
    ::ll::TypedStorage<1, 2, ::std::optional<::CommandPermissionLevel>> mCommandsPermissionLevel;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ScriptPackPermissions& operator=(ScriptPackPermissions const&);
    ScriptPackPermissions(ScriptPackPermissions const&);
    ScriptPackPermissions();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ::ScriptPackPermissions& operator=(::ScriptPackPermissions&&);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& sWildCardModuleName();
    // NOLINTEND
};
