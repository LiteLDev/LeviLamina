#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FeatureTypeVersion {
public:
    // prevent constructor by default
    FeatureTypeVersion(FeatureTypeVersion const&);
    FeatureTypeVersion();

public:
    // NOLINTBEGIN
    MCAPI FeatureTypeVersion(class SemVersion, bool);

    MCAPI void operator=(struct FeatureTypeVersion const&);

    MCAPI ~FeatureTypeVersion();

    // NOLINTEND
};
