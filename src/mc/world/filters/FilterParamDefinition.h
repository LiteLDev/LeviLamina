#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterParamOption.h"
#include "mc/world/filters/FilterParamRequirement.h"
#include "mc/world/filters/FilterParamType.h"

// auto generated forward declare list
// clang-format off
class FilterInput;
struct FilterStringMap;
// clang-format on

struct FilterParamDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk4b4f37;
    ::ll::UntypedStorage<4, 4>  mUnk3c8bc4;
    ::ll::UntypedStorage<8, 32> mUnk29a8f8;
    ::ll::UntypedStorage<8, 48> mUnk87f316;
    ::ll::UntypedStorage<8, 64> mUnked9a86;
    ::ll::UntypedStorage<1, 1>  mUnk87e752;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterParamDefinition& operator=(FilterParamDefinition const&);
    FilterParamDefinition(FilterParamDefinition const&);
    FilterParamDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FilterParamDefinition(
        ::FilterParamType        type,
        ::FilterParamRequirement requirement,
        ::std::string            description,
        ::FilterInput            def,
        ::FilterStringMap        stringMap
    );

    MCNAPI FilterParamDefinition(
        ::FilterParamType        type,
        ::FilterParamRequirement requirement,
        ::std::string            description,
        ::FilterParamOption      opt,
        ::FilterInput            def,
        ::FilterStringMap        stringMap
    );

    MCNAPI ::FilterParamDefinition& operator=(::FilterParamDefinition&&);

    MCNAPI ~FilterParamDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::FilterParamType        type,
        ::FilterParamRequirement requirement,
        ::std::string            description,
        ::FilterInput            def,
        ::FilterStringMap        stringMap
    );

    MCNAPI void* $ctor(
        ::FilterParamType        type,
        ::FilterParamRequirement requirement,
        ::std::string            description,
        ::FilterParamOption      opt,
        ::FilterInput            def,
        ::FilterStringMap        stringMap
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
