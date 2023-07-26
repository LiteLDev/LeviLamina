#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InsideBlockComponent {

public:
    // prevent constructor by default
    InsideBlockComponent& operator=(InsideBlockComponent const&) = delete;
    InsideBlockComponent(InsideBlockComponent const&)            = delete;
    InsideBlockComponent()                                       = delete;
};
