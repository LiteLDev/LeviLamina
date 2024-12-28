#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkipNormalTickComponent {
public:
    // prevent constructor by default
    SkipNormalTickComponent& operator=(SkipNormalTickComponent const&);
    SkipNormalTickComponent(SkipNormalTickComponent const&);
    SkipNormalTickComponent();
};
