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
    // ?_runInteraction@InteractComponent@@AEAA_NAEAVActor@@AEBUInteraction@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool _runInteraction(
        class Actor&              owner,
        struct Interaction const& desc,
        class Player&             player,
        class ActorInteraction&   interaction
    );

    // symbol: ?_tryDropItem@InteractComponent@@CAXAEAVBlockSource@@AEAVActor@@H@Z
    MCAPI static void _tryDropItem(class BlockSource&, class Actor&, int);

    // symbol: ?_tryEquipItem@InteractComponent@@CAXAEAVActor@@AEAVPlayer@@AEAVItemStack@@AEBV4@HAEA_N4@Z
    MCAPI static void
    _tryEquipItem(class Actor&, class Player&, class ItemStack&, class ItemStack const&, int, bool&, bool&);

    // NOLINTEND
};
