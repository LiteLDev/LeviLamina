#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/feature_loading/FeatureVersion.h"

class FeatureTypeVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8bb473;
    ::ll::UntypedStorage<1, 1>  mUnkbafaa0;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureTypeVersion& operator=(FeatureTypeVersion const&);
    FeatureTypeVersion(FeatureTypeVersion const&);
    FeatureTypeVersion();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FeatureTypeVersion(::FeatureLoading::FeatureVersion version, bool isInternal);

    MCNAPI ~FeatureTypeVersion();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FeatureLoading::FeatureVersion version, bool isInternal);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
