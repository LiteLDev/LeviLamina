#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Prefabs {

enum class PrefabRotation : int {
    None = 0,
    Rotate90 = 1,
    Rotate180 = 2,
    Rotate270 = 3,
    Default = 4,
};

}
