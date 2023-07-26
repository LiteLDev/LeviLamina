#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubscribedObjectives {

public:
    // prevent constructor by default
    SubscribedObjectives& operator=(SubscribedObjectives const&) = delete;
    SubscribedObjectives(SubscribedObjectives const&)            = delete;
    SubscribedObjectives()                                       = delete;

public:
    /**
     * @symbol
     * ?addObjective\@SubscribedObjectives\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addObjective(std::string const&); // NOLINT
    /**
     * @symbol
     * ?removeObjective\@SubscribedObjectives\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void removeObjective(std::string const&); // NOLINT
    /**
     * @symbol
     * ?sendEvent\@SubscribedObjectives\@\@QEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI void sendEvent(std::string const&, int) const; // NOLINT
};
