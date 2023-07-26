#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RuntimeIDComponent {

public:
    // prevent constructor by default
    RuntimeIDComponent& operator=(RuntimeIDComponent const&) = delete;
    RuntimeIDComponent(RuntimeIDComponent const&)            = delete;
    RuntimeIDComponent()                                     = delete;
};
