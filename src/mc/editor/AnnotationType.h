#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Annotations {

enum class AnnotationType : int {
    Invalid      = 0,
    Drawing      = 1,
    Image        = 2,
    Text         = 3,
    CommentBlock = 4,
};

}
