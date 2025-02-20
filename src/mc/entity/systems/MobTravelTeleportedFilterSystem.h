#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct HasTeleportedFlagComponent;
struct MobTravelComponent;
// clang-format on

struct MobTravelTeleportedFilterSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void tick(
        ::ViewT<::StrictEntityContext, ::Include<::HasTeleportedFlagComponent, ::MobTravelComponent>> view,
        ::EntityModifier<::MobTravelComponent>                                                        mod
    );
    // NOLINTEND
};
