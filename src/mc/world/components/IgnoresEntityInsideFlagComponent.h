#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IgnoresEntityInsideFlagComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IGNORESENTITYINSIDEFLAGCOMPONENT
public:
    IgnoresEntityInsideFlagComponent& operator=(IgnoresEntityInsideFlagComponent const&) = delete;
    IgnoresEntityInsideFlagComponent(IgnoresEntityInsideFlagComponent const&)            = delete;
    IgnoresEntityInsideFlagComponent()                                                   = delete;
#endif

public:
};
