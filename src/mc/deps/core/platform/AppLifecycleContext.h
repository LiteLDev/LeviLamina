#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AppLifecycleContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk47460f;
    ::ll::UntypedStorage<1, 1> mUnke4ccab;
    ::ll::UntypedStorage<1, 1> mUnkae0bd0;
    ::ll::UntypedStorage<1, 1> mUnk1c34d5;
    // NOLINTEND

public:
    // prevent constructor by default
    AppLifecycleContext& operator=(AppLifecycleContext const&);
    AppLifecycleContext(AppLifecycleContext const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AppLifecycleContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND
};
