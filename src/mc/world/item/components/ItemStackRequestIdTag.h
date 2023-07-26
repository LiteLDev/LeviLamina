#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackRequestIdTag {

public:
    // prevent constructor by default
    ItemStackRequestIdTag& operator=(ItemStackRequestIdTag const&) = delete;
    ItemStackRequestIdTag(ItemStackRequestIdTag const&)            = delete;
    ItemStackRequestIdTag()                                        = delete;
};
