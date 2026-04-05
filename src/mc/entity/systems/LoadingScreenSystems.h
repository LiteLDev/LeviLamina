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
MCAPI ::std::unique_ptr<::LoadingScreenSystems::IClientFactory> createClientFactory();

MCAPI void registerClientSystems(::EntitySystems& entitySystems, ::LoadingScreenSystems::IClientFactory const& factory);

MCAPI void registerServerSystems(::EntitySystems& entitySystems);
// NOLINTEND

} // namespace LoadingScreenSystems
