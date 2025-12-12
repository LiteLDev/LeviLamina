#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gif {

struct Gif {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk18ce5e;
    ::ll::UntypedStorage<4, 4>  mUnkd10a17;
    ::ll::UntypedStorage<8, 24> mUnk6c2636;
    ::ll::UntypedStorage<8, 24> mUnk9bc153;
    // NOLINTEND

public:
    // prevent constructor by default
    Gif& operator=(Gif const&);
    Gif();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C Gif(::gif::Gif const&);

    MCNAPI_C ::gif::Gif& operator=(::gif::Gif&&);

    MCNAPI_C ~Gif();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::gif::Gif const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace gif
