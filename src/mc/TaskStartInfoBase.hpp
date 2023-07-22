/**
 * @file  TaskStartInfoBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure TaskStartInfoBase.
 *
 */
struct TaskStartInfoBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKSTARTINFOBASE
public:
    struct TaskStartInfoBase& operator=(struct TaskStartInfoBase const &) = delete;
    TaskStartInfoBase(struct TaskStartInfoBase const &) = delete;
    TaskStartInfoBase() = delete;
#endif

public:
    /**
     * @symbol  ?NoAffinity\@TaskStartInfoBase\@\@2Vid\@thread\@std\@\@B
     */
    MCAPI static class std::thread::id const NoAffinity;

};