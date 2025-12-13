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
    Random();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void fillType(void* data, uint amount);

    MCNAPI ::std::string getBytes(uint amount);
    // NOLINTEND
};

} // namespace Crypto::Random
