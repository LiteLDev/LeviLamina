#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PrintStream {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrintStream();

    virtual void print(::std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void println(::std::string const& s);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
