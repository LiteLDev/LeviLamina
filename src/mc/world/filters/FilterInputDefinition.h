#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FilterInput;
// clang-format on

struct FilterInputDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk816a3b;
    ::ll::UntypedStorage<8, 32> mUnkb9ffd8;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterInputDefinition& operator=(FilterInputDefinition const&);
    FilterInputDefinition(FilterInputDefinition const&);
    FilterInputDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FilterInputDefinition(::FilterInput f, ::std::string const& d);

    MCNAPI ~FilterInputDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FilterInput f, ::std::string const& d);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
