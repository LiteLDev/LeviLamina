#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/Actor.h"

struct DistanceSortedActor {
    Actor* mActor;           // this+0x0
    float  mDistanceSquared; // this+0x8
};
