#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TransientComponent {
public:
    // prevent constructor by default
    TransientComponent& operator=(TransientComponent const&);
    TransientComponent(TransientComponent const&);
    TransientComponent();
};
