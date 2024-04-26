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
    // symbol: ?getCooldownCounter@InteractComponent@@QEBAFXZ
    MCAPI short getCooldownCounter() const;

    // symbol: ?getInteraction@InteractComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    // symbol: ?setCooldownCounter@InteractComponent@@QEAAXF@Z
    MCAPI void setCooldownCounter(short counter);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_runInteraction@InteractComponent@@AEAA_NAEAVActor@@AEBVInteraction@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool _runInteraction(
        class Actor&             owner,
        class Interaction const& desc,
        class Player&            player,
        class ActorInteraction&  interaction
    );

    // symbol: ?_tryDropItem@InteractComponent@@CAXAEAVBlockSource@@AEAVActor@@AEBUItemSlotInfo@@@Z
    MCAPI static void _tryDropItem(class BlockSource&, class Actor&, struct ItemSlotInfo const&);

    // symbol:
    // ?_tryEquipItem@InteractComponent@@CAXAEAVActor@@AEAVPlayer@@AEAVItemStack@@AEBV4@AEBUItemSlotInfo@@AEA_N5@Z
    MCAPI static void
    _tryEquipItem(class Actor&, class Player&, class ItemStack&, class ItemStack const&, struct ItemSlotInfo const&, bool&, bool&);

    // symbol: ?_tryRepairItem@InteractComponent@@CAXAEAVActor@@AEBUItemSlotInfo@@H@Z
    MCAPI static void _tryRepairItem(class Actor&, struct ItemSlotInfo const&, int);

    // NOLINTEND
};
