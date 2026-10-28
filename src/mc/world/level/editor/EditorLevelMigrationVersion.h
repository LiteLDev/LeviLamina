#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class EditorLevelMigrationVersion : schar {
    Legacy             = 0,
    EditorAchievements = 1,
    Current            = 1,
};

}
