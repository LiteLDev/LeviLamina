#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FilterInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke0752f;
    ::ll::UntypedStorage<8, 32> mUnkfbc8dc;
    ::ll::UntypedStorage<4, 4> mUnk4c9284;
    ::ll::UntypedStorage<4, 4> mUnk1800e1;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterInput(FilterInput const&);
    FilterInput();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FilterInput(int i);

    MCNAPI explicit FilterInput(::std::string const& s);

    MCNAPI ::FilterInput& operator=(::FilterInput const&);

    MCNAPI ::FilterInput& operator=(::FilterInput&&);

    MCNAPI ~FilterInput();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int i);

    MCNAPI void* $ctor(::std::string const& s);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
