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
struct ActorMovementTickNeededComponent;
struct HorseFlagComponent;
struct MobAllowStandSlidingFlagComponent;
struct MobFlagComponent;
struct MobIsImmobileFlagComponent;
struct MobIsJumpingFlagComponent;
struct MovementAttributesComponent;
struct OnGroundFlagComponent;
struct PlayerComponent;
struct PlayerIsSleepingFlagComponent;
struct TickingSystemWithInfo;
struct VehicleInputIntentComponent;
// clang-format on

struct MobIsImmobileFilterSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();

    MCAPI static void tickImmobileFilter(
        ::entt::type_list<::Include<::ActorMovementTickNeededComponent const, ::MobFlagComponent const>>,
        ::StrictEntityContext const& entity,
        ::ViewT<::StrictEntityContext, ::ActorDataFlagComponent const, ::Optional<::ActorIsImmobileFlagComponent const>>
            actorView,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::MobFlagComponent>,
            ::MovementAttributesComponent const,
            ::Optional<::ActorIsKnockedBackOnDeathFlagComponent const>> mobView,
        ::ViewT<
            ::StrictEntityContext,
            ::ActorDataFlagComponent const,
            ::Optional<::VehicleInputIntentComponent const>,
            ::Include<::OnGroundFlagComponent, ::HorseFlagComponent>,
            ::Exclude<::MobAllowStandSlidingFlagComponent, ::MobIsJumpingFlagComponent>>               horseView,
        ::ViewT<::StrictEntityContext, ::Include<::HorseFlagComponent>>                                onlyHorseView,
        ::ViewT<::StrictEntityContext, ::PlayerIsSleepingFlagComponent const, ::PlayerComponent const> playerView,
        ::EntityModifier<::MobIsImmobileFlagComponent>                                                 mod
    );
    // NOLINTEND
};
