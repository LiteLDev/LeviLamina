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

struct AccumulateSystem {
public:
    // prevent constructor by default
    AccumulateSystem& operator=(AccumulateSystem const&);
    AccumulateSystem(AccumulateSystem const&);
    AccumulateSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AccumulateSystem@ClientRewind@@UEAA@XZ
    virtual ~AccumulateSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?tick@AccumulateSystem@ClientRewind@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@U?$Read@UActorDataFlagComponent@@UActorDataHorseFlagComponent@@UActorDataJumpDurationComponent@@UActorDataBoundingBoxComponent@@UActorDataSeatOffsetComponent@@@@U?$Write@UReplayStateTrackerComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@$$V@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
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

    // vIndex: 6, symbol:
    // ?singleTick@AccumulateSystem@ClientRewind@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@U?$Read@UActorDataFlagComponent@@UActorDataHorseFlagComponent@@UActorDataJumpDurationComponent@@UActorDataBoundingBoxComponent@@UActorDataSeatOffsetComponent@@@@U?$Write@UReplayStateTrackerComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@$$V@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct Read<struct ActorDataFlagComponent, struct ActorDataHorseFlagComponent, struct ActorDataJumpDurationComponent, struct ActorDataBoundingBoxComponent, struct ActorDataSeatOffsetComponent>, struct Write<struct ReplayStateTrackerComponent>, struct AddRemove<>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);

    // symbol:
    // ?tickEntity@AccumulateSystem@ClientRewind@@SAXAEBVStrictEntityContext@@AEAUReplayStateTrackerComponent@@AEBV?$ViewT@VStrictEntityContext@@$$CBUActorDataFlagComponent@@V?$Optional@$$CBUActorDataHorseFlagComponent@@@@V?$Optional@$$CBUActorDataJumpDurationComponent@@@@V?$Optional@$$CBUActorDataBoundingBoxComponent@@@@V?$Optional@$$CBUActorDataSeatOffsetComponent@@@@@@@Z
    MCAPI static void
    tickEntity(class StrictEntityContext const&, struct ReplayStateTrackerComponent&, class ViewT<class StrictEntityContext, struct ActorDataFlagComponent const, class Optional<struct ActorDataHorseFlagComponent const>, class Optional<struct ActorDataJumpDurationComponent const>, class Optional<struct ActorDataBoundingBoxComponent const>, class Optional<struct ActorDataSeatOffsetComponent const>> const&);

    // NOLINTEND
};

}; // namespace ClientRewind
