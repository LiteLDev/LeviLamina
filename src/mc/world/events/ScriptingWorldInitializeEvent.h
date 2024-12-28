#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptingWorldInitializeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc226b1;
    ::ll::UntypedStorage<8, 32> mUnk2034cd;
    ::ll::UntypedStorage<8, 32> mUnk2d8d3b;
    ::ll::UntypedStorage<8, 16> mUnkbf2dd8;
    ::ll::UntypedStorage<1, 1>  mUnk5c16da;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptingWorldInitializeEvent& operator=(ScriptingWorldInitializeEvent const&);
    ScriptingWorldInitializeEvent(ScriptingWorldInitializeEvent const&);
    ScriptingWorldInitializeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptingWorldInitializeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
