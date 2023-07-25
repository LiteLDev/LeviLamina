#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FilterInputDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERINPUTDEFINITION
public:
    FilterInputDefinition& operator=(FilterInputDefinition const&) = delete;
    FilterInputDefinition(FilterInputDefinition const&)            = delete;
    FilterInputDefinition()                                        = delete;
#endif

public:
    /**
     * @symbol
     * ??0FilterInputDefinition\@\@QEAA\@VFilterInput\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI FilterInputDefinition(class FilterInput, std::string const&);
    /**
     * @symbol ??1FilterInputDefinition\@\@QEAA\@XZ
     */
    MCAPI ~FilterInputDefinition();
};
