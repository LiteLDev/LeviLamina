#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackNetIdTag {
public:
    // prevent constructor by default
    ItemStackNetIdTag& operator=(ItemStackNetIdTag const&);
    ItemStackNetIdTag(ItemStackNetIdTag const&);
    ItemStackNetIdTag();
};
