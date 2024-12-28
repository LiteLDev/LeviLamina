#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IContentManager {
public:
    // prevent constructor by default
    IContentManager& operator=(IContentManager const&);
    IContentManager(IContentManager const&);
    IContentManager();
};
