#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct AudioOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk744fc5;
    ::ll::UntypedStorage<1, 2>  mUnkc3f3fe;
    ::ll::UntypedStorage<1, 2>  mUnk517dc4;
    ::ll::UntypedStorage<1, 2>  mUnk7ee04f;
    ::ll::UntypedStorage<1, 2>  mUnk6cafc7;
    ::ll::UntypedStorage<4, 8>  mUnkeb9d87;
    ::ll::UntypedStorage<1, 2>  mUnkd1858f;
    ::ll::UntypedStorage<4, 8>  mUnk48bf83;
    ::ll::UntypedStorage<1, 2>  mUnkc7bb09;
    ::ll::UntypedStorage<8, 40> mUnk1ebcc3;
    ::ll::UntypedStorage<1, 2>  mUnk832811;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioOptions& operator=(AudioOptions const&);
    AudioOptions(AudioOptions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AudioOptions();

    MCNAPI ::std::string ToString() const;

    MCNAPI ~AudioOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
