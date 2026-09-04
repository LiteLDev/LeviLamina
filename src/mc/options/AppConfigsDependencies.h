#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AppConfigsDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk2ff020;
    ::ll::UntypedStorage<8, 64> mUnk39b0c5;
    ::ll::UntypedStorage<8, 64> mUnk2b5cbe;
    // NOLINTEND

public:
    // prevent constructor by default
    AppConfigsDependencies& operator=(AppConfigsDependencies const&);
    AppConfigsDependencies(AppConfigsDependencies const&);
    AppConfigsDependencies();
};
