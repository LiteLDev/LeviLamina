#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IContentTracker {
public:
    // prevent constructor by default
    IContentTracker& operator=(IContentTracker const&);
    IContentTracker(IContentTracker const&);
    IContentTracker();
};
