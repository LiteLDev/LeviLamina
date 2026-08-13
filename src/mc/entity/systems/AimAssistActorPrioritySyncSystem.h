#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class CameraAimAssistRegistryComponent;
class HashedString;
struct CameraAimAssistActorPriorityServerComponent;
struct SynchedActorDataComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace AimAssistActorPrioritySyncSystem {
// functions
// NOLINTBEGIN
MCAPI void _tickMobPriority(
    ::ActorOwnerComponent&                    mobOwner,
    ::SynchedActorDataComponent&              synchedActorData,
    ::CameraAimAssistRegistryComponent const& aimAssistRegistry,
    ::brstd::flat_set<::HashedString, ::std::less<::HashedString>, ::std::vector<::HashedString>> const& presetData,
    ::CameraAimAssistActorPriorityServerComponent& aimAssistActorPriority
);

MCAPI ::TickingSystemWithInfo createSystem();
// NOLINTEND

} // namespace AimAssistActorPrioritySyncSystem
