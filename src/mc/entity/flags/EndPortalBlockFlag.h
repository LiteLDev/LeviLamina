#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EndPortalBlockFlag {

public:
    // prevent constructor by default
    EndPortalBlockFlag& operator=(EndPortalBlockFlag const&) = delete;
    EndPortalBlockFlag(EndPortalBlockFlag const&)            = delete;
    EndPortalBlockFlag()                                     = delete;
};
