#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Annotations {

enum class AnnotationChangeType : int {
    Created     = 0,
    UpdatedMeta = 1,
    UpdatedData = 2,
    Deleted     = 3,
};

}
