#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class CameraAimAssistRegistryComponent;
class HashedString;
class LevelComponent;
class StrictEntityContext;
struct CameraAimAssistActorPriorityServerComponent;
struct CameraAimAssistComponent;
struct MobFlagComponent;
struct ServerPlayerComponent;
struct SynchedActorDataComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace AimAssistActorPrioritySyncSystem {
// functions
// NOLINTBEGIN
MCNAPI void _tickMobPriority(
    ::ActorOwnerComponent&                    mobOwner,
    ::SynchedActorDataComponent&              synchedActorData,
    ::CameraAimAssistRegistryComponent const& aimAssistRegistry,
    ::brstd::flat_set<::HashedString, ::std::less<::HashedString>, ::std::vector<::HashedString>> const& presetData,
    ::CameraAimAssistActorPriorityServerComponent& aimAssistActorPriority
);

MCNAPI void _tickUpdateMap(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ServerPlayerComponent>,
        ::CameraAimAssistComponent const,
        ::ActorOwnerComponent,
        ::SynchedActorDataComponent>                                                                 serverPlayerView,
    ::ViewT<::StrictEntityContext, ::LevelComponent const, ::CameraAimAssistRegistryComponent const> levelView,
    ::ViewT<::StrictEntityContext, ::Include<::MobFlagComponent>, ::ActorOwnerComponent, ::SynchedActorDataComponent>
                                                                    mobView,
    ::OptionalGlobal<::CameraAimAssistActorPriorityServerComponent> actorPriorityComponent
);

MCNAPI ::TickingSystemWithInfo createSystem();
// NOLINTEND

} // namespace AimAssistActorPrioritySyncSystem
