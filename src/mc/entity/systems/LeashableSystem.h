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
#ifdef LL_PLAT_C
MCNAPI ::TickingSystemWithInfo createHandleAddToLeashedEntitiesRequestSystem();

MCNAPI ::TickingSystemWithInfo createHandleRemoveFromLeashedEntitiesRequestSystem();

MCNAPI void registerClientSystems(::EntitySystems& systemRegistry);
#endif

MCNAPI void registerServerSystems(::EntitySystems& systemRegistry);
// NOLINTEND

} // namespace LeashableSystem
