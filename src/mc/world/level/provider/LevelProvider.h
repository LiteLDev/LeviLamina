#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
class Experiments;
class ILevel;
class IRandom;
struct ExternalDataInterface;
// clang-format on

namespace LevelProvider {
// functions
// NOLINTBEGIN
MCAPI void addLevelComponents(
    ::EntityContext&     levelEntity,
    ::IRandom&           random,
    ::Experiments const& experiments,
    bool                 isClientSide
);

MCAPI void initializeGlobalComponents(::EntityRegistry& registry);

MCAPI void registerExternalDataComponent(
    ::EntityRegistry&                          registry,
    ::std::unique_ptr<::ExternalDataInterface> externalDataInterface
);

MCAPI void
registerLevelGlobalComponents(::EntityRegistry& registry, ::ILevel& level, bool registerOverflowTickComponent);
// NOLINTEND

} // namespace LevelProvider
