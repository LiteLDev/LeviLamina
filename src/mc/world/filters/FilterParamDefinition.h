#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FilterParamDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERPARAMDEFINITION
public:
    FilterParamDefinition& operator=(FilterParamDefinition const&) = delete;
    FilterParamDefinition(FilterParamDefinition const&)            = delete;
    FilterParamDefinition()                                        = delete;
#endif

public:
    /**
     * @symbol
     * ??0FilterParamDefinition\@\@QEAA\@W4FilterParamType\@\@W4FilterParamRequirement\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4FilterParamOption\@\@VFilterInput\@\@UFilterStringMap\@\@\@Z
     */
    MCAPI FilterParamDefinition(
        enum class FilterParamType,
        enum class FilterParamRequirement,
        std::string,
        enum class FilterParamOption,
        class FilterInput,
        struct FilterStringMap
    );
    /**
     * @symbol
     * ??0FilterParamDefinition\@\@QEAA\@W4FilterParamType\@\@W4FilterParamRequirement\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VFilterInput\@\@UFilterStringMap\@\@\@Z
     */
    MCAPI FilterParamDefinition(
        enum class FilterParamType,
        enum class FilterParamRequirement,
        std::string,
        class FilterInput,
        struct FilterStringMap
    );
    /**
     * @symbol ??1FilterParamDefinition\@\@QEAA\@XZ
     */
    MCAPI ~FilterParamDefinition();
};
