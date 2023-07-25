#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockFlammableComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKFLAMMABLECOMPONENT
public:
    BlockFlammableComponent& operator=(BlockFlammableComponent const&) = delete;
    BlockFlammableComponent(BlockFlammableComponent const&)            = delete;
    BlockFlammableComponent()                                          = delete;
#endif

public:
};
