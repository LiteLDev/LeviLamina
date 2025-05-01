#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/minecraft_camera/events/CameraClearInstructionEvent.h"
#include "mc/deps/minecraft_camera/events/CameraFadeInstructionEvent.h"
#include "mc/deps/minecraft_camera/events/CameraRemoveTargetInstructionEvent.h"
#include "mc/deps/minecraft_camera/events/CameraSetInstructionEvent.h"
#include "mc/deps/minecraft_camera/events/CameraTargetInstructionEvent.h"

class EcsEventDispatcher : public ::std::enable_shared_from_this<::EcsEventDispatcher>,
                           public ::EnableGetWeakRef<::EcsEventDispatcher> {
public:
    // EcsEventDispatcher inner types declare
    // clang-format off
    template<typename T0> struct ExpandedEvent;
    // clang-format on

    // EcsEventDispatcher inner types define
    using BaseWeak = ::EnableGetWeakRef<::EcsEventDispatcher>;

    using BaseShared = ::std::enable_shared_from_this<::EcsEventDispatcher>;

    using Token = ::gsl::final_action<::std::function<void()>>;

    template <typename T0>
    struct ExpandedEvent {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::entt::dispatcher> mDispatcher;
    // NOLINTEND
};
