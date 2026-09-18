#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Interaction;
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

        virtual ::Interaction getInteraction(::Actor& actor, ::Player& player) const = 0;
        // NOLINTEND
    };

    template <typename T0>
    struct InteractionMapping {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::PlayerInteractionSystem::InteractionMappingBase>>>
        mInteractionMappings;
    // NOLINTEND
};
