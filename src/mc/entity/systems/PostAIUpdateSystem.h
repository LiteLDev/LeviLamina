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
    // prevent constructor by default
    PostAIUpdateSystem& operator=(PostAIUpdateSystem const&);
    PostAIUpdateSystem(PostAIUpdateSystem const&);
    PostAIUpdateSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();

    MCAPI static void doPostAiUpdate(
        ::StrictEntityContext&                       entity,
        ::Optional<::OnGroundFlagComponent const>    onGround,
        ::NoActionTimeComponent&                     noActionTime,
        ::EntityModifier<::WasOnGroundFlagComponent> mod
    );

    MCAPI static void tick(
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
