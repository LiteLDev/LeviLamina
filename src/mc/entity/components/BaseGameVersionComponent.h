#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BaseGameVersionComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEGAMEVERSIONCOMPONENT
public:
    BaseGameVersionComponent& operator=(BaseGameVersionComponent const&) = delete;
    BaseGameVersionComponent(BaseGameVersionComponent const&)            = delete;
    BaseGameVersionComponent()                                           = delete;
#endif

public:
};
