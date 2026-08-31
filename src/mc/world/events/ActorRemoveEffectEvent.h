#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/effect/MobEffectInstance.h"

struct ActorRemoveEffectEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>            mEntity;
    ::ll::TypedStorage<8, 136, ::MobEffectInstance const> mMobEffect;
    // NOLINTEND
};
