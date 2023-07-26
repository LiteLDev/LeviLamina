#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FilterParamDefinition {

public:
    // prevent constructor by default
    FilterParamDefinition& operator=(FilterParamDefinition const&) = delete;
    FilterParamDefinition(FilterParamDefinition const&)            = delete;
    FilterParamDefinition()                                        = delete;

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
    ); // NOLINT
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
    ); // NOLINT
    /**
     * @symbol ??1FilterParamDefinition\@\@QEAA\@XZ
     */
    MCAPI ~FilterParamDefinition(); // NOLINT
};
