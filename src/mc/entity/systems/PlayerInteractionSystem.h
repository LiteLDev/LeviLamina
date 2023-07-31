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
        InteractionMappingBase& operator=(InteractionMappingBase const&) = delete;
        InteractionMappingBase(InteractionMappingBase const&)            = delete;
        InteractionMappingBase()                                         = delete;

    public:
        // NOLINTBEGIN
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0();
        /**
         * @vftbl 1
         * @symbol
         * ?getInteraction\@InteractionMappingBase\@PlayerInteractionSystem\@\@UEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
         */
        virtual bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    PlayerInteractionSystem& operator=(PlayerInteractionSystem const&) = delete;
    PlayerInteractionSystem(PlayerInteractionSystem const&)            = delete;
    PlayerInteractionSystem()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getInteraction\@PlayerInteractionSystem\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
    // NOLINTEND
};
