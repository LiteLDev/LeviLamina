#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Random {

class Random {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk93b04e;
    // NOLINTEND

public:
    // prevent constructor by default
    Random& operator=(Random const&);
    Random(Random const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Random();

#ifdef LL_PLAT_C
    MCNAPI void fillType(void* data, uint amount);
#endif

    MCNAPI ::std::string getBytes(uint amount);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace Crypto::Random
