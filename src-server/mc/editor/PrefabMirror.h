#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Prefabs {

enum class PrefabMirror : int {
    None    = 0,
    X       = 1,
    Z       = 2,
    Xz      = 3,
    Default = 4,
};

}
