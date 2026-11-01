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
struct TickingSystemWithInfo;
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
    MCNAPI static void
    _doSetPreviousPositionSystem(::StrictEntityContext const&, ::StateVectorComponent& stateVectorComponent);

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
