#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/HandSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Interaction;
class Player;
// clang-format on

class BucketableComponent {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Interaction getInteraction(::Actor& owner, ::Player& player, ::HandSlot handSlot);
    // NOLINTEND
};
