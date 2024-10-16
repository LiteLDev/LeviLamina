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
        // vIndex: 0
        virtual ~InteractionMappingBase() = default;

        // vIndex: 1
        virtual bool getInteraction(class Actor&, class Player&, class ActorInteraction&);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** vftable();

        MCAPI bool getInteraction$(class Actor&, class Player&, class ActorInteraction&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PlayerInteractionSystem& operator=(PlayerInteractionSystem const&);
    PlayerInteractionSystem(PlayerInteractionSystem const&);
    PlayerInteractionSystem();

public:
    // NOLINTBEGIN
    MCAPI bool getInteraction(class Actor& actor, class Player& player, class ActorInteraction& interaction);

    // NOLINTEND
};
