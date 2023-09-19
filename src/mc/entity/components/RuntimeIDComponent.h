#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RuntimeIDComponent {
public:
    // prevent constructor by default
    RuntimeIDComponent& operator=(RuntimeIDComponent const&);
    RuntimeIDComponent(RuntimeIDComponent const&);
    RuntimeIDComponent();
};
