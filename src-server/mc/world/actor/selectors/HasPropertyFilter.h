#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CommandRationalRange;
// clang-format on

struct HasPropertyFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk23569d;
    ::ll::UntypedStorage<1, 1> mUnkdb1415;
    ::ll::UntypedStorage<8, 48> mUnk3bfe6a;
    // NOLINTEND

public:
    // prevent constructor by default
    HasPropertyFilter(HasPropertyFilter const&);
    HasPropertyFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HasPropertyFilter(::HasPropertyFilter&&);

    MCNAPI ::HasPropertyFilter& operator=(::HasPropertyFilter const&);

    MCNAPI ~HasPropertyFilter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::HasPropertyFilter&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
