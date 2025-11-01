#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AppConfigsDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk621be9;
    ::ll::UntypedStorage<8, 64> mUnkb33602;
    ::ll::UntypedStorage<8, 64> mUnk2b5cbe;
    // NOLINTEND

public:
    // prevent constructor by default
    AppConfigsDependencies& operator=(AppConfigsDependencies const&);
    AppConfigsDependencies(AppConfigsDependencies const&);
    AppConfigsDependencies();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AppConfigsDependencies();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
