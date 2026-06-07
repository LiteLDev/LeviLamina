#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorDataFlagComponent;
struct MovementAttributesComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace ResetLegacyPlayerFrictionModifierSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void doResetLegacyPlayerFrictionModifierSystem(
    ::ActorDataFlagComponent const& actorDataFlagComponent,
    ::MovementAttributesComponent&  movementAttributesComponent
);
// NOLINTEND

} // namespace ResetLegacyPlayerFrictionModifierSystem
