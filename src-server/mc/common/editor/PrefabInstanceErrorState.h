#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Prefabs {

enum class PrefabInstanceErrorState : int {
    // bitfield representation
    Valid = 0,
    InvalidInstanceId = 1 << 0,
    InvalidTemplateId = 1 << 1,
    InvalidStructureRefId = 1 << 2,
    MissingTemplate = 1 << 3,
    AllErrors = InvalidInstanceId | InvalidTemplateId | InvalidStructureRefId | MissingTemplate,
};

}
