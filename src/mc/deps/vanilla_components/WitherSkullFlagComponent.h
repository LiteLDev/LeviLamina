#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WitherSkullFlagComponent {
public:
    // prevent constructor by default
    WitherSkullFlagComponent& operator=(WitherSkullFlagComponent const&);
    WitherSkullFlagComponent(WitherSkullFlagComponent const&);
    WitherSkullFlagComponent();
};
