#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/AnimationEventState.h"
#include "mc/entity/components/AnimationEventType.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
// clang-format on

struct ActorAnimationChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>      mEntity;
    ::ll::TypedStorage<4, 4, ::AnimationEventType>  mType;
    ::ll::TypedStorage<4, 4, ::AnimationEventState> mState;
    // NOLINTEND
};
