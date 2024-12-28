#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class ReplayStateComponent;
class StrictEntityContext;
struct ClientAcceptanceThresholdsComponent;
struct ReplayStateConfig;
// clang-format on

namespace SetMovementCommandImpl {
// functions
// NOLINTBEGIN
MCAPI void setComponent(
    ::StrictEntityContext const&                                                    entity,
    ::EntityModifier<::ReplayStateComponent, ::ClientAcceptanceThresholdsComponent> modifier,
    ::ReplayStateConfig const&                                                      config
);

MCAPI void swapComponent(::EntityRegistry& registry, bool isServerAuthority, ::ReplayStateConfig const& config);
// NOLINTEND

} // namespace SetMovementCommandImpl
