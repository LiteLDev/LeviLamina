#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EditorActorPausedFlag {

public:
    // prevent constructor by default
    EditorActorPausedFlag& operator=(EditorActorPausedFlag const&) = delete;
    EditorActorPausedFlag(EditorActorPausedFlag const&)            = delete;
    EditorActorPausedFlag()                                        = delete;
};
