#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FilterInputs {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERINPUTS
public:
    FilterInputs& operator=(FilterInputs const&) = delete;
    FilterInputs(FilterInputs const&)            = delete;
    FilterInputs()                               = delete;
#endif

public:
    /**
     * @symbol ??1FilterInputs\@\@QEAA\@XZ
     */
    MCAPI ~FilterInputs();
};
