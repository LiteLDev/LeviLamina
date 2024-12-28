#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InsideWebBlockComponent {
public:
    // prevent constructor by default
    InsideWebBlockComponent& operator=(InsideWebBlockComponent const&);
    InsideWebBlockComponent(InsideWebBlockComponent const&);
    InsideWebBlockComponent();
};
