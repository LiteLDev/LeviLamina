#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CamelFlagComponent {
public:
    // prevent constructor by default
    CamelFlagComponent& operator=(CamelFlagComponent const&);
    CamelFlagComponent(CamelFlagComponent const&);
    CamelFlagComponent();
};
