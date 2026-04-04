#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct InterpolateMovementNeededComponent;
struct TickingSystemWithInfo;
struct WitherBossFlagComponent;
struct WitherBossPreAIStepResultComponent;
// clang-format on

class WitherBossPreAIStepSystem {
public:
    // WitherBossPreAIStepSystem inner types define
    using ModType = ::EntityModifier<::WitherBossPreAIStepResultComponent>;

    using ViewType = ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::WitherBossFlagComponent>,
        ::ActorOwnerComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doWitherBossPreAIStepSystem(
        ::StrictEntityContext&                                 context,
        ::ActorOwnerComponent&                                 actorOwnerComponent,
        ::EntityModifier<::WitherBossPreAIStepResultComponent> mod
    );

    MCAPI static void _tickWitherBossPreAIStepSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::InterpolateMovementNeededComponent, ::WitherBossFlagComponent>,
            ::ActorOwnerComponent>                             view,
        ::EntityModifier<::WitherBossPreAIStepResultComponent> mod
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
