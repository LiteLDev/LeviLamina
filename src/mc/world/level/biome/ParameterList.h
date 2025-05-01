#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ParameterList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk22c268;
    ::ll::UntypedStorage<8, 168> mUnkb49057;
    // NOLINTEND

public:
    // prevent constructor by default
    ParameterList& operator=(ParameterList const&);
    ParameterList(ParameterList const&);
    ParameterList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParameterList(::ParameterList&&);

    MCNAPI ~ParameterList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ParameterList&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
