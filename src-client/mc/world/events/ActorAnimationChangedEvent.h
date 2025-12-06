#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/entity/components/AnimationEventState.h"
#include "mc/entity/components/AnimationEventType.h"

struct ActorAnimationChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>      mEntity;
    ::ll::TypedStorage<4, 4, ::AnimationEventType>  mType;
    ::ll::TypedStorage<4, 4, ::AnimationEventState> mState;
    // NOLINTEND
};
