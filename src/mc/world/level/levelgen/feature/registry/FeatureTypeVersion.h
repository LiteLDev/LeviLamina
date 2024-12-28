#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/feature_loading/FeatureVersion.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

class FeatureTypeVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnk8bb473;
    ::ll::UntypedStorage<1, 1>   mUnkbafaa0;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureTypeVersion& operator=(FeatureTypeVersion const&);
    FeatureTypeVersion(FeatureTypeVersion const&);
    FeatureTypeVersion();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FeatureTypeVersion(::FeatureLoading::FeatureVersion version, bool isInternal);

    MCAPI ::SemVersion const& getFormatVersion() const;

    MCAPI ~FeatureTypeVersion();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FeatureLoading::FeatureVersion version, bool isInternal);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
