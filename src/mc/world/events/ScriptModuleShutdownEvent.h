#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptModuleShutdownEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk375d1d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptModuleShutdownEvent& operator=(ScriptModuleShutdownEvent const&);
    ScriptModuleShutdownEvent(ScriptModuleShutdownEvent const&);
    ScriptModuleShutdownEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptModuleShutdownEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
