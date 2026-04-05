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
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct AirTravelFlagComponent;
struct GlidingTravelFlagComponent;
struct GroundTravelFlagComponent;
struct ImmuneToLavaDragComponent;
struct LavaTravelFlagComponent;
struct LiquidTravelFlagComponent;
struct MobTravelComponent;
struct MovementAbilitiesComponent;
struct OnGroundFlagComponent;
struct PlayerFlyingTravelComponent;
struct SubBBsComponent;
struct WasInWaterFlagComponent;
struct WaterTravelFlagComponent;
// clang-format on

struct TravelTypeSensingSystem {
public:
    // TravelTypeSensingSystem inner types define
    using ModType = ::EntityModifier<
        ::AirTravelFlagComponent,
        ::GlidingTravelFlagComponent,
        ::GroundTravelFlagComponent,
        ::LavaTravelFlagComponent,
        ::WaterTravelFlagComponent,
        ::PlayerFlyingTravelComponent,
        ::LiquidTravelFlagComponent>;

    using ViewType = ::ViewT<
        ::StrictEntityContext,
        ::Include<::MobTravelComponent>,
        ::Optional<::MovementAbilitiesComponent const>,
        ::Optional<::WasInWaterFlagComponent const>,
        ::Optional<::OnGroundFlagComponent const>,
        ::Optional<::ImmuneToLavaDragComponent const>,
        ::AABBShapeComponent const,
        ::SubBBsComponent const,
        ::ActorDataFlagComponent const>;
};
