#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
struct TickingSystemWithInfo;
// clang-format on

namespace LendReplayStateSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createAddBackToPlayerSystem(bool isClientSide);

MCAPI ::TickingSystemWithInfo createLendToVehicleSystem(bool isClientSide);

MCAPI void registerSystems(::EntitySystems& systemRegistry, bool isClientSide);
// NOLINTEND

} // namespace LendReplayStateSystem
