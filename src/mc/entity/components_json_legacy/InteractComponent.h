#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/world/item/HandSlot.h"

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
    MCNAPI ::Interaction
    _runInteraction(::Actor& owner, ::InteractionDescription const& desc, ::Player& player, ::HandSlot handSlot);

    MCNAPI ::Interaction getInteraction(::Actor& owner, ::Player& player, ::HandSlot handSlot);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _trySendEquipmentSlot(::Actor& owner, ::SharedTypes::Legacy::EquipmentSlot equipmentSlot);
    // NOLINTEND
};
