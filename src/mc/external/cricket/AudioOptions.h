#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct AudioOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk93833d;
    ::ll::UntypedStorage<1, 2>  mUnk1cf805;
    ::ll::UntypedStorage<1, 2>  mUnkfa3036;
    ::ll::UntypedStorage<1, 2>  mUnk8277f3;
    ::ll::UntypedStorage<1, 2>  mUnkf780f4;
    ::ll::UntypedStorage<4, 8>  mUnk2e7378;
    ::ll::UntypedStorage<1, 2>  mUnke29473;
    ::ll::UntypedStorage<4, 8>  mUnka08fb8;
    ::ll::UntypedStorage<1, 2>  mUnkda9712;
    ::ll::UntypedStorage<8, 40> mUnk6ad1de;
    ::ll::UntypedStorage<1, 2>  mUnk5b88c5;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioOptions& operator=(AudioOptions const&);
    AudioOptions(AudioOptions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AudioOptions();

    MCAPI ::std::string ToString() const;

    MCAPI ~AudioOptions();
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
};

} // namespace cricket
