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
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct BoatFlagComponent;
struct ControlledByLocalInstanceComponent;
struct HorseFlagComponent;
struct LocalPlayerComponent;
struct PlayerComponent;
struct RecalculateControlledByLocalInstanceRequestComponent;
struct VehicleComponent;
// clang-format on

namespace ControlledByLocalInstanceSystemImpl {

struct CBLISystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                        ::Filter<
                            ::ActorMovementTickNeededComponent,
                            ::BoatFlagComponent,
                            ::HorseFlagComponent,
                            ::PlayerComponent,
                            ::RecalculateControlledByLocalInstanceRequestComponent>,
                        ::Read<::VehicleComponent, ::ActorDataFlagComponent, ::LocalPlayerComponent>,
                        ::Write<>,
                        ::AddRemove<::ControlledByLocalInstanceComponent>,
                        ::GlobalRead<>,
                        ::GlobalWrite<>,
                        ::EntityFactoryT<>>> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk34b53b;
    ::ll::UntypedStorage<8, 8> mUnkabd3ce;
    ::ll::UntypedStorage<8, 8> mUnk2692f8;
    ::ll::UntypedStorage<8, 8> mUnk7ebf3b;
    // NOLINTEND

public:
    // prevent constructor by default
    CBLISystem& operator=(CBLISystem const&);
    CBLISystem(CBLISystem const&);
    CBLISystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void tick(::StrictExecutionContext<
                      ::Filter<
                          ::ActorMovementTickNeededComponent,
                          ::BoatFlagComponent,
                          ::HorseFlagComponent,
                          ::PlayerComponent,
                          ::RecalculateControlledByLocalInstanceRequestComponent>,
                      ::Read<::VehicleComponent, ::ActorDataFlagComponent, ::LocalPlayerComponent>,
                      ::Write<>,
                      ::AddRemove<::ControlledByLocalInstanceComponent>,
                      ::GlobalRead<>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>& strictContext) /*override*/;

    // vIndex: 6
    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<
                ::ActorMovementTickNeededComponent,
                ::BoatFlagComponent,
                ::HorseFlagComponent,
                ::PlayerComponent,
                ::RecalculateControlledByLocalInstanceRequestComponent>,
            ::Read<::VehicleComponent, ::ActorDataFlagComponent, ::LocalPlayerComponent>,
            ::Write<>,
            ::AddRemove<::ControlledByLocalInstanceComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& strictContext,
        ::StrictEntityContext&   entity
    ) /*override*/;

    // vIndex: 0
    virtual ~CBLISystem() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::StrictExecutionContext<
                     ::Filter<
                         ::ActorMovementTickNeededComponent,
                         ::BoatFlagComponent,
                         ::HorseFlagComponent,
                         ::PlayerComponent,
                         ::RecalculateControlledByLocalInstanceRequestComponent>,
                     ::Read<::VehicleComponent, ::ActorDataFlagComponent, ::LocalPlayerComponent>,
                     ::Write<>,
                     ::AddRemove<::ControlledByLocalInstanceComponent>,
                     ::GlobalRead<>,
                     ::GlobalWrite<>,
                     ::EntityFactoryT<>>& strictContext);

    MCAPI void $singleTick(
        ::StrictExecutionContext<
            ::Filter<
                ::ActorMovementTickNeededComponent,
                ::BoatFlagComponent,
                ::HorseFlagComponent,
                ::PlayerComponent,
                ::RecalculateControlledByLocalInstanceRequestComponent>,
            ::Read<::VehicleComponent, ::ActorDataFlagComponent, ::LocalPlayerComponent>,
            ::Write<>,
            ::AddRemove<::ControlledByLocalInstanceComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& strictContext,
        ::StrictEntityContext&   entity
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ControlledByLocalInstanceSystemImpl
