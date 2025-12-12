#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct MobTravelComponent;
struct PlayerComponent;
struct PlayerPreMobTravelComponent;
struct StateVectorComponent;
// clang-format on

namespace PlayerPreMobTravelSystem {
// functions
// NOLINTBEGIN
MCNAPI void tickPlayerPreMobTravelSystem(
    ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent, ::MobTravelComponent>, ::StateVectorComponent const>
                                                    view,
    ::EntityModifier<::PlayerPreMobTravelComponent> mod
);
// NOLINTEND

} // namespace PlayerPreMobTravelSystem
