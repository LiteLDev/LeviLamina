#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"

namespace ControlledByLocalInstanceSystemImpl {
// NOLINTBEGIN
MCAPI void _addOrRemoveCBLI(
    class StrictEntityContext const&                                                entity,
    class EntityModifier<class FlagComponent<struct ControlledByLocalInstanceFlag>> modifier,
    bool                                                                            isLocallyControlled
);

MCAPI void _calculateBoatControlledByLocalInstanceSystem(
    class StrictEntityContext const& entity,
    struct VehicleComponent const&   vehicleComponent,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct PlayerComponentFlag>>,
        class Optional<class FlagComponent<struct LocalPlayerComponentFlag>>> const& players,
    class EntityModifier<class FlagComponent<struct ControlledByLocalInstanceFlag>>  modifier,
    void (*setCBLI)(class StrictEntityContext const&, std::optional<class StrictEntityContext> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>, class Optional<class FlagComponent<struct LocalPlayerComponentFlag>>> const&, class EntityModifier<class FlagComponent<struct ControlledByLocalInstanceFlag>>)
);

MCAPI void _calculateHorseControlledByLocalInstanceSystem(
    class StrictEntityContext const&     entity,
    struct VehicleComponent const&       vehicleComponent,
    struct ActorDataFlagComponent const& actorData,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct PlayerComponentFlag>>,
        class Optional<class FlagComponent<struct LocalPlayerComponentFlag>>> const& players,
    class EntityModifier<class FlagComponent<struct ControlledByLocalInstanceFlag>>  modifier,
    void (*setCBLI)(class StrictEntityContext const&, std::optional<class StrictEntityContext> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>, class Optional<class FlagComponent<struct LocalPlayerComponentFlag>>> const&, class EntityModifier<class FlagComponent<struct ControlledByLocalInstanceFlag>>)
);

MCAPI void setControlledByLocalInstanceClient(
    class StrictEntityContext const&                                                entity,
    class EntityModifier<class FlagComponent<struct ControlledByLocalInstanceFlag>> modifier
);

MCAPI void setControlledByLocalInstanceServer(
    class StrictEntityContext const&                                                entity,
    class EntityModifier<class FlagComponent<struct ControlledByLocalInstanceFlag>> modifier
);

MCAPI void setVehicleControlledByLocalInstanceClient(
    class StrictEntityContext const&                entity,
    std::optional<class StrictEntityContext> const& controllingPlayer,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct PlayerComponentFlag>>,
        class Optional<class FlagComponent<struct LocalPlayerComponentFlag>>> const& playerView,
    class EntityModifier<class FlagComponent<struct ControlledByLocalInstanceFlag>>  modifier
);

MCAPI void setVehicleControlledByLocalInstanceServer(
    class StrictEntityContext const&                entity,
    std::optional<class StrictEntityContext> const& controllingPlayer,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct PlayerComponentFlag>>,
        class Optional<class FlagComponent<struct LocalPlayerComponentFlag>>> const& playerView,
    class EntityModifier<class FlagComponent<struct ControlledByLocalInstanceFlag>>  modifier
);
// NOLINTEND

}; // namespace ControlledByLocalInstanceSystemImpl
