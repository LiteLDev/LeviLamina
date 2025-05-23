#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleDebugUtilities {

struct ScriptPluginStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc1c67b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginStats& operator=(ScriptPluginStats const&);
    ScriptPluginStats(ScriptPluginStats const&);
    ScriptPluginStats();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptPluginStats();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
