#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InsideGenericBlockComponent {
public:
    // prevent constructor by default
    InsideGenericBlockComponent& operator=(InsideGenericBlockComponent const&);
    InsideGenericBlockComponent(InsideGenericBlockComponent const&);
    InsideGenericBlockComponent();

public:
    // NOLINTBEGIN
    MCAPI struct InsideGenericBlockComponent& operator=(struct InsideGenericBlockComponent&&);

    // NOLINTEND
};
