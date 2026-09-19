#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Interaction;
class Player;
// clang-format on

struct LeashableToComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCanRetrieveFrom;
    ::ll::TypedStorage<1, 1, bool> mCanLeashToWithoutSneaking;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Interaction getInteraction(::Actor& owner, ::Player& player);
    // NOLINTEND
};
