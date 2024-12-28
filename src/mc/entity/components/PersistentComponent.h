#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PersistentComponent {
public:
    // prevent constructor by default
    PersistentComponent& operator=(PersistentComponent const&);
    PersistentComponent(PersistentComponent const&);
    PersistentComponent();
};
