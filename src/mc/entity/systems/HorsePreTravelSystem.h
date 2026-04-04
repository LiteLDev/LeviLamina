#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct AirSpeedComponent;
struct HorseFlagComponent;
struct HorseWasOnGroundPreTravelComponent;
struct InterpolateMovementNeededComponent;
struct MobFlagComponent;
struct OnGroundFlagComponent;
struct VehicleComponent;
// clang-format on

class HorsePreTravelSystem {
public:
    // HorsePreTravelSystem inner types define
    using MainViewType = ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::HorseFlagComponent>,
        ::Optional<::VehicleComponent>,
        ::ActorDataFlagComponent const,
        ::AirSpeedComponent>;

    using MobViewType = ::ViewT<::StrictEntityContext, ::MobFlagComponent const>;

    using ModType = ::EntityModifier<::HorseWasOnGroundPreTravelComponent>;

    using OnGroundViewType = ::ViewT<::StrictEntityContext, ::OnGroundFlagComponent const>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void tickHorsePreTravelSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::InterpolateMovementNeededComponent, ::HorseFlagComponent>,
            ::Optional<::VehicleComponent>,
            ::ActorDataFlagComponent const,
            ::AirSpeedComponent>                                      mainView,
        ::ViewT<::StrictEntityContext, ::MobFlagComponent const>      mobCheck,
        ::ViewT<::StrictEntityContext, ::OnGroundFlagComponent const> onGroundCheck,
        ::EntityModifier<::HorseWasOnGroundPreTravelComponent>        mod
    );
    // NOLINTEND
};
