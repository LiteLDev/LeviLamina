#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorRotationComponent;
struct JumpPendingScaleComponent;
struct MobEffectsComponent;
struct MobIsJumpingFlagComponent;
struct MobTravelComponent;
struct MovementAttributesComponent;
struct OnGroundFlagComponent;
struct PowerJumpFlagComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct TriggerJumpRequestComponent;
// clang-format on

struct ApplyJumpModifierSystem {
public:
    // ApplyJumpModifierSystem inner types define
    using ViewType = ::ViewT<
        ::StrictEntityContext,
        ::Include<::OnGroundFlagComponent, ::PowerJumpFlagComponent>,
        ::Exclude<::MobIsJumpingFlagComponent>,
        ::TriggerJumpRequestComponent const,
        ::ActorRotationComponent const,
        ::MovementAttributesComponent const,
        ::MobEffectsComponent const,
        ::MobTravelComponent const,
        ::JumpPendingScaleComponent,
        ::StateVectorComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createApplyJumpModifierSystem();

    MCAPI static void tickApplyJumpModifierSystem(
        ::StrictEntityContext const&         triggerJumpRequestComponent,
        ::TriggerJumpRequestComponent const& actorRotationComponent,
        ::ActorRotationComponent const&      attributesComponent,
        ::MovementAttributesComponent const& mobEffectsComponent,
        ::MobEffectsComponent const&         mobTravelComponent,
        ::MobTravelComponent const&          jumpPendingScaleComponent,
        ::JumpPendingScaleComponent&         stateVectorComponent,
        ::StateVectorComponent&
    );
    // NOLINTEND
};
