#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptDebuggerEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd362b7;
    ::ll::UntypedStorage<8, 32> mUnkbf220a;
    ::ll::UntypedStorage<8, 24> mUnk6b7901;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerEvent(ScriptDebuggerEvent const&);
    ScriptDebuggerEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptDebuggerEvent& operator=(::ScriptDebuggerEvent const&);

    MCAPI ::ScriptDebuggerEvent& operator=(::ScriptDebuggerEvent&&);

    MCAPI ~ScriptDebuggerEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
