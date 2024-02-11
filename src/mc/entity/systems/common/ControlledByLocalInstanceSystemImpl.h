#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace ControlledByLocalInstanceSystemImpl {
// NOLINTBEGIN
// symbol:
// ?_addOrRemoveCBLI@ControlledByLocalInstanceSystemImpl@@YAXAEBVStrictEntityContext@@V?$EntityModifier@V?$FlagComponent@UControlledByLocalInstanceFlag@@@@@@_N@Z
MCAPI void _addOrRemoveCBLI(
    class StrictEntityContext const&,
    class EntityModifier<class FlagComponent<struct ControlledByLocalInstanceFlag>>,
    bool
);

// symbol:
// ?_calculateBoatControlledByLocalInstanceSystem@ControlledByLocalInstanceSystemImpl@@YAXAEBVStrictEntityContext@@AEBUVehicleComponent@@AEBV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@V?$Optional@V?$FlagComponent@ULocalPlayerComponentFlag@@@@@@@@V?$EntityModifier@V?$FlagComponent@UControlledByLocalInstanceFlag@@@@@@P6AX0AEBV?$optional@VStrictEntityContext@@@std@@2V5@@Z@Z
MCAPI void _calculateBoatControlledByLocalInstanceSystem(
    class StrictEntityContext const&,
    struct VehicleComponent const&,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct PlayerComponentFlag>>,
        class Optional<class FlagComponent<struct LocalPlayerComponentFlag>>> const&,
    class EntityModifier<class FlagComponent<struct ControlledByLocalInstanceFlag>>,
    void (*)(class StrictEntityContext const&, std::optional<class StrictEntityContext> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>, class Optional<class FlagComponent<struct LocalPlayerComponentFlag>>> const&, class EntityModifier<class FlagComponent<struct ControlledByLocalInstanceFlag>>)
);

// symbol:
// ?_calculateHorseControlledByLocalInstanceSystem@ControlledByLocalInstanceSystemImpl@@YAXAEBVStrictEntityContext@@AEBUVehicleComponent@@AEBUActorDataFlagComponent@@AEBV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@V?$Optional@V?$FlagComponent@ULocalPlayerComponentFlag@@@@@@@@V?$EntityModifier@V?$FlagComponent@UControlledByLocalInstanceFlag@@@@@@P6AX0AEBV?$optional@VStrictEntityContext@@@std@@3V6@@Z@Z
MCAPI void _calculateHorseControlledByLocalInstanceSystem(
    class StrictEntityContext const&,
    struct VehicleComponent const&,
    struct ActorDataFlagComponent const&,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct PlayerComponentFlag>>,
        class Optional<class FlagComponent<struct LocalPlayerComponentFlag>>> const&,
    class EntityModifier<class FlagComponent<struct ControlledByLocalInstanceFlag>>,
    void (*)(class StrictEntityContext const&, std::optional<class StrictEntityContext> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>, class Optional<class FlagComponent<struct LocalPlayerComponentFlag>>> const&, class EntityModifier<class FlagComponent<struct ControlledByLocalInstanceFlag>>)
);

// symbol:
// ?setControlledByLocalInstanceClient@ControlledByLocalInstanceSystemImpl@@YAXAEBVStrictEntityContext@@V?$EntityModifier@V?$FlagComponent@UControlledByLocalInstanceFlag@@@@@@@Z
MCAPI void
setControlledByLocalInstanceClient(class StrictEntityContext const&, class EntityModifier<class FlagComponent<struct ControlledByLocalInstanceFlag>>);

// symbol:
// ?setControlledByLocalInstanceServer@ControlledByLocalInstanceSystemImpl@@YAXAEBVStrictEntityContext@@V?$EntityModifier@V?$FlagComponent@UControlledByLocalInstanceFlag@@@@@@@Z
MCAPI void
setControlledByLocalInstanceServer(class StrictEntityContext const&, class EntityModifier<class FlagComponent<struct ControlledByLocalInstanceFlag>>);

// symbol:
// ?setVehicleControlledByLocalInstanceClient@ControlledByLocalInstanceSystemImpl@@YAXAEBVStrictEntityContext@@AEBV?$optional@VStrictEntityContext@@@std@@AEBV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@V?$Optional@V?$FlagComponent@ULocalPlayerComponentFlag@@@@@@@@V?$EntityModifier@V?$FlagComponent@UControlledByLocalInstanceFlag@@@@@@@Z
MCAPI void setVehicleControlledByLocalInstanceClient(class StrictEntityContext const&, std::optional<class StrictEntityContext> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>, class Optional<class FlagComponent<struct LocalPlayerComponentFlag>>> const&, class EntityModifier<class FlagComponent<struct ControlledByLocalInstanceFlag>>);

// symbol:
// ?setVehicleControlledByLocalInstanceServer@ControlledByLocalInstanceSystemImpl@@YAXAEBVStrictEntityContext@@AEBV?$optional@VStrictEntityContext@@@std@@AEBV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@V?$Optional@V?$FlagComponent@ULocalPlayerComponentFlag@@@@@@@@V?$EntityModifier@V?$FlagComponent@UControlledByLocalInstanceFlag@@@@@@@Z
MCAPI void setVehicleControlledByLocalInstanceServer(class StrictEntityContext const&, std::optional<class StrictEntityContext> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>, class Optional<class FlagComponent<struct LocalPlayerComponentFlag>>> const&, class EntityModifier<class FlagComponent<struct ControlledByLocalInstanceFlag>>);
// NOLINTEND

}; // namespace ControlledByLocalInstanceSystemImpl
