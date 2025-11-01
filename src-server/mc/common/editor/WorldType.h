#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class WorldType : int {
    NonEditor = 0,
    EditorProject = 1,
    EditorTestLevel = 2,
    EditorRealmsUpload = 3,
};

}
