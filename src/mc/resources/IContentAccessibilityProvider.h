#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IContentAccessibilityProvider {
public:
    // prevent constructor by default
    IContentAccessibilityProvider& operator=(IContentAccessibilityProvider const&);
    IContentAccessibilityProvider(IContentAccessibilityProvider const&);
    IContentAccessibilityProvider();
};
