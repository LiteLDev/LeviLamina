#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EditorActorPauseTickNeededFlag {

public:
    // prevent constructor by default
    EditorActorPauseTickNeededFlag& operator=(EditorActorPauseTickNeededFlag const&) = delete;
    EditorActorPauseTickNeededFlag(EditorActorPauseTickNeededFlag const&)            = delete;
    EditorActorPauseTickNeededFlag()                                                 = delete;
};
