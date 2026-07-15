#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ServerEditorConnectionPolicy : int {
    MatchWorldType = 0,
    EditorOnly     = 1,
    VanillaOnly    = 2,
    Mixed          = 3,
};
