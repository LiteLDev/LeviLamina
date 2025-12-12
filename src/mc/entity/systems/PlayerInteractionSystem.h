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
    template<typename T0> struct InteractionMapping;
    // clang-format on

    // PlayerInteractionSystem inner types define
    struct InteractionMappingBase {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~InteractionMappingBase() = default;

        virtual bool getInteraction(::Actor& actor, ::Player& player, ::ActorInteraction& interaction);
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI bool $getInteraction(::Actor& actor, ::Player& player, ::ActorInteraction& interaction);


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    template <typename T0>
    struct InteractionMapping {};

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
};
