#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class IllagerBeastPostAIStepSystem {
public:
    // prevent constructor by default
    IllagerBeastPostAIStepSystem& operator=(IllagerBeastPostAIStepSystem const&);
    IllagerBeastPostAIStepSystem(IllagerBeastPostAIStepSystem const&);
    IllagerBeastPostAIStepSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@IllagerBeastPostAIStepSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doIllagerBeastPostAIStepSystem@IllagerBeastPostAIStepSystem@@CAXAEBVStrictEntityContext@@AEBUStateVectorComponent@@AEAUSubBBsComponent@@@Z
    MCAPI static void
    _doIllagerBeastPostAIStepSystem(class StrictEntityContext const&, struct StateVectorComponent const&, struct SubBBsComponent&);

    // symbol:
    // ?_tickIllagerBeastPostAIStepSystem@IllagerBeastPostAIStepSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UIllagerBeastFlag@@@@@@$$CBUStateVectorComponent@@USubBBsComponent@@@@@Z
    MCAPI static void _tickIllagerBeastPostAIStepSystem(class ViewT<
                                                        class StrictEntityContext,
                                                        struct Include<
                                                            class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                            class FlagComponent<struct IllagerBeastFlag>>,
                                                        struct StateVectorComponent const,
                                                        struct SubBBsComponent> view);

    // NOLINTEND
};
