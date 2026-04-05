#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
struct TickingSystemWithInfo;
// clang-format on

namespace LeashableSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createHandleAddToLeashedEntitiesRequestSystem();

MCAPI ::TickingSystemWithInfo createHandleRemoveFromLeashedEntitiesRequestSystem();

MCAPI void registerClientSystems(::EntitySystems& systemRegistry);

MCAPI void registerServerSystems(::EntitySystems& systemRegistry);
// NOLINTEND

} // namespace LeashableSystem
