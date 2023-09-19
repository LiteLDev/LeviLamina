#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InsideBlockComponent {
public:
    // prevent constructor by default
    InsideBlockComponent& operator=(InsideBlockComponent const&);
    InsideBlockComponent(InsideBlockComponent const&);
    InsideBlockComponent();
};
