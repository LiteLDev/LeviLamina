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
struct ControlledByLocalInstanceComponent;
struct MobTravelComponent;
struct PlayerComponent;
// clang-format on

struct MobTravelPlayerOrLocalFilterSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void tick(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::MobTravelComponent>,
            ::Exclude<::PlayerComponent, ::ControlledByLocalInstanceComponent>> view,
        ::EntityModifier<::MobTravelComponent>                                  mod
    );
    // NOLINTEND
};
