#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gif {

struct Frame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkfd3fdb;
    ::ll::UntypedStorage<4, 4>  mUnk828784;
    ::ll::UntypedStorage<4, 4>  mUnkbb381d;
    ::ll::UntypedStorage<4, 4>  mUnkd982f9;
    ::ll::UntypedStorage<4, 4>  mUnk54854a;
    ::ll::UntypedStorage<8, 24> mUnkaf65c6;
    ::ll::UntypedStorage<8, 24> mUnkca7c33;
    ::ll::UntypedStorage<8, 8>  mUnk21a8a7;
    ::ll::UntypedStorage<4, 4>  mUnkb834fd;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    Frame& operator=(Frame const&);
    Frame(Frame const&);
    Frame();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    Frame(Frame const&);
    Frame();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::gif::Frame& operator=(::gif::Frame const&);

    MCNAPI ~Frame();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace gif
