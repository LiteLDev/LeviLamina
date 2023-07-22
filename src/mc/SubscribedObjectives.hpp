/**
 * @file  SubscribedObjectives.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SubscribedObjectives.
 *
 */
class SubscribedObjectives {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBSCRIBEDOBJECTIVES
public:
    class SubscribedObjectives& operator=(class SubscribedObjectives const &) = delete;
    SubscribedObjectives(class SubscribedObjectives const &) = delete;
    SubscribedObjectives() = delete;
#endif

public:
    /**
     * @symbol  ?addObjective\@SubscribedObjectives\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addObjective(std::string const &);
    /**
     * @symbol  ?removeObjective\@SubscribedObjectives\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void removeObjective(std::string const &);

};