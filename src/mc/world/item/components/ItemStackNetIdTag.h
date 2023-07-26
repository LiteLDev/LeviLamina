#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackNetIdTag {

public:
    // prevent constructor by default
    ItemStackNetIdTag& operator=(ItemStackNetIdTag const&) = delete;
    ItemStackNetIdTag(ItemStackNetIdTag const&)            = delete;
    ItemStackNetIdTag()                                    = delete;
};
