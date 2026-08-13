#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace WaterSinkInputSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createWaterSinkInputSystem();

MCAPI void doInWaterSinkInputSystem(
    ::MovementAbilitiesComponent const& abilitiesComponent,
    ::MoveInputComponent const&         moveInputComponent,
    ::StateVectorComponent&             stateVectorComponent
);
// NOLINTEND

} // namespace WaterSinkInputSystem
