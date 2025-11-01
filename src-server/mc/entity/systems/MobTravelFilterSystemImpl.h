#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct MobFlagComponent;
struct MobTravelComponent;
struct PassengerComponent;
// clang-format on

namespace MobTravelFilterSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void addMobTravelComponent(::StrictEntityContext const& context, ::EntityModifier<::MobTravelComponent> mod);

MCNAPI void tickMobTravelFilterSystem(::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent, ::MobFlagComponent>, ::Exclude<::PassengerComponent>> view, ::EntityModifier<::MobTravelComponent> mod);
// NOLINTEND

}
