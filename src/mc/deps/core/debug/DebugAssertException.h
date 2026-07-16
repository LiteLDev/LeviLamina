#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DebugAssertException : public ::std::exception {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mUnkc1f125;
    ::ll::UntypedStorage<8, 32>  mUnk68885d;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugAssertException& operator=(DebugAssertException const&);
    DebugAssertException(DebugAssertException const&);
    DebugAssertException();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* what() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
