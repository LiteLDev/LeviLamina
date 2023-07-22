/**
 * @file  AsyncTracker.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AsyncTracker.
 *
 */
class AsyncTracker {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ASYNCTRACKER
public:
    class AsyncTracker& operator=(class AsyncTracker const &) = delete;
    AsyncTracker(class AsyncTracker const &) = delete;
    AsyncTracker() = delete;
#endif

public:
    /**
     * @symbol  ?hasAsyncOperationTimedOut\@AsyncTracker\@\@QEAA_NXZ
     */
    MCAPI bool hasAsyncOperationTimedOut();

};