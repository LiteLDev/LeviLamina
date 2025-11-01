#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct InvalidChunkFoundWhileTeleportingFlagComponent;
struct ServerPlayerMovementComponent;
struct ServerPlayerTeleportingFlagComponent;
struct StateVectorComponent;
// clang-format on

namespace ServerPlayerTeleportProtectionSystem {
// functions
// NOLINTBEGIN
MCNAPI void tickTeleportProtection(
    ::StrictEntityContext const&                                 context,
    ::StateVectorComponent const&                                stateVector,
    ::ServerPlayerMovementComponent&                             serverPlayerMovement,
    ::ServerPlayerTeleportingFlagComponent&                      serverPlayerTeleporting,
    ::Optional<::InvalidChunkFoundWhileTeleportingFlagComponent> hadInvalidChunkFound,
    ::EntityModifier<::InvalidChunkFoundWhileTeleportingFlagComponent, ::ServerPlayerTeleportingFlagComponent> modifier,
    ::IConstBlockSource const&                                                                                 region
);
// NOLINTEND

} // namespace ServerPlayerTeleportProtectionSystem
