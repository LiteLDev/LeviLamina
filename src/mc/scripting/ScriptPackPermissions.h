#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptPackPermissions {
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
