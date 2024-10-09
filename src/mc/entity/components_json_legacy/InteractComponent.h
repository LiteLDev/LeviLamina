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

    MCAPI static void
    _tryDropItem(class BlockSource& region, class Actor& owner, struct ItemSlotInfo const& itemSlotInfo);

    MCAPI static void _tryEquipItem(
        class Actor&               owner,
        class Player&              player,
        class ItemStack&           usingItem,
        class ItemStack const&     usedItemCopy,
        struct ItemSlotInfo const& itemSlotInfo,
        bool&                      useItemEventSent,
        bool&                      postponedReplace
    );

    MCAPI static void _tryRepairItem(class Actor& owner, struct ItemSlotInfo const& itemSlotInfo, int amount);

    // NOLINTEND
};
