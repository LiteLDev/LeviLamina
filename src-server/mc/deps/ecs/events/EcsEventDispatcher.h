#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"

// auto generated forward declare list
// clang-format off
struct CameraActivationEvent;
struct CameraAttachToEntityInstructionEvent;
struct CameraClearInstructionEvent;
struct CameraDetachFromEntityInstructionEvent;
struct CameraFadeInstructionEvent;
struct CameraRemoveTargetInstructionEvent;
struct CameraSetFovInstructionEvent;
struct CameraSetInstructionEvent;
struct CameraSplineInstructionEvent;
struct CameraTargetInstructionEvent;
// clang-format on

class EcsEventDispatcher : public ::std::enable_shared_from_this<::EcsEventDispatcher>, public ::EnableGetWeakRef<::EcsEventDispatcher> {
public:
    // EcsEventDispatcher inner types declare
    // clang-format off
    template<typename T0> struct ExpandedEvent;
    // clang-format on
    
    // EcsEventDispatcher inner types define
    using BaseWeak = ::EnableGetWeakRef<::EcsEventDispatcher>;
    
    using BaseShared = ::std::enable_shared_from_this<::EcsEventDispatcher>;
    
    using Token = ::gsl::final_action<::std::function<void()>>;
    
    template<typename T0>
    struct ExpandedEvent {
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::entt::dispatcher> mDispatcher;
    // NOLINTEND

};
