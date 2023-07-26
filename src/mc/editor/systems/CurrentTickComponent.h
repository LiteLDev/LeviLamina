#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CurrentTickComponent {

public:
    // prevent constructor by default
    CurrentTickComponent& operator=(CurrentTickComponent const&) = delete;
    CurrentTickComponent(CurrentTickComponent const&)            = delete;
    CurrentTickComponent()                                       = delete;
};
