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
struct BatFlagComponent;
struct BeeFlagComponent;
struct ExperienceOrbFlagComponent;
struct FireworksRocketFlagComponent;
struct FishingHookFlagComponent;
struct HorseFlagComponent;
struct ItemActorFlagComponent;
struct MinecartFlagComponent;
struct MinecartPreNormalTickBlockPosComponent;
struct PandaFlagComponent;
struct PrimedTntFlagComponent;
struct ShulkerFlagComponent;
struct SlimeFlagComponent;
struct SlimeWasOnGroundPreNormalTickComponent;
struct WolfFlagComponent;
// clang-format on

namespace ActorNormalTick {
// functions
// NOLINTBEGIN
MCNAPI void _tickEach(
    bool isClientSide,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent>,
        ::Exclude<::ActorRemovedFlagComponent>,
        ::ActorOwnerComponent> const&                                                          commonView,
    ::ViewT<::StrictEntityContext, ::Include<::BeeFlagComponent>> const&                       bees,
    ::ViewT<::StrictEntityContext, ::Include<::BatFlagComponent>> const&                       bats,
    ::ViewT<::StrictEntityContext, ::Include<::ExperienceOrbFlagComponent>> const&             orbs,
    ::ViewT<::StrictEntityContext, ::Include<::FireworksRocketFlagComponent>> const&           rockets,
    ::ViewT<::StrictEntityContext, ::Include<::FishingHookFlagComponent>> const&               hooks,
    ::ViewT<::StrictEntityContext, ::Include<::HorseFlagComponent>> const&                     horses,
    ::ViewT<::StrictEntityContext, ::Include<::ItemActorFlagComponent>> const&                 items,
    ::ViewT<::StrictEntityContext, ::Include<::MinecartFlagComponent>> const&                  minecarts,
    ::ViewT<::StrictEntityContext, ::Include<::PandaFlagComponent>> const&                     pandas,
    ::ViewT<::StrictEntityContext, ::Include<::PrimedTntFlagComponent>> const&                 tnts,
    ::ViewT<::StrictEntityContext, ::Include<::SlimeFlagComponent>> const&                     slimes,
    ::ViewT<::StrictEntityContext, ::Include<::WolfFlagComponent>> const&                      wolves,
    ::ViewT<::StrictEntityContext, ::Include<::ShulkerFlagComponent>> const&                   shulkers,
    ::ViewT<::StrictEntityContext, ::MinecartPreNormalTickBlockPosComponent const> const&      minecartData,
    ::ViewT<::StrictEntityContext, ::Include<::SlimeWasOnGroundPreNormalTickComponent>> const& slimeWasOnGround
);
// NOLINTEND

} // namespace ActorNormalTick
