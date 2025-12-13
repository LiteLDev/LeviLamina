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
MCNAPI ::TickingSystemWithInfo createHandleAddToLeashedEntitiesRequestSystem();

MCNAPI ::TickingSystemWithInfo createHandleRemoveFromLeashedEntitiesRequestSystem();

MCNAPI_C void registerClientSystems(::EntitySystems& systemRegistry);

MCNAPI void registerServerSystems(::EntitySystems& systemRegistry);
// NOLINTEND

} // namespace LeashableSystem
