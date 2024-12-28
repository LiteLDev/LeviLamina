#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptDebuggerSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk55588d;
    ::ll::UntypedStorage<1, 1>  mUnk335c55;
    ::ll::UntypedStorage<4, 4>  mUnk55c4bb;
    ::ll::UntypedStorage<4, 4>  mUnk1b1aa6;
    ::ll::UntypedStorage<1, 1>  mUnk23f6f7;
    ::ll::UntypedStorage<8, 40> mUnkef7e1e;
    ::ll::UntypedStorage<4, 8>  mUnked17f1;
    ::ll::UntypedStorage<8, 40> mUnk3fdb4c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerSettings& operator=(ScriptDebuggerSettings const&);
    ScriptDebuggerSettings(ScriptDebuggerSettings const&);
    ScriptDebuggerSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptDebuggerSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
