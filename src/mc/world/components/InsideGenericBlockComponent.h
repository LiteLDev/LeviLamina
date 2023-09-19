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
    // symbol: ??4InsideGenericBlockComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct InsideGenericBlockComponent& operator=(struct InsideGenericBlockComponent&&);

    // NOLINTEND
};
