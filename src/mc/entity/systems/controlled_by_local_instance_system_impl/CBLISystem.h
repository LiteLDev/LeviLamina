#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededFlag;
struct BoatFlag;
struct ControlledByLocalInstanceFlag;
struct HorseFlag;
struct LocalPlayerComponentFlag;
struct PlayerComponentFlag;
struct RecalculateControlledByLocalInstanceRequestFlag;
struct VehicleComponent;
// clang-format on

namespace ControlledByLocalInstanceSystemImpl {

struct CBLISystem {
public:
    // prevent constructor by default
    CBLISystem& operator=(CBLISystem const&);
    CBLISystem(CBLISystem const&);
    CBLISystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CBLISystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher& dispatcher);

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
    virtual void tick(class StrictExecutionContext<
                      struct Filter<
                          class FlagComponent<struct ActorMovementTickNeededFlag>,
                          class FlagComponent<struct BoatFlag>,
                          class FlagComponent<struct HorseFlag>,
                          class FlagComponent<struct PlayerComponentFlag>,
                          class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>>,
                      struct Read<
                          struct VehicleComponent,
                          struct ActorDataFlagComponent,
                          class FlagComponent<struct LocalPlayerComponentFlag>>,
                      struct Write<>,
                      struct AddRemove<class FlagComponent<struct ControlledByLocalInstanceFlag>>,
                      struct GlobalRead<>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>& strictContext);

    // vIndex: 6
    virtual void singleTick(
        class StrictExecutionContext<
            struct Filter<
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct BoatFlag>,
                class FlagComponent<struct HorseFlag>,
                class FlagComponent<struct PlayerComponentFlag>,
                class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>>,
            struct Read<
                struct VehicleComponent,
                struct ActorDataFlagComponent,
                class FlagComponent<struct LocalPlayerComponentFlag>>,
            struct Write<>,
            struct AddRemove<class FlagComponent<struct ControlledByLocalInstanceFlag>>,
            struct GlobalRead<>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& strictContext,
        class StrictEntityContext&    entity
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void registerEvents$(entt::dispatcher& dispatcher);

    MCAPI void singleTick$(
        class StrictExecutionContext<
            struct Filter<
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct BoatFlag>,
                class FlagComponent<struct HorseFlag>,
                class FlagComponent<struct PlayerComponentFlag>,
                class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>>,
            struct Read<
                struct VehicleComponent,
                struct ActorDataFlagComponent,
                class FlagComponent<struct LocalPlayerComponentFlag>>,
            struct Write<>,
            struct AddRemove<class FlagComponent<struct ControlledByLocalInstanceFlag>>,
            struct GlobalRead<>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& strictContext,
        class StrictEntityContext&    entity
    );

    MCAPI void tick$(class StrictExecutionContext<
                     struct Filter<
                         class FlagComponent<struct ActorMovementTickNeededFlag>,
                         class FlagComponent<struct BoatFlag>,
                         class FlagComponent<struct HorseFlag>,
                         class FlagComponent<struct PlayerComponentFlag>,
                         class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>>,
                     struct Read<
                         struct VehicleComponent,
                         struct ActorDataFlagComponent,
                         class FlagComponent<struct LocalPlayerComponentFlag>>,
                     struct Write<>,
                     struct AddRemove<class FlagComponent<struct ControlledByLocalInstanceFlag>>,
                     struct GlobalRead<>,
                     struct GlobalWrite<>,
                     struct EntityFactoryT<>>& strictContext);

    // NOLINTEND
};

}; // namespace ControlledByLocalInstanceSystemImpl
