#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockFlammableComponent {

public:
    // prevent constructor by default
    BlockFlammableComponent& operator=(BlockFlammableComponent const&) = delete;
    BlockFlammableComponent(BlockFlammableComponent const&)            = delete;
    BlockFlammableComponent()                                          = delete;
};
