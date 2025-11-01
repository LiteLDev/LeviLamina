#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandOriginSystem : int {
    AnimationTimelineSystem = 0,
    ActorEventCommandSystem = 1,
    ActorEventQueueCommandSystem = 2,
};
