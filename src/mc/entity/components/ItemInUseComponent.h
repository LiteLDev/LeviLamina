#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemInUseComponent {

public:
    // prevent constructor by default
    ItemInUseComponent& operator=(ItemInUseComponent const&) = delete;
    ItemInUseComponent(ItemInUseComponent const&)            = delete;
    ItemInUseComponent()                                     = delete;
};
