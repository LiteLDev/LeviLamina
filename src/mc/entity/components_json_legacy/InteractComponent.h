#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class Interaction;
class ItemStack;
class Player;
struct ItemSlotInfo;
// clang-format on

class InteractComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk206731;
    // NOLINTEND

public:
    // prevent constructor by default
    InteractComponent& operator=(InteractComponent const&);
    InteractComponent(InteractComponent const&);
    InteractComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool
    _runInteraction(::Actor& owner, ::Interaction const& desc, ::Player& player, ::ActorInteraction& interaction);

    MCFOLD short getCooldownCounter() const;

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCAPI void setCooldownCounter(short counter);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tryEquipItem(
        ::Actor&              owner,
        ::Player&             player,
        ::ItemStack&          usingItem,
        ::ItemStack const&    usedItemCopy,
        ::ItemSlotInfo const& itemSlotInfo,
        bool&                 useItemEventSent,
        bool&                 postponedReplace
    );
    // NOLINTEND
};
