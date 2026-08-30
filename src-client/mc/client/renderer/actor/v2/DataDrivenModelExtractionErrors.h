#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DataDrivenModelExtractionErrors {
public:
    // member variables
    // NOLINTBEGIN
    bool hasSideEffects                   : 1;
    bool hasUnsupportedTempComponent      : 1;
    bool overMaxPartVisibility            : 1;
    bool invalidRenderControllerResources : 1;
    // NOLINTEND
};
