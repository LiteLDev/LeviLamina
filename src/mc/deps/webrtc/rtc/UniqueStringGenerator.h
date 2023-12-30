#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class UniqueStringGenerator {
public:
    // prevent constructor by default
    UniqueStringGenerator& operator=(UniqueStringGenerator const&);
    UniqueStringGenerator(UniqueStringGenerator const&);

public:
    // NOLINTBEGIN
    // symbol: ?AddKnownId@UniqueStringGenerator@rtc@@QEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool AddKnownId(std::string_view);

    // symbol:
    // ?GenerateString@UniqueStringGenerator@rtc@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string GenerateString();

    // symbol: ??0UniqueStringGenerator@rtc@@QEAA@XZ
    MCAPI UniqueStringGenerator();

    // symbol: ??1UniqueStringGenerator@rtc@@QEAA@XZ
    MCAPI ~UniqueStringGenerator();

    // NOLINTEND
};

}; // namespace rtc
