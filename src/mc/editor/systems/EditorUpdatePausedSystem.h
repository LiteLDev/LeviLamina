#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EditorUpdatePausedSystem {
public:
    // prevent constructor by default
    EditorUpdatePausedSystem& operator=(EditorUpdatePausedSystem const&);
    EditorUpdatePausedSystem(EditorUpdatePausedSystem const&);
    EditorUpdatePausedSystem();
};
