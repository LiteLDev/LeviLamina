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
class StrictEntityContext;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorDataHorseFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorDataSeatOffsetComponent;
struct ActorMovementTickNeededComponent;
namespace ClientRewind { struct ApplyReplayStateTrackerRequestComponent; }
// clang-format on

namespace ClientRewind {

struct ApplySystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                         ::Filter<::ActorMovementTickNeededComponent>,
                         ::Read<::ClientRewind::ApplyReplayStateTrackerRequestComponent>,
                         ::Write<
                             ::ActorDataFlagComponent,
                             ::ActorDataHorseFlagComponent,
                             ::ActorDataJumpDurationComponent,
                             ::ActorDataBoundingBoxComponent,
                             ::ActorDataSeatOffsetComponent,
                             ::ActorDataDirtyFlagsComponent>,
                         ::AddRemove<>,
                         ::GlobalRead<>,
                         ::GlobalWrite<>,
                         ::EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void tick(::StrictExecutionContext<
                      ::Filter<::ActorMovementTickNeededComponent>,
                      ::Read<::ClientRewind::ApplyReplayStateTrackerRequestComponent>,
                      ::Write<
                          ::ActorDataFlagComponent,
                          ::ActorDataHorseFlagComponent,
                          ::ActorDataJumpDurationComponent,
                          ::ActorDataBoundingBoxComponent,
                          ::ActorDataSeatOffsetComponent,
                          ::ActorDataDirtyFlagsComponent>,
                      ::AddRemove<>,
                      ::GlobalRead<>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>& executionContext) /*override*/;

    // vIndex: 6
    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<::ActorMovementTickNeededComponent>,
            ::Read<::ClientRewind::ApplyReplayStateTrackerRequestComponent>,
            ::Write<
                ::ActorDataFlagComponent,
                ::ActorDataHorseFlagComponent,
                ::ActorDataJumpDurationComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataSeatOffsetComponent,
                ::ActorDataDirtyFlagsComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    ) /*override*/;

    // vIndex: 0
    virtual ~ApplySystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void tickEntity(
        ::StrictEntityContext const&                             entity,
        ::ClientRewind::ApplyReplayStateTrackerRequestComponent& request,
        ::ActorDataDirtyFlagsComponent&                          dirtyFlags,
        ::ViewT<
            ::StrictEntityContext,
            ::ActorDataFlagComponent,
            ::Optional<::ActorDataHorseFlagComponent>,
            ::Optional<::ActorDataJumpDurationComponent>,
            ::Optional<::ActorDataBoundingBoxComponent>,
            ::Optional<::ActorDataSeatOffsetComponent>> const& tracked
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::StrictExecutionContext<
                     ::Filter<::ActorMovementTickNeededComponent>,
                     ::Read<::ClientRewind::ApplyReplayStateTrackerRequestComponent>,
                     ::Write<
                         ::ActorDataFlagComponent,
                         ::ActorDataHorseFlagComponent,
                         ::ActorDataJumpDurationComponent,
                         ::ActorDataBoundingBoxComponent,
                         ::ActorDataSeatOffsetComponent,
                         ::ActorDataDirtyFlagsComponent>,
                     ::AddRemove<>,
                     ::GlobalRead<>,
                     ::GlobalWrite<>,
                     ::EntityFactoryT<>>& executionContext);

    MCAPI void $singleTick(
        ::StrictExecutionContext<
            ::Filter<::ActorMovementTickNeededComponent>,
            ::Read<::ClientRewind::ApplyReplayStateTrackerRequestComponent>,
            ::Write<
                ::ActorDataFlagComponent,
                ::ActorDataHorseFlagComponent,
                ::ActorDataJumpDurationComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataSeatOffsetComponent,
                ::ActorDataDirtyFlagsComponent>,
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientRewind
