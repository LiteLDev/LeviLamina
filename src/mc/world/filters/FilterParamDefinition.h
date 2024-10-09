#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterParamOption.h"
#include "mc/world/filters/FilterParamRequirement.h"
#include "mc/world/filters/FilterParamType.h"

struct FilterParamDefinition {
public:
    // prevent constructor by default
    FilterParamDefinition& operator=(FilterParamDefinition const&);
    FilterParamDefinition(FilterParamDefinition const&);
    FilterParamDefinition();

public:
    // NOLINTBEGIN
    MCAPI FilterParamDefinition(
        ::FilterParamType        type,
        ::FilterParamRequirement requirement,
        std::string              description,
        class FilterInput        def,
        struct FilterStringMap   stringMap
    );

    MCAPI FilterParamDefinition(
        ::FilterParamType        type,
        ::FilterParamRequirement requirement,
        std::string              description,
        ::FilterParamOption      opt,
        class FilterInput        def,
        struct FilterStringMap   stringMap
    );

    MCAPI ~FilterParamDefinition();

    // NOLINTEND
};
