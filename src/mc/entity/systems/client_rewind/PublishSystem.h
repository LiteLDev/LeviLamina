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
class ReplayStateComponent;
struct ActorDataBoundingBoxComponent;
struct ActorDataFlagComponent;
struct ActorDataHorseFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorDataSeatOffsetComponent;
struct InterpolateMovementNeededComponent;
struct ReplayStateTrackerComponent;
// clang-format on

namespace ClientRewind {

struct PublishSystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                           ::Filter<::InterpolateMovementNeededComponent>,
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
    // PublishSystem inner types define
    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<::InterpolateMovementNeededComponent>,
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
        ::EntityFactoryT<>>>;

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::InterpolateMovementNeededComponent>,
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
            ::EntityFactoryT<>>&
    ) /*override*/;
#else // LL_PLAT_C
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::InterpolateMovementNeededComponent>,
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
#endif

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::InterpolateMovementNeededComponent>,
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
