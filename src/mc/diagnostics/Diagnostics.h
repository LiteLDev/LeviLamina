#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/diagnostics/bedrock_log/LogCategory.h"
#include "mc/diagnostics/bedrock_log/LogRule.h"

namespace Bedrock::Diagnostics {
// NOLINTBEGIN
MCAPI void debugBreak();

MCAPI bool handleAssert(char const* fmt, char const* assert, int areaId, char const* file, char const* function, ...);

MCAPI void
log(::BedrockLog::LogCategory,
    std::bitset<3>,
    ::BedrockLog::LogRule,
    ::LogAreaID,
    uint,
    char const*,
    int,
    char const*,
    ...);
// NOLINTEND

}; // namespace Bedrock::Diagnostics
