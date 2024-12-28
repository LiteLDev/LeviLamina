#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PermanentSkipNormalTickComponent {
public:
    // prevent constructor by default
    PermanentSkipNormalTickComponent& operator=(PermanentSkipNormalTickComponent const&);
    PermanentSkipNormalTickComponent(PermanentSkipNormalTickComponent const&);
    PermanentSkipNormalTickComponent();
};
