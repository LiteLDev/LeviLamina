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
namespace ClientRewind { struct ApplyReplayStateTrackerRequestComponent; }
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorDataHorseFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorDataSeatOffsetComponent;
struct ActorMovementTickNeededFlag;
// clang-format on

namespace ClientRewind {

class ApplySystem {
public:
    // prevent constructor by default
    ApplySystem& operator=(ApplySystem const&);
    ApplySystem(ApplySystem const&);
    ApplySystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ApplySystem() = default;

    // vIndex: 1
    virtual void __unk_vfn_1();

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
    virtual void tick(class StrictExecutionContext<
                      struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                      struct Read<struct ClientRewind::ApplyReplayStateTrackerRequestComponent>,
                      struct Write<
                          struct ActorDataFlagComponent,
                          struct ActorDataHorseFlagComponent,
                          struct ActorDataJumpDurationComponent,
                          struct ActorDataBoundingBoxComponent,
                          struct ActorDataSeatOffsetComponent,
                          struct ActorDataDirtyFlagsComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);

    // vIndex: 6
    virtual void
    singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct Read<struct ClientRewind::ApplyReplayStateTrackerRequestComponent>, struct Write<struct ActorDataFlagComponent, struct ActorDataHorseFlagComponent, struct ActorDataJumpDurationComponent, struct ActorDataBoundingBoxComponent, struct ActorDataSeatOffsetComponent, struct ActorDataDirtyFlagsComponent>, struct AddRemove<>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);

    MCAPI static void tickEntity(
        class StrictEntityContext const&                              entity,
        struct ClientRewind::ApplyReplayStateTrackerRequestComponent& request,
        struct ActorDataDirtyFlagsComponent&                          dirtyFlags,
        class ViewT<
            class StrictEntityContext,
            struct ActorDataFlagComponent,
            class Optional<struct ActorDataHorseFlagComponent>,
            class Optional<struct ActorDataJumpDurationComponent>,
            class Optional<struct ActorDataBoundingBoxComponent>,
            class Optional<struct ActorDataSeatOffsetComponent>> const& tracked
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void
    singleTick$(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct Read<struct ClientRewind::ApplyReplayStateTrackerRequestComponent>, struct Write<struct ActorDataFlagComponent, struct ActorDataHorseFlagComponent, struct ActorDataJumpDurationComponent, struct ActorDataBoundingBoxComponent, struct ActorDataSeatOffsetComponent, struct ActorDataDirtyFlagsComponent>, struct AddRemove<>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);

    MCAPI void tick$(class StrictExecutionContext<
                     struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                     struct Read<struct ClientRewind::ApplyReplayStateTrackerRequestComponent>,
                     struct Write<
                         struct ActorDataFlagComponent,
                         struct ActorDataHorseFlagComponent,
                         struct ActorDataJumpDurationComponent,
                         struct ActorDataBoundingBoxComponent,
                         struct ActorDataSeatOffsetComponent,
                         struct ActorDataDirtyFlagsComponent>,
                     struct AddRemove<>,
                     struct GlobalRead<>,
                     struct GlobalWrite<>,
                     struct EntityFactoryT<>>&);

    // NOLINTEND
};

}; // namespace ClientRewind
