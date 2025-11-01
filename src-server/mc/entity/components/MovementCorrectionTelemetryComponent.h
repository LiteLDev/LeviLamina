#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"

struct MovementCorrectionTelemetryComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ActorType> mActorType;
    ::ll::TypedStorage<8, 24, ::std::vector<float>> mDivergences;
    ::ll::TypedStorage<4, 4, int> mTickCount;
    // NOLINTEND

};
