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
    ::ll::UntypedStorage<8, 24> mUnk54d1ef;
    ::ll::UntypedStorage<8, 24> mUnk77edb3;
    ::ll::UntypedStorage<8, 8>  mUnk21a8a7;
    ::ll::UntypedStorage<4, 4>  mUnkb834fd;
    // NOLINTEND

public:
    // prevent constructor by default
    Frame(Frame const&);
    Frame();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::gif::Frame& operator=(::gif::Frame const&);

    MCNAPI_C ~Frame();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace gif
