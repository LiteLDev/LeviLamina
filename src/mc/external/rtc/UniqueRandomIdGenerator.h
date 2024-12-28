#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class UniqueRandomIdGenerator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk1b5ff4;
    ::ll::UntypedStorage<8, 16> mUnk533f13;
    // NOLINTEND

public:
    // prevent constructor by default
    UniqueRandomIdGenerator& operator=(UniqueRandomIdGenerator const&);
    UniqueRandomIdGenerator(UniqueRandomIdGenerator const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint GenerateId();

    MCAPI UniqueRandomIdGenerator();

    MCAPI ~UniqueRandomIdGenerator();
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

} // namespace rtc
