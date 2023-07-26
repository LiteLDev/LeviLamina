#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScoreboardEventCoordinator {

public:
    // prevent constructor by default
    ScoreboardEventCoordinator& operator=(ScoreboardEventCoordinator const&) = delete;
    ScoreboardEventCoordinator(ScoreboardEventCoordinator const&)            = delete;
    ScoreboardEventCoordinator()                                             = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCOREBOARDEVENTCOORDINATOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScoreboardEventCoordinator(); // NOLINT
#endif
    /**
     * @symbol
     * ?sendOnObjectiveAdded\@ScoreboardEventCoordinator\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void sendOnObjectiveAdded(std::string const&); // NOLINT
    /**
     * @symbol
     * ?sendOnObjectiveRemoved\@ScoreboardEventCoordinator\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void sendOnObjectiveRemoved(std::string const&); // NOLINT
    /**
     * @symbol
     * ?sendOnScoreChanged\@ScoreboardEventCoordinator\@\@QEAAXAEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI void sendOnScoreChanged(struct ScoreboardId const&, std::string const&, int); // NOLINT
    /**
     * @symbol ?sendOnScoreboardIdentityRemoved\@ScoreboardEventCoordinator\@\@QEAAXAEBUScoreboardId\@\@\@Z
     */
    MCAPI void sendOnScoreboardIdentityRemoved(struct ScoreboardId const&); // NOLINT
};
