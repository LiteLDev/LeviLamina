#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EditorActorPausedFlag {
public:
    // prevent constructor by default
    EditorActorPausedFlag& operator=(EditorActorPausedFlag const&);
    EditorActorPausedFlag(EditorActorPausedFlag const&);
    EditorActorPausedFlag();
};
