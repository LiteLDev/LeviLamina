#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FilterInput {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERINPUT
public:
    FilterInput(FilterInput const&) = delete;
    FilterInput()                   = delete;
#endif

public:
    /**
     * @symbol ??0FilterInput\@\@QEAA\@H\@Z
     */
    MCAPI FilterInput(int);
    /**
     * @symbol ??4FilterInput\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class FilterInput& operator=(class FilterInput&&);
    /**
     * @symbol ??4FilterInput\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class FilterInput& operator=(class FilterInput const&);
    /**
     * @symbol ??1FilterInput\@\@QEAA\@XZ
     */
    MCAPI ~FilterInput();
};
