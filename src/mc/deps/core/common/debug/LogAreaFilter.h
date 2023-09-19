#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/LogAreaID.h"

namespace BedrockLog {

class LogAreaFilter {
public:
    // prevent constructor by default
    LogAreaFilter& operator=(LogAreaFilter const&);
    LogAreaFilter(LogAreaFilter const&);
    LogAreaFilter();

public:
    // NOLINTBEGIN
    // symbol: ?toggleFilter@LogAreaFilter@BedrockLog@@QEAAXW4LogAreaID@@@Z
    MCAPI void toggleFilter(::LogAreaID);

    // NOLINTEND
};

}; // namespace BedrockLog
