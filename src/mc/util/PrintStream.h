#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PrintStream {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PrintStream();

    // vIndex: 1
    virtual void print(::std::string const& s);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $print(::std::string const& s);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
