#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ItemTransformType : uint {
    Gui                  = 0,
    FirstPersonRightHand = 1,
    FirstPersonLeftHand  = 2,
    ThirdPersonRightHand = 3,
    ThirdPersonLeftHand  = 4,
    Ground               = 5,
    Fixed                = 6,
    Head                 = 7,
    Embedded             = 8,
    Shelf                = 9,
    Count                = 10,
};
