#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IContentAccessibilityProvider {

public:
    // prevent constructor by default
    IContentAccessibilityProvider& operator=(IContentAccessibilityProvider const&) = delete;
    IContentAccessibilityProvider(IContentAccessibilityProvider const&)            = delete;
    IContentAccessibilityProvider()                                                = delete;
};
