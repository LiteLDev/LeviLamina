#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ErrorPathStack {

public:
    // prevent constructor by default
    ErrorPathStack& operator=(ErrorPathStack const&) = delete;
    ErrorPathStack(ErrorPathStack const&)            = delete;
    ErrorPathStack()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0ErrorPathStack\@\@QEAA\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@\@Z
     */
    MCAPI ErrorPathStack(std::vector<std::string>&, std::string const&);
    /**
     * @symbol ??1ErrorPathStack\@\@QEAA\@XZ
     */
    MCAPI ~ErrorPathStack();
    // NOLINTEND
};
