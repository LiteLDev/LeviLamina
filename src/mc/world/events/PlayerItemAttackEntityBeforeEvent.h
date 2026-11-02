#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerItemAttackEntityBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mTargetEntity;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>    mAimDirection;
    // NOLINTEND
};
