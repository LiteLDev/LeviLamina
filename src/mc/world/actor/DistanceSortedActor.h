#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/Actor.h"

struct DistanceSortedActor {
    Actor* mActor;           // location=0x0
    float  mDistanceSquared; // location=0x8
};
