#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Brush {

enum class BrushPaintMode : int {
    BlockPaint = 0,
    FreehandSelect = 1,
    Smooth = 2,
    Roughen = 3,
    Flatten = 4,
};

}
