#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PersistSitComponent {
public:
    // prevent constructor by default
    PersistSitComponent& operator=(PersistSitComponent const&);
    PersistSitComponent(PersistSitComponent const&);
    PersistSitComponent();
};
