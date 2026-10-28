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
class ActorOwnerComponent;
class StrictEntityContext;
struct UpdateWaterStateRequestComponent;
// clang-format on

namespace ServerStandInCauldronSystem {

class SystemImpl : public ::IStrictTickingSystem<::StrictExecutionContext<
                       ::Filter<::UpdateWaterStateRequestComponent>,
                       ::Read<::ActorOwnerComponent>,
                       ::Write<>,
                       ::AddRemove<>,
                       ::GlobalRead<>,
                       ::GlobalWrite<>,
                       ::EntityFactoryT<>>> {
public:
    // SystemImpl inner types define
    using ViewType =
        ::ViewT<::StrictEntityContext, ::Include<::UpdateWaterStateRequestComponent>, ::ActorOwnerComponent>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::optional<
            ::ViewT<::StrictEntityContext, ::Include<::UpdateWaterStateRequestComponent>, ::ActorOwnerComponent>>>
        mView;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::UpdateWaterStateRequestComponent>,
            ::Read<::ActorOwnerComponent>,
            ::Write<>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    ) /*override*/;

    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<::UpdateWaterStateRequestComponent>,
            ::Read<::ActorOwnerComponent>,
            ::Write<>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _checkInsideCauldron(::ActorOwnerComponent& actorOwner);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::UpdateWaterStateRequestComponent>,
            ::Read<::ActorOwnerComponent>,
            ::Write<>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    );

    MCAPI void $singleTick(
        ::StrictExecutionContext<
            ::Filter<::UpdateWaterStateRequestComponent>,
            ::Read<::ActorOwnerComponent>,
            ::Write<>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ServerStandInCauldronSystem
