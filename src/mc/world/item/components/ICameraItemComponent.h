#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ICameraItemComponent {
public:
    // prevent constructor by default
    ICameraItemComponent& operator=(ICameraItemComponent const&);
    ICameraItemComponent(ICameraItemComponent const&);
    ICameraItemComponent();
};
