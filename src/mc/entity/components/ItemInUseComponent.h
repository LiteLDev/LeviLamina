#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemInUseComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMINUSECOMPONENT
public:
    ItemInUseComponent& operator=(ItemInUseComponent const&) = delete;
    ItemInUseComponent(ItemInUseComponent const&)            = delete;
    ItemInUseComponent()                                     = delete;
#endif

public:
};
