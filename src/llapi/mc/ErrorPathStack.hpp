/**
 * @file  ErrorPathStack.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ErrorPathStack.
 *
 */
class ErrorPathStack {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ERRORPATHSTACK
public:
    class ErrorPathStack& operator=(class ErrorPathStack const &) = delete;
    ErrorPathStack(class ErrorPathStack const &) = delete;
    ErrorPathStack() = delete;
#endif

public:
    /**
     * @symbol  ??0ErrorPathStack\@\@QEAA\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@\@Z
     */
    MCAPI ErrorPathStack(std::vector<std::string> &, std::string const &);
    /**
     * @symbol  ??1ErrorPathStack\@\@QEAA\@XZ
     */
    MCAPI ~ErrorPathStack();

};