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
    virtual ~Stopwatch() = default;

    virtual double stop();

    virtual double stopContinue();

    virtual void print(::std::string const& prepend);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Stopwatch();

#ifdef LL_PLAT_C
    MCNAPI double getLast();

    MCNAPI bool isReset() const;
#endif

    MCNAPI void reset();

    MCNAPI void start();

#ifdef LL_PLAT_C
    MCNAPI double tick();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI double $stop();

    MCNAPI double $stopContinue();

    MCNAPI void $print(::std::string const& prepend);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
