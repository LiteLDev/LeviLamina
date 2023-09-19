#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EndPortalBlockFlag {
public:
    // prevent constructor by default
    EndPortalBlockFlag& operator=(EndPortalBlockFlag const&);
    EndPortalBlockFlag(EndPortalBlockFlag const&);
    EndPortalBlockFlag();
};
