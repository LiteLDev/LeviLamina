/**
 * @file  FilterInputDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class FilterInputDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERINPUTDEFINITION
public:
    class FilterInputDefinition& operator=(class FilterInputDefinition const &) = delete;
    FilterInputDefinition(class FilterInputDefinition const &) = delete;
    FilterInputDefinition() = delete;
#endif

public:
    /**
     * @symbol ??0FilterInputDefinition\@\@QEAA\@VFilterInput\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI FilterInputDefinition(class FilterInput, std::string const &);
    /**
     * @symbol ??1FilterInputDefinition\@\@QEAA\@XZ
     */
    MCAPI ~FilterInputDefinition();

};
