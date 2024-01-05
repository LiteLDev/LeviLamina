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
    // symbol: ??0Random@0Crypto@@QEAA@XZ
    MCAPI Random();

    // symbol: ?fillData@Random@1Crypto@@QEAAXPEADI@Z
    MCAPI void fillData(char* data, uint amount);

    // symbol: ?getBytes@Random@1Crypto@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z
    MCAPI std::string getBytes(uint);

    // NOLINTEND
};

}; // namespace Crypto::Random
