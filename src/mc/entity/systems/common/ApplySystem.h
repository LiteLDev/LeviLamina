#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/world/components/FlagComponent.h"

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

    MCAPI static void tickEntity(class StrictEntityContext const&, struct ClientRewind::ApplyReplayStateTrackerRequestComponent&, struct ActorDataDirtyFlagsComponent&, class ViewT<class StrictEntityContext, struct ActorDataFlagComponent, class Optional<struct ActorDataHorseFlagComponent>, class Optional<struct ActorDataJumpDurationComponent>, class Optional<struct ActorDataBoundingBoxComponent>, class Optional<struct ActorDataSeatOffsetComponent>> const&);

    // NOLINTEND
};

}; // namespace ClientRewind
