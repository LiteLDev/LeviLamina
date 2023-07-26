#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HasItemFilter {

public:
    // prevent constructor by default
    HasItemFilter& operator=(HasItemFilter const&) = delete;
    HasItemFilter(HasItemFilter const&)            = delete;
    HasItemFilter()                                = delete;

public:
    /**
     * @symbol ??0HasItemFilter\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI HasItemFilter(struct HasItemFilter&&); // NOLINT
    /**
     * @symbol ??1HasItemFilter\@\@QEAA\@XZ
     */
    MCAPI ~HasItemFilter(); // NOLINT
};
