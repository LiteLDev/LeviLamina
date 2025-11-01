#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::tasks {

enum class RenderQueue : int {
    PreFrame = 0,
    PostFrame = 1,
};

}
