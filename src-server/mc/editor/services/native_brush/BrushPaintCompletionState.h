#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Brush {

enum class BrushPaintCompletionState : int {
    Success = 0,
    Canceled = 1,
    Failed = 2,
};

}
