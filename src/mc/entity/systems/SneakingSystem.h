#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/world/components/FlagComponent.h"

class SneakingSystem {
public:
    // prevent constructor by default
    SneakingSystem& operator=(SneakingSystem const&);
    SneakingSystem(SneakingSystem const&);
    SneakingSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SneakingSystem@@UEAA@XZ
    virtual ~SneakingSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?tick@SneakingSystem@@EEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UActorTickedFlag@@@@@@U?$Read@V?$FlagComponent@UPlayerComponentFlag@@@@@@U?$Write@USneakingComponent@@VActorOwnerComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@$$V@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
    virtual void tick(class StrictExecutionContext<
                      struct Filter<class FlagComponent<struct ActorTickedFlag>>,
                      struct Read<class FlagComponent<struct PlayerComponentFlag>>,
                      struct Write<struct SneakingComponent, class ActorOwnerComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>& context);

    // symbol:
    // ?_tickSneakingSystem@SneakingSystem@@SAXAEAVStrictEntityContext@@AEBV?$FlagComponent@UPlayerComponentFlag@@@@AEAUSneakingComponent@@AEAVActorOwnerComponent@@@Z
    MCAPI static void
    _tickSneakingSystem(class StrictEntityContext&, class FlagComponent<struct PlayerComponentFlag> const&, struct SneakingComponent& sneaking, class ActorOwnerComponent&);

    // symbol: ?createSystem@SneakingSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
