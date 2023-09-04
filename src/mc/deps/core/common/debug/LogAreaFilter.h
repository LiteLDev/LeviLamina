#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/LogAreaID.h"

namespace BedrockLog {

class LogAreaFilter {
public:
    // prevent constructor by default
    LogAreaFilter& operator=(LogAreaFilter const&) = delete;
    LogAreaFilter(LogAreaFilter const&)            = delete;
    LogAreaFilter()                                = delete;

public:
    // NOLINTBEGIN
    // symbol: ?toggleFilter@LogAreaFilter@BedrockLog@@QEAAXW4LogAreaID@@@Z
    MCAPI void toggleFilter(::LogAreaID);

    // NOLINTEND
};

}; // namespace BedrockLog
