#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HasItemFilter {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HASITEMFILTER
public:
    HasItemFilter& operator=(HasItemFilter const&) = delete;
    HasItemFilter(HasItemFilter const&)            = delete;
    HasItemFilter()                                = delete;
#endif

public:
    /**
     * @symbol ??0HasItemFilter\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI HasItemFilter(struct HasItemFilter&&);
    /**
     * @symbol ??1HasItemFilter\@\@QEAA\@XZ
     */
    MCAPI ~HasItemFilter();
};
