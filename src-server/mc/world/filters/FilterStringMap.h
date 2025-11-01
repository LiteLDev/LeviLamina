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
    FilterStringMap();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FilterStringMap(::std::initializer_list<::std::pair<::std::string const, ::FilterInputDefinition>> l);

    MCNAPI ::FilterStringMap& operator=(::FilterStringMap&&);

    MCNAPI ~FilterStringMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::FilterInputDefinition>> l);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
