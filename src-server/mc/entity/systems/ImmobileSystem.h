#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct LocalMoveVelocityComponent;
struct MobIsImmobileFlagComponent;
struct MobIsJumpingFlagComponent;
struct MobRotationComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class ImmobileSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void doImmobileSystem(::StrictEntityContext const& context, ::LocalMoveVelocityComponent& localMoveVelocityComponent, ::MobRotationComponent& mobRotationComponent, ::StateVectorComponent& stateVectorComponent, ::EntityModifier<::MobIsJumpingFlagComponent> mod);

    MCNAPI static void tickImmobileSystem(::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent, ::MobIsImmobileFlagComponent>, ::LocalMoveVelocityComponent, ::MobRotationComponent, ::StateVectorComponent> view, ::EntityModifier<::MobIsJumpingFlagComponent> mod);
    // NOLINTEND

};
