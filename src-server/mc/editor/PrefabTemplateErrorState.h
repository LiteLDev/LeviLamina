#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Prefabs {

enum class PrefabTemplateErrorState : int {
    Valid            = 0,
    InvalidId        = 1,
    MissingStructure = 2,
    AllErrors        = 3,
};

}
