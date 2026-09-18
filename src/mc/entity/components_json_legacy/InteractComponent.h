#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Interaction;
class InteractionDescription;
class Player;
// clang-format on

class InteractComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short>                                    mCooldownCounter;
    ::ll::TypedStorage<8, 24, ::std::vector<::InteractionDescription>> mInteractions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Interaction _runInteraction(::Actor& owner, ::InteractionDescription const& desc, ::Player& player);

    MCAPI ::Interaction getInteraction(::Actor& owner, ::Player& player);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _trySendEquipmentSlot(::Actor& owner, ::SharedTypes::Legacy::EquipmentSlot equipmentSlot);
    // NOLINTEND
};
