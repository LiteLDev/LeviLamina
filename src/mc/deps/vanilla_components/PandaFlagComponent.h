#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PandaFlagComponent {
public:
    // prevent constructor by default
    PandaFlagComponent& operator=(PandaFlagComponent const&);
    PandaFlagComponent(PandaFlagComponent const&);
    PandaFlagComponent();
};
