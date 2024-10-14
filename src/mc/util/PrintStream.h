#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PrintStream {
public:
    // prevent constructor by default
    // PrintStream& operator=(PrintStream const&);
    // PrintStream(PrintStream const&);
    // PrintStream();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PrintStream();

    // vIndex: 1
    virtual void print(std::string const&);

    MCAPI void println(std::string const&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI void print$(std::string const&);

    // NOLINTEND
};
