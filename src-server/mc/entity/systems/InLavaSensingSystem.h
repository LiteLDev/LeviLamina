#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct UpdateWaterStateRequestComponent;
struct WasInLavaFlagComponent;
// clang-format on

struct InLavaSensingSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void doInLavaSensing(::StrictEntityContext const& entity, ::UpdateWaterStateRequestComponent const& updateWaterStateRequestComponent, ::EntityModifier<::WasInLavaFlagComponent> mod);

    MCNAPI static void singleTickSystem(::StrictEntityContext& entity, ::ViewT<::StrictEntityContext, ::UpdateWaterStateRequestComponent const> view, ::EntityModifier<::WasInLavaFlagComponent> mod);

    MCNAPI static void tickSystem(::ViewT<::StrictEntityContext, ::UpdateWaterStateRequestComponent const> view, ::EntityModifier<::WasInLavaFlagComponent> mod);
    // NOLINTEND

};
