#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ShapeType : uchar {
    Outline            = 0x0,
    Collision          = 0x1,
    CollisionForCamera = 0x2,
};
