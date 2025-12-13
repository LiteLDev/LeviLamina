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
MCNAPI_C ::std::unique_ptr<::LoadingScreenSystems::IClientFactory> createClientFactory();

MCNAPI_C void
registerClientSystems(::EntitySystems& entitySystems, ::LoadingScreenSystems::IClientFactory const& factory);

MCNAPI void registerServerSystems(::EntitySystems& entitySystems);
// NOLINTEND

} // namespace LoadingScreenSystems
