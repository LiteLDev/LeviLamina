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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isModuleAllowed(::std::string const& moduleName) const;

#ifdef LL_PLAT_C
    MCNAPI void setAllModulesAllowed();
#endif

    MCNAPI ~ScriptPackPermissions();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& sWildCardModuleName();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
