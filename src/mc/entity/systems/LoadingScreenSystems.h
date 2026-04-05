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
MCAPI ::std::unique_ptr<::LoadingScreenSystems::IClientFactory> createClientFactory();

MCAPI void registerClientSystems(::EntitySystems& entitySystems, ::LoadingScreenSystems::IClientFactory const& factory);
#endif

MCAPI void registerServerSystems(::EntitySystems& entitySystems);
// NOLINTEND

} // namespace LoadingScreenSystems
