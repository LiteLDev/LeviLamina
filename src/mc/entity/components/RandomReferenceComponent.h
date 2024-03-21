#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RandomReferenceComponent {
public:
    // prevent constructor by default
    RandomReferenceComponent& operator=(RandomReferenceComponent const&);
    RandomReferenceComponent(RandomReferenceComponent const&);
    RandomReferenceComponent();
};
