#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Stopwatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka98630;
    ::ll::UntypedStorage<8, 8>  mUnk81e7ba;
    ::ll::UntypedStorage<8, 8>  mUnkacd501;
    ::ll::UntypedStorage<8, 8>  mUnkec6ec1;
    ::ll::UntypedStorage<4, 4>  mUnkc4d592;
    // NOLINTEND

public:
    // prevent constructor by default
    Stopwatch& operator=(Stopwatch const&);
    Stopwatch(Stopwatch const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Stopwatch();

    // vIndex: 1
    virtual double stop();

    // vIndex: 2
    virtual double stopContinue();

    // vIndex: 3
    virtual void print(::std::string const& prepend);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Stopwatch();

    MCAPI void reset();

    MCAPI void start();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI double $stop();

    MCAPI double $stopContinue();

    MCAPI void $print(::std::string const& prepend);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
