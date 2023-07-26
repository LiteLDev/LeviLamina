#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourcePackMergeStrategy {

public:
    // prevent constructor by default
    ResourcePackMergeStrategy& operator=(ResourcePackMergeStrategy const&) = delete;
    ResourcePackMergeStrategy(ResourcePackMergeStrategy const&)            = delete;
    ResourcePackMergeStrategy()                                            = delete;
};
