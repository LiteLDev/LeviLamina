#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
namespace LoadingScreenSystems { class IClientFactory; }
// clang-format on

namespace LoadingScreenSystems {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI void
registerClientSystems(::EntitySystems& entitySystems, ::LoadingScreenSystems::IClientFactory const& factory);
#endif

MCNAPI void registerServerSystems(::EntitySystems& entitySystems);
// NOLINTEND

} // namespace LoadingScreenSystems
