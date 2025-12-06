#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerPlayer;
class ActorAnimationControllerStatePlayer;
class ActorAnimationPlayer;
class ActorSkeletalAnimationPlayer;
// clang-format on

struct AnimationVisitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::brstd::function_ref<void(::ActorAnimationPlayer&)>>                mBase;
    ::ll::TypedStorage<8, 16, ::brstd::function_ref<void(::ActorSkeletalAnimationPlayer&)>>        mSkeletal;
    ::ll::TypedStorage<8, 16, ::brstd::function_ref<void(::ActorAnimationControllerPlayer&)>>      mController;
    ::ll::TypedStorage<8, 16, ::brstd::function_ref<void(::ActorAnimationControllerStatePlayer&)>> mControllerState;
    // NOLINTEND
};
