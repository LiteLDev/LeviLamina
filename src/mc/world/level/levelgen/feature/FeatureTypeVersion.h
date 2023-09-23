#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FeatureTypeVersion {
public:
    // prevent constructor by default
    FeatureTypeVersion(FeatureTypeVersion const&);
    FeatureTypeVersion();

public:
    // NOLINTBEGIN
    // symbol: ??0FeatureTypeVersion@@QEAA@VSemVersion@@_N@Z
    MCAPI FeatureTypeVersion(class SemVersion, bool);

    // symbol: ??4FeatureTypeVersion@@QEAAXAEBU0@@Z
    MCAPI void operator=(struct FeatureTypeVersion const&);

    // symbol: ??1FeatureTypeVersion@@QEAA@XZ
    MCAPI ~FeatureTypeVersion();

    // NOLINTEND
};
