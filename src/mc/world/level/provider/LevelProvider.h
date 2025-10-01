#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
class ILevel;
class IMinecraftEventing;
class IRandom;
struct ExternalDataInterface;
// clang-format on

namespace LevelProvider {
// functions
// NOLINTBEGIN
MCNAPI void
addLevelComponents(::EntityContext& levelEntity, ::IRandom& random, bool isClientSide, ::IMinecraftEventing& eventing);

MCNAPI void initializeGlobalComponents(::EntityRegistry& registry);

MCNAPI void registerExternalDataComponent(
    ::EntityRegistry&                          registry,
    ::std::unique_ptr<::ExternalDataInterface> externalDataInterface
);

MCNAPI void registerLevelGlobalComponents(::EntityRegistry& registry, ::ILevel& level);
// NOLINTEND

} // namespace LevelProvider
