#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OtherJumpRequestComponent {
public:
    // prevent constructor by default
    OtherJumpRequestComponent& operator=(OtherJumpRequestComponent const&);
    OtherJumpRequestComponent(OtherJumpRequestComponent const&);
    OtherJumpRequestComponent();
};
