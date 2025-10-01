#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SupportedFeatureUpgrader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc5ad82;
    ::ll::UntypedStorage<8, 24> mUnk297f96;
    // NOLINTEND

public:
    // prevent constructor by default
    SupportedFeatureUpgrader& operator=(SupportedFeatureUpgrader const&);
    SupportedFeatureUpgrader(SupportedFeatureUpgrader const&);
    SupportedFeatureUpgrader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SupportedFeatureUpgrader();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
