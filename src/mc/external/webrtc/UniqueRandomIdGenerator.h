#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class UniqueRandomIdGenerator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkf451c0;
    ::ll::UntypedStorage<8, 16> mUnk328479;
    // NOLINTEND

public:
    // prevent constructor by default
    UniqueRandomIdGenerator& operator=(UniqueRandomIdGenerator const&);
    UniqueRandomIdGenerator(UniqueRandomIdGenerator const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint GenerateId();

    MCNAPI UniqueRandomIdGenerator();

    MCNAPI ~UniqueRandomIdGenerator();
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
