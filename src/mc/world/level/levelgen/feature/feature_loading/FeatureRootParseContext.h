#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FeatureLoading {

struct FeatureRootParseContext {
public:
    // prevent constructor by default
    FeatureRootParseContext& operator=(FeatureRootParseContext const&);
    FeatureRootParseContext(FeatureRootParseContext const&);
    FeatureRootParseContext();

public:
    // NOLINTBEGIN
    MCAPI ~FeatureRootParseContext();

    // NOLINTEND
};

}; // namespace FeatureLoading
