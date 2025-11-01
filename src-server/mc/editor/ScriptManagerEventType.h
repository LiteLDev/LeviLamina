#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class ScriptManagerEventType : int {
    ScriptSystemTeardown = 0,
    ScriptSystemRebuild = 1,
};

}
