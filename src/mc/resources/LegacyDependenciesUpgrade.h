#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyDependenciesUpgrade {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk447607;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyDependenciesUpgrade& operator=(LegacyDependenciesUpgrade const&);
    LegacyDependenciesUpgrade(LegacyDependenciesUpgrade const&);
    LegacyDependenciesUpgrade();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LegacyDependenciesUpgrade();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
