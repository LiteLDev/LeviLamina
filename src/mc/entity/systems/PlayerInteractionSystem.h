#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerInteractionSystem {
public:
    // PlayerInteractionSystem inner types declare
    // clang-format off
    struct InteractionMappingBase;
    // clang-format on

    // PlayerInteractionSystem inner types define
    struct InteractionMappingBase {
    public:
        // prevent constructor by default
        InteractionMappingBase& operator=(InteractionMappingBase const&);
        InteractionMappingBase(InteractionMappingBase const&);
        InteractionMappingBase();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1InteractionMappingBase@@@UEAA@XZ
        virtual ~InteractionMappingBase();

        // vIndex: 1, symbol:
        // ?getInteraction@InteractionMappingBase@PlayerInteractionSystem@@UEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
        virtual bool getInteraction(class Actor&, class Player&, class ActorInteraction&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PlayerInteractionSystem& operator=(PlayerInteractionSystem const&);
    PlayerInteractionSystem(PlayerInteractionSystem const&);
    PlayerInteractionSystem();

public:
    // NOLINTBEGIN
    // symbol: ?getInteraction@PlayerInteractionSystem@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);

    // NOLINTEND
};
