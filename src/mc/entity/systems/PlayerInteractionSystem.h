#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class Player;
// clang-format on

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
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~InteractionMappingBase() = default;

        // vIndex: 1
        virtual bool getInteraction(::Actor& actor, ::Player& player, ::ActorInteraction& interaction);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI bool $getInteraction(::Actor& actor, ::Player& player, ::ActorInteraction& interaction);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk84c215;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInteractionSystem& operator=(PlayerInteractionSystem const&);
    PlayerInteractionSystem(PlayerInteractionSystem const&);
    PlayerInteractionSystem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool getInteraction(::Actor& actor, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND
};
