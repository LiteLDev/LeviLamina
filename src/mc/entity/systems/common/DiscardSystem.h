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
struct ActorDataBoundingBoxComponent;
struct ActorDataFlagComponent;
struct ActorDataHorseFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorDataSeatOffsetComponent;
struct ActorMovementTickNeededFlag;
struct ReplayStateTrackerComponent;
// clang-format on

namespace ClientRewind {

struct DiscardSystem {
public:
    // prevent constructor by default
    DiscardSystem& operator=(DiscardSystem const&);
    DiscardSystem(DiscardSystem const&);
    DiscardSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DiscardSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher&);

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
                      struct EntityFactoryT<>>&);

    // vIndex: 6
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct Read<struct ActorDataFlagComponent, struct ActorDataHorseFlagComponent, struct ActorDataJumpDurationComponent, struct ActorDataBoundingBoxComponent, struct ActorDataSeatOffsetComponent>, struct Write<struct ReplayStateTrackerComponent>, struct AddRemove<>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);

    MCAPI static void
    tickEntity(class StrictEntityContext const&, struct ReplayStateTrackerComponent&, class ViewT<class StrictEntityContext, struct ActorDataFlagComponent const, class Optional<struct ActorDataHorseFlagComponent const>, class Optional<struct ActorDataJumpDurationComponent const>, class Optional<struct ActorDataBoundingBoxComponent const>, class Optional<struct ActorDataSeatOffsetComponent const>> const&);

    // NOLINTEND
};

}; // namespace ClientRewind
