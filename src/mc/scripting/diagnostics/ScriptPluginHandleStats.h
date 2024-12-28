#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptPluginHandleStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc0c3a7;
    ::ll::UntypedStorage<1, 1>  mUnk1a8d10;
    ::ll::UntypedStorage<4, 4>  mUnk306f0b;
    ::ll::UntypedStorage<4, 4>  mUnk7d80f6;
    ::ll::UntypedStorage<4, 4>  mUnkf7b993;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginHandleStats(ScriptPluginHandleStats const&);
    ScriptPluginHandleStats();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptPluginHandleStats& operator=(::ScriptPluginHandleStats&&);

    MCAPI ::ScriptPluginHandleStats& operator=(::ScriptPluginHandleStats const&);

    MCAPI ~ScriptPluginHandleStats();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
