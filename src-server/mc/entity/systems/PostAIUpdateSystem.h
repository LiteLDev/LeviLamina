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
struct ActorMovementTickNeededComponent;
struct IsDeadFlagComponent;
struct MobFlagComponent;
struct MobIsImmobileFlagComponent;
struct NoActionTimeComponent;
struct OnGroundFlagComponent;
struct TickingSystemWithInfo;
struct WasOnGroundFlagComponent;
// clang-format on

class PostAIUpdateSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void doPostAiUpdate(
        ::StrictEntityContext&                       entity,
        ::Optional<::OnGroundFlagComponent const>    onGround,
        ::NoActionTimeComponent&                     noActionTime,
        ::EntityModifier<::WasOnGroundFlagComponent> mod
    );

    MCNAPI static void tick(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::MobFlagComponent>,
            ::Exclude<::MobIsImmobileFlagComponent, ::IsDeadFlagComponent>,
            ::Optional<::OnGroundFlagComponent const>,
            ::NoActionTimeComponent>                 view,
        ::EntityModifier<::WasOnGroundFlagComponent> mod
    );
    // NOLINTEND
};
