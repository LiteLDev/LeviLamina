#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FilterInput {

public:
    // prevent constructor by default
    FilterInput(FilterInput const&) = delete;
    FilterInput()                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0FilterInput\@\@QEAA\@H\@Z
     */
    MCAPI FilterInput(int);
    /**
     * @symbol ??4FilterInput\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class FilterInput& operator=(class FilterInput const&);
    /**
     * @symbol ??4FilterInput\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class FilterInput& operator=(class FilterInput&&);
    /**
     * @symbol ??1FilterInput\@\@QEAA\@XZ
     */
    MCAPI ~FilterInput();
    // NOLINTEND
};
