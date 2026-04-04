#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct IllagerBeastFlagComponent;
struct InterpolateMovementNeededComponent;
struct StateVectorComponent;
struct SubBBsComponent;
// clang-format on

class IllagerBeastPostAIStepSystem {
public:
    // IllagerBeastPostAIStepSystem inner types define
    using ViewType = ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::IllagerBeastFlagComponent>,
        ::StateVectorComponent const,
        ::SubBBsComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doIllagerBeastPostAIStepSystem(
        ::StrictEntityContext const&,
        ::StateVectorComponent const& stateVectorComponent,
        ::SubBBsComponent&            subBBsComponent
    );

    MCAPI static void _tickIllagerBeastPostAIStepSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::InterpolateMovementNeededComponent, ::IllagerBeastFlagComponent>,
            ::StateVectorComponent const,
            ::SubBBsComponent> view
    );
    // NOLINTEND
};
