#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptModuleStartupEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk82839c;
    ::ll::UntypedStorage<8, 8>  mUnk37aca8;
    ::ll::UntypedStorage<8, 24> mUnkd54ccd;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptModuleStartupEvent& operator=(ScriptModuleStartupEvent const&);
    ScriptModuleStartupEvent(ScriptModuleStartupEvent const&);
    ScriptModuleStartupEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptModuleStartupEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
