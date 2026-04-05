#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct InterpolateMovementNeededComponent;
struct NeedSetPreviousPositionFlagComponent;
struct StateVectorComponent;
// clang-format on

class SetPreviousPositionSystem {
public:
    // SetPreviousPositionSystem inner types define
    using SystemView = ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::NeedSetPreviousPositionFlagComponent>,
        ::StateVectorComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _doSetPreviousPositionSystem(::StrictEntityContext const&, ::StateVectorComponent& stateVectorComponent);

    MCAPI static void _tickSetPreviousPositionSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::InterpolateMovementNeededComponent, ::NeedSetPreviousPositionFlagComponent>,
            ::StateVectorComponent> view
    );
    // NOLINTEND
};
