#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptPluginStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd6b514;
    ::ll::UntypedStorage<8, 24> mUnke29972;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginStats(ScriptPluginStats const&);
    ScriptPluginStats();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptPluginStats& operator=(::ScriptPluginStats&&);

    MCAPI ::ScriptPluginStats& operator=(::ScriptPluginStats const&);

    MCAPI ~ScriptPluginStats();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
