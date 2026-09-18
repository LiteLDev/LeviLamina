#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class NavigationComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorRotationComponent;
struct CanStandOnPowderSnowComponent;
struct CanStandOnPowderSnowFromEquipmentComponent;
struct FallDistanceComponent;
struct LavaTravelFlagComponent;
struct MobTravelComponent;
struct StateVectorComponent;
// clang-format on

class LavaMoveSystem {
public:
    // LavaMoveSystem inner types define
    using ViewType = ::ViewT<
        ::StrictEntityContext,
        ::Include<::LavaTravelFlagComponent>,
        ::Optional<::NavigationComponent const>,
        ::AABBShapeComponent const,
        ::ActorRotationComponent const,
        ::ActorDataFlagComponent const,
        ::FallDistanceComponent,
        ::MobTravelComponent,
        ::StateVectorComponent,
        ::Optional<::CanStandOnPowderSnowComponent const>,
        ::Optional<::CanStandOnPowderSnowFromEquipmentComponent const>>;
};
