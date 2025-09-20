#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
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

    // vIndex: 0
    virtual ~ClientWitherBossTickDeathSystemImpl() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tick(
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
    MCNAPI void $tick(
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
