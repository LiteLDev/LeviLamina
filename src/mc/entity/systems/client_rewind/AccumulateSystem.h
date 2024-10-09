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
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataBoundingBoxComponent;
struct ActorDataFlagComponent;
struct ActorDataHorseFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorDataSeatOffsetComponent;
struct ActorMovementTickNeededFlag;
struct ReplayStateTrackerComponent;
// clang-format on

namespace ClientRewind {

struct AccumulateSystem {
public:
    // prevent constructor by default
    AccumulateSystem& operator=(AccumulateSystem const&);
    AccumulateSystem(AccumulateSystem const&);
    AccumulateSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AccumulateSystem() = default;

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
                      struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                      struct Read<
                          struct ActorDataFlagComponent,
                          struct ActorDataHorseFlagComponent,
                          struct ActorDataJumpDurationComponent,
                          struct ActorDataBoundingBoxComponent,
                          struct ActorDataSeatOffsetComponent>,
                      struct Write<struct ReplayStateTrackerComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>& executionContext);

    // vIndex: 6
    virtual void singleTick(
        class StrictExecutionContext<
            struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>>,
            struct Read<
                struct ActorDataFlagComponent,
                struct ActorDataHorseFlagComponent,
                struct ActorDataJumpDurationComponent,
                struct ActorDataBoundingBoxComponent,
                struct ActorDataSeatOffsetComponent>,
            struct Write<struct ReplayStateTrackerComponent>,
            struct AddRemove<>,
            struct GlobalRead<>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& executionContext,
        class StrictEntityContext&    entityContext
    );

    MCAPI static void tickEntity(
        class StrictEntityContext const&    entity,
        struct ReplayStateTrackerComponent& tracker,
        class ViewT<
            class StrictEntityContext,
            struct ActorDataFlagComponent const,
            class Optional<struct ActorDataHorseFlagComponent const>,
            class Optional<struct ActorDataJumpDurationComponent const>,
            class Optional<struct ActorDataBoundingBoxComponent const>,
            class Optional<struct ActorDataSeatOffsetComponent const>> const& tracked
    );

    // NOLINTEND
};

}; // namespace ClientRewind
