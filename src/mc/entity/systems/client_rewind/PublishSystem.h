#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
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
class ReplayStateComponent;
class StrictEntityContext;
struct ActorDataBoundingBoxComponent;
struct ActorDataFlagComponent;
struct ActorDataHorseFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorDataSeatOffsetComponent;
struct ActorMovementTickNeededComponent;
struct ReplayStateTrackerComponent;
// clang-format on

namespace ClientRewind {

struct PublishSystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                           ::Filter<::ActorMovementTickNeededComponent>,
                           ::Read<
                               ::ActorDataFlagComponent,
                               ::ActorDataHorseFlagComponent,
                               ::ActorDataJumpDurationComponent,
                               ::ActorDataBoundingBoxComponent,
                               ::ActorDataSeatOffsetComponent>,
                           ::Write<::ReplayStateTrackerComponent, ::ReplayStateComponent>,
                           ::AddRemove<>,
                           ::GlobalRead<>,
                           ::GlobalWrite<>,
                           ::EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::ActorMovementTickNeededComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDataHorseFlagComponent,
                ::ActorDataJumpDurationComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataSeatOffsetComponent>,
            ::Write<::ReplayStateTrackerComponent, ::ReplayStateComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    ) /*override*/;

    virtual ~PublishSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void tickEntity(
        ::StrictEntityContext const&   entity,
        ::ReplayStateComponent&        replay,
        ::ReplayStateTrackerComponent& tracker,
        ::ViewT<
            ::StrictEntityContext,
            ::ActorDataFlagComponent const,
            ::Optional<::ActorDataHorseFlagComponent const>,
            ::Optional<::ActorDataJumpDurationComponent const>,
            ::Optional<::ActorDataBoundingBoxComponent const>,
            ::Optional<::ActorDataSeatOffsetComponent const>> const& tracked
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::ActorMovementTickNeededComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDataHorseFlagComponent,
                ::ActorDataJumpDurationComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataSeatOffsetComponent>,
            ::Write<::ReplayStateTrackerComponent, ::ReplayStateComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    );
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientRewind
