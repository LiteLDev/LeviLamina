#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubscribedObjectives {
public:
    // prevent constructor by default
    SubscribedObjectives& operator=(SubscribedObjectives const&);
    SubscribedObjectives(SubscribedObjectives const&);
    SubscribedObjectives();

public:
    // NOLINTBEGIN
    // symbol:
    // ?addObjective@SubscribedObjectives@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addObjective(std::string const& objective);

    // symbol:
    // ?removeObjective@SubscribedObjectives@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void removeObjective(std::string const& objective);

    // symbol:
    // ?sendEvent@SubscribedObjectives@@QEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI void sendEvent(std::string const& objective, int score) const;

    // NOLINTEND
};
