#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

enum class LayoutAxisType : int {
    Absolute               = 0,
    ParentRelativeX        = 1,
    ParentRelativeY        = 2,
    SelfRelativeX          = 3,
    SelfRelativeY          = 4,
    SizeOfChildrenX        = 5,
    SizeOfChildrenY        = 6,
    SizeOfLargestChildX    = 7,
    SizeOfLargestChildY    = 8,
    SizeOfMaxSiblingWidth  = 9,
    SizeOfMaxSiblingHeight = 10,
    None                   = 11,
    Count                  = 12,
};

}
