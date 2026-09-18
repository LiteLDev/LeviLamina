#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct NoActionTimeComponent;
struct OnGroundFlagComponent;
struct WasOnGroundFlagComponent;
// clang-format on

class PostAIUpdateSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void doPostAiUpdate(
        ::StrictEntityContext&                       entity,
        ::Optional<::OnGroundFlagComponent const>    onGround,
        ::NoActionTimeComponent&                     noActionTime,
        ::EntityModifier<::WasOnGroundFlagComponent> mod
    );
    // NOLINTEND
};
