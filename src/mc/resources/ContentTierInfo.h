#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContentTierInfo {

public:
    // prevent constructor by default
    ContentTierInfo& operator=(ContentTierInfo const&) = delete;
    ContentTierInfo(ContentTierInfo const&)            = delete;
    ContentTierInfo()                                  = delete;
};
