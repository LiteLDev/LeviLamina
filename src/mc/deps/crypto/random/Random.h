#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Random {

class Random {
public:
    // prevent constructor by default
    Random& operator=(Random const&);
    Random(Random const&);

public:
    // NOLINTBEGIN
    MCAPI Random();

    MCAPI void fillData(char* data, uint amount);

    MCAPI std::string getBytes(uint);

    // NOLINTEND
};

}; // namespace Crypto::Random
