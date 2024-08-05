#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InteractComponent {
public:
    // prevent constructor by default
    InteractComponent& operator=(InteractComponent const&);
    InteractComponent(InteractComponent const&);
    InteractComponent();

public:
    // NOLINTBEGIN
    MCAPI short getCooldownCounter() const;

    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    MCAPI void setCooldownCounter(short counter);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _runInteraction(
        class Actor&             owner,
        class Interaction const& desc,
        class Player&            player,
        class ActorInteraction&  interaction
    );

    MCAPI static void _tryDropItem(class BlockSource&, class Actor&, struct ItemSlotInfo const&);

    MCAPI static void
    _tryEquipItem(class Actor&, class Player&, class ItemStack&, class ItemStack const&, struct ItemSlotInfo const&, bool&, bool&);

    MCAPI static void _tryRepairItem(class Actor&, struct ItemSlotInfo const&, int);

    // NOLINTEND
};
