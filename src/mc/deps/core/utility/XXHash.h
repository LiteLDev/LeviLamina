#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

class XXHash {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb637e4;
    // NOLINTEND

public:
    // prevent constructor by default
    XXHash& operator=(XXHash const&);
    XXHash(XXHash const&);
    XXHash();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~XXHash();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Util
