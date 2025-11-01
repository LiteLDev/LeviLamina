#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorIsImmobileFlagComponent;
struct ActorIsKnockedBackOnDeathFlagComponent;
struct HorseFlagComponent;
struct MobAllowStandSlidingFlagComponent;
struct MobFlagComponent;
struct MobIsJumpingFlagComponent;
struct MobTravelComponent;
struct MovementAttributesComponent;
struct OnGroundFlagComponent;
struct PlayerComponent;
struct PlayerIsSleepingFlagComponent;
struct VehicleInputIntentComponent;
// clang-format on

struct MobTravelImmobileFilterSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void tick(::ViewT<::StrictEntityContext, ::Include<::MobTravelComponent>> mainView, ::ViewT<::StrictEntityContext, ::ActorDataFlagComponent const, ::Optional<::ActorIsImmobileFlagComponent const>> actorView, ::ViewT<::StrictEntityContext, ::Include<::MobFlagComponent>, ::MovementAttributesComponent const, ::Optional<::ActorIsKnockedBackOnDeathFlagComponent const>> mobView, ::ViewT<::StrictEntityContext, ::ActorDataFlagComponent const, ::Optional<::VehicleInputIntentComponent const>, ::Include<::OnGroundFlagComponent, ::HorseFlagComponent>, ::Exclude<::MobAllowStandSlidingFlagComponent, ::MobIsJumpingFlagComponent>> horseView, ::ViewT<::StrictEntityContext, ::Include<::HorseFlagComponent>> onlyHorseView, ::ViewT<::StrictEntityContext, ::PlayerIsSleepingFlagComponent const, ::PlayerComponent const> playerView, ::EntityModifier<::MobTravelComponent> mod);
    // NOLINTEND

};
