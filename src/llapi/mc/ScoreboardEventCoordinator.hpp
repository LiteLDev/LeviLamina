/**
 * @file  ScoreboardEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScoreboardEventCoordinator.
 *
 */
class ScoreboardEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREBOARDEVENTCOORDINATOR
public:
    class ScoreboardEventCoordinator& operator=(class ScoreboardEventCoordinator const &) = delete;
    ScoreboardEventCoordinator(class ScoreboardEventCoordinator const &) = delete;
    ScoreboardEventCoordinator() = delete;
#endif

public:
    /**
     * @symbol  ?sendOnObjectiveAdded\@ScoreboardEventCoordinator\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void sendOnObjectiveAdded(std::string const &);
    /**
     * @symbol  ?sendOnObjectiveRemoved\@ScoreboardEventCoordinator\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void sendOnObjectiveRemoved(std::string const &);
    /**
     * @symbol  ?sendOnScoreChanged\@ScoreboardEventCoordinator\@\@QEAAXAEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI void sendOnScoreChanged(struct ScoreboardId const &, std::string const &, int);
    /**
     * @symbol  ?sendOnScoreboardIdentityRemoved\@ScoreboardEventCoordinator\@\@QEAAXAEBUScoreboardId\@\@\@Z
     */
    MCAPI void sendOnScoreboardIdentityRemoved(struct ScoreboardId const &);

};