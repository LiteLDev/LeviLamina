#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PrintStream {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrintStream();

    virtual void print(::std::string const& s);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void println(::std::string const& s);
    // NOLINTEND
};
