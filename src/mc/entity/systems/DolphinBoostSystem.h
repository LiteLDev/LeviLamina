#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct IsNearDolphinsFlagComponent;
struct ScanForDolphinFlagComponent;
struct ScanForDolphinTimerComponent;
struct SwimSpeedMultiplierComponent;
struct TickingSystemWithInfo;
// clang-format on

struct DolphinBoostSystem {
public:
    // prevent constructor by default
    DolphinBoostSystem& operator=(DolphinBoostSystem const&);
    DolphinBoostSystem(DolphinBoostSystem const&);
    DolphinBoostSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tickScan(
        ::StrictEntityContext const&                    context,
        ::ActorDataFlagComponent const&                 synchedActorDataComponent,
        ::ScanForDolphinTimerComponent&                 scanForDolphinTimerComponent,
        ::EntityModifier<::ScanForDolphinFlagComponent> modifier
    );

    MCAPI static void _tickSwimSpeedModifier(
        ::StrictEntityContext const&,
        ::ActorDataFlagComponent const&           synchedActorDataComponent,
        ::SwimSpeedMultiplierComponent&           swimSpeedMultiplierComponent,
        ::Optional<::ScanForDolphinFlagComponent> scanForDolphinFlagComponent,
        ::Optional<::IsNearDolphinsFlagComponent> isNearDolphinComponent
    );

    MCAPI static ::TickingSystemWithInfo createFindDolphinsSystem();

    MCAPI static ::TickingSystemWithInfo createScanSystem();

    MCAPI static ::TickingSystemWithInfo createSwimSpeedModifierSystem();
    // NOLINTEND
};
