#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DryingOutTimerComponent {
public:
    // DryingOutTimerComponent inner types declare
    // clang-format off
    class DryingOutTimerDefinition;
    // clang-format on

    // DryingOutTimerComponent inner types define
    enum class DryingOutState : int {
        DryingOut             = 0,
        ExceededDryingOutTime = 1,
        StoppedDryingOut      = 2,
    };

    class DryingOutTimerDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                      mTotalTime;
        ::ll::TypedStorage<4, 4, float>                      mWaterBottleAdditionalTime;
        ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnFullyDriedOut;
        ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnStoppedDryingOut;
        ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnRecoverAfterDriedOut;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~DryingOutTimerDefinition();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
                ::JsonUtil::EmptyClass,
                ::DryingOutTimerComponent::DryingOutTimerDefinition>>& root
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 320, ::DryingOutTimerComponent::DryingOutTimerDefinition> mDefinition;
    ::ll::TypedStorage<4, 4, int>                                                   mTicksRemainingUntilDryOut;
    ::ll::TypedStorage<4, 4, ::DryingOutTimerComponent::DryingOutState>             mState;
    // NOLINTEND

public:
    // prevent constructor by default
    DryingOutTimerComponent& operator=(DryingOutTimerComponent const&);
    DryingOutTimerComponent(DryingOutTimerComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DryingOutTimerComponent();

    MCAPI DryingOutTimerComponent(::DryingOutTimerComponent&&);

    MCAPI ~DryingOutTimerComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::DryingOutTimerComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
