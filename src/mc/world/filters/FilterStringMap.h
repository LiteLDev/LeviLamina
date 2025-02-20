#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct FilterInputDefinition;
// clang-format on

struct FilterStringMap : public ::std::unordered_map<::std::string, ::FilterInputDefinition> {
public:
    // prevent constructor by default
    FilterStringMap& operator=(FilterStringMap const&);
    FilterStringMap(FilterStringMap const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FilterStringMap(::std::initializer_list<::std::pair<::std::string const, ::FilterInputDefinition>> l
    );

    MCAPI ::FilterStringMap& operator=(::FilterStringMap&&);

    MCAPI ~FilterStringMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::FilterInputDefinition>> l);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
