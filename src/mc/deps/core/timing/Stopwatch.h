#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Stopwatch {
public:
    // prevent constructor by default
    Stopwatch& operator=(Stopwatch const&);
    Stopwatch(Stopwatch const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Stopwatch();

    // vIndex: 1
    virtual double stop();

    // vIndex: 2
    virtual double stopContinue();

    // vIndex: 3
    virtual void print(std::string const& prepend);

    MCAPI Stopwatch();

    MCAPI void reset();

    MCAPI void start();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI void print$(std::string const& prepend);

    MCAPI double stop$();

    MCAPI double stopContinue$();

    // NOLINTEND
};
