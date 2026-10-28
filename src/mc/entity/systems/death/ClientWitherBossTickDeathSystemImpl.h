#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
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
struct ActorTickedComponent;
struct DeathTickingComponent;
struct OverlayAlphaComponent;
struct ShieldFlickerComponent;
struct SwellComponent;
struct SynchedActorDataComponent;
struct TickDeathNeededComponent;
struct WitherBossFlagComponent;
// clang-format on

struct ClientWitherBossTickDeathSystemImpl
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::WitherBossFlagComponent>,
      ::Read<::DeathTickingComponent>,
      ::Write<::OverlayAlphaComponent, ::ShieldFlickerComponent, ::SwellComponent, ::SynchedActorDataComponent>,
      ::AddRemove<>,
      ::GlobalRead<>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
public:
    // ClientWitherBossTickDeathSystemImpl inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // ClientWitherBossTickDeathSystemImpl inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            104,
            ::ViewT<
                ::StrictEntityContext,
                ::Include<::ActorTickedComponent, ::TickDeathNeededComponent, ::WitherBossFlagComponent>,
                ::DeathTickingComponent const,
                ::OverlayAlphaComponent,
                ::ShieldFlickerComponent,
                ::SwellComponent,
                ::SynchedActorDataComponent>>
            mDeathView;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 112, ::std::optional<::ClientWitherBossTickDeathSystemImpl::Views>> mViews;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::WitherBossFlagComponent>,
            ::Read<::DeathTickingComponent>,
            ::Write<::OverlayAlphaComponent, ::ShieldFlickerComponent, ::SwellComponent, ::SynchedActorDataComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tick(
        ::StrictEntityContext const&,
        ::DeathTickingComponent const& deathTicking,
        ::OverlayAlphaComponent&       overlayAlpha,
        ::ShieldFlickerComponent&      shieldFlicker,
        ::SwellComponent&              swell,
        ::SynchedActorDataComponent&   synchedActorData
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::WitherBossFlagComponent>,
            ::Read<::DeathTickingComponent>,
            ::Write<::OverlayAlphaComponent, ::ShieldFlickerComponent, ::SwellComponent, ::SynchedActorDataComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    );


    // NOLINTEND
};
