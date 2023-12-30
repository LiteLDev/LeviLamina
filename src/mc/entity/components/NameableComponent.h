#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NameableComponent {
public:
    // prevent constructor by default
    NameableComponent& operator=(NameableComponent const&);
    NameableComponent(NameableComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0NameableComponent@@QEAA@XZ
    MCAPI NameableComponent();

    // symbol: ?getInteraction@NameableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    // symbol:
    // ?nameEntity@NameableComponent@@QEAAXAEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void nameEntity(class Actor& owner, std::string const& name);

    // NOLINTEND
};
