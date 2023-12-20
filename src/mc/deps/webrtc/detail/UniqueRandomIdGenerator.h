#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class UniqueRandomIdGenerator {
public:
    // prevent constructor by default
    UniqueRandomIdGenerator& operator=(UniqueRandomIdGenerator const&);
    UniqueRandomIdGenerator(UniqueRandomIdGenerator const&);

public:
    // NOLINTBEGIN
    // symbol: ?GenerateId@UniqueRandomIdGenerator@rtc@@QEAAIXZ
    MCAPI uint GenerateId();

    // symbol: ??0UniqueRandomIdGenerator@rtc@@QEAA@XZ
    MCAPI UniqueRandomIdGenerator();

    // symbol: ??1UniqueRandomIdGenerator@rtc@@QEAA@XZ
    MCAPI ~UniqueRandomIdGenerator();

    // NOLINTEND
};

}; // namespace rtc
