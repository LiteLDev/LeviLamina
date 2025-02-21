#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

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
    class DryingOutTimerDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnk98b138;
        ::ll::UntypedStorage<4, 4>   mUnkacf736;
        ::ll::UntypedStorage<8, 104> mUnk654386;
        ::ll::UntypedStorage<8, 104> mUnkd7fabb;
        ::ll::UntypedStorage<8, 104> mUnkc1d3ee;
        // NOLINTEND

    public:
        // prevent constructor by default
        DryingOutTimerDefinition& operator=(DryingOutTimerDefinition const&);
        DryingOutTimerDefinition(DryingOutTimerDefinition const&);
        DryingOutTimerDefinition();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~DryingOutTimerDefinition();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
                                          ::JsonUtil::EmptyClass,
                                          ::DryingOutTimerComponent::DryingOutTimerDefinition>>& root);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    enum class DryingOutState : int {
        DryingOut             = 0,
        ExceededDryingOutTime = 1,
        StoppedDryingOut      = 2,
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
    MCAPI DryingOutTimerComponent(::DryingOutTimerComponent&&);

    MCAPI ~DryingOutTimerComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DryingOutTimerComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
