#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FeatureRefTraits {
public:
    // prevent constructor by default
    FeatureRefTraits& operator=(FeatureRefTraits const&);
    FeatureRefTraits(FeatureRefTraits const&);
    FeatureRefTraits();
};
