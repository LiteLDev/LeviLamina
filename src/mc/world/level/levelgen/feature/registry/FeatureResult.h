#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FeatureResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk87a851;
    ::ll::UntypedStorage<8, 8>  mUnk11560b;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureResult& operator=(FeatureResult const&);
    FeatureResult(FeatureResult const&);
    FeatureResult();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~FeatureResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
