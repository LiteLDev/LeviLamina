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
    // CBLISystem inner types define
    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
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
        ::EntityFactoryT<>>>;

    using SingleTickCallback = void (*)(
        ::StrictEntityContext&,
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
            ::EntityFactoryT<>>&,
        void (*)(::StrictEntityContext const&, ::EntityModifier<::ControlledByLocalInstanceComponent>),
        void (*)(
            ::StrictEntityContext const&,
            ::std::optional<::StrictEntityContext> const&,
            ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::Optional<::LocalPlayerComponent>> const&,
            ::EntityModifier<::ControlledByLocalInstanceComponent>
        )
    );

    using TickCallback = void (*)(
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
            ::EntityFactoryT<>>&,
        void (*)(::StrictEntityContext const&, ::EntityModifier<::ControlledByLocalInstanceComponent>),
        void (*)(
            ::StrictEntityContext const&,
            ::std::optional<::StrictEntityContext> const&,
            ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::Optional<::LocalPlayerComponent>> const&,
            ::EntityModifier<::ControlledByLocalInstanceComponent>
        )
    );

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        8,
        void (*const)(
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
                ::EntityFactoryT<>>&,
            void (*)(::StrictEntityContext const&, ::EntityModifier<::ControlledByLocalInstanceComponent>),
            void (*)(
                ::StrictEntityContext const&,
                ::std::optional<::StrictEntityContext> const&,
                ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::Optional<::LocalPlayerComponent>> const&,
                ::EntityModifier<::ControlledByLocalInstanceComponent>
            )
        )>
        mTick;
    ::ll::TypedStorage<
        8,
        8,
        void (*const)(
            ::StrictEntityContext&,
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
                ::EntityFactoryT<>>&,
            void (*)(::StrictEntityContext const&, ::EntityModifier<::ControlledByLocalInstanceComponent>),
            void (*)(
                ::StrictEntityContext const&,
                ::std::optional<::StrictEntityContext> const&,
                ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::Optional<::LocalPlayerComponent>> const&,
                ::EntityModifier<::ControlledByLocalInstanceComponent>
            )
        )>
        mSingleTick;
    ::ll::TypedStorage<
        8,
        8,
        void (*const)(::StrictEntityContext const&, ::EntityModifier<::ControlledByLocalInstanceComponent>)>
        mSetCBLI;
    ::ll::TypedStorage<
        8,
        8,
        void (*const)(
            ::StrictEntityContext const&,
            ::std::optional<::StrictEntityContext> const&,
            ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::Optional<::LocalPlayerComponent>> const&,
            ::EntityModifier<::ControlledByLocalInstanceComponent>
        )>
        mSetVehicleCBLI;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
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
            ::EntityFactoryT<>>& strictContext
    ) /*override*/;

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

    virtual ~CBLISystem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
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
            ::EntityFactoryT<>>& strictContext
    );

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
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ControlledByLocalInstanceSystemImpl
