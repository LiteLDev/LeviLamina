#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/world/level/levelgen/feature/feature_loading/FeatureVersion.h"

class FeatureTypeVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SemVersion> mFormatVersion;
    ::ll::TypedStorage<1, 1, bool> mIsInternal;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureTypeVersion();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FeatureTypeVersion(::FeatureLoading::FeatureVersion version, bool isInternal);

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
    MCFOLD void $dtor();
    // NOLINTEND

};
