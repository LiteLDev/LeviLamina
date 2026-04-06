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

#ifdef LL_PLAT_C
MCAPI void registerClientSystems(::EntitySystems& systemRegistry);
#endif

MCAPI void registerServerSystems(::EntitySystems& systemRegistry);
// NOLINTEND

} // namespace LeashableSystem
