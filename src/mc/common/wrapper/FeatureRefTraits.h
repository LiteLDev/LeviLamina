#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FeatureRefTraits {

public:
    // prevent constructor by default
    FeatureRefTraits& operator=(FeatureRefTraits const&) = delete;
    FeatureRefTraits(FeatureRefTraits const&)            = delete;
    FeatureRefTraits()                                   = delete;
};
