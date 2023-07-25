#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InsideBlockComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBLOCKCOMPONENT
public:
    InsideBlockComponent& operator=(InsideBlockComponent const&) = delete;
    InsideBlockComponent(InsideBlockComponent const&)            = delete;
    InsideBlockComponent()                                       = delete;
#endif

public:
};
