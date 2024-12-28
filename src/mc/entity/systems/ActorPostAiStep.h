#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct ActorRemovedFlagComponent;
struct EnderDragonFlagComponent;
struct HorseFlagComponent;
struct ParrotFlagComponent;
struct SquidFlagComponent;
struct WitherBossFlagComponent;
struct WitherBossPreAIStepResultComponent;
// clang-format on

namespace ActorPostAiStep {
// functions
// NOLINTBEGIN
MCAPI void _tickEach(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent>,
        ::Exclude<::ActorRemovedFlagComponent>,
        ::ActorOwnerComponent>                                                   commonView,
    ::ViewT<::StrictEntityContext, ::Include<::EnderDragonFlagComponent>> const& enderDragons,
    ::ViewT<::StrictEntityContext, ::Include<::HorseFlagComponent>> const&       horses,
    ::ViewT<::StrictEntityContext, ::Include<::ParrotFlagComponent>> const&      parrots,
    ::ViewT<::StrictEntityContext, ::Include<::SquidFlagComponent>> const&       squids,
    ::ViewT<::StrictEntityContext, ::Include<::WitherBossFlagComponent>, ::WitherBossPreAIStepResultComponent const>
        withers
);
// NOLINTEND

} // namespace ActorPostAiStep
