#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/platform/diagnostics/bedrock_log/LogCategory.h"
#include "mc/platform/diagnostics/bedrock_log/LogRule.h"

namespace Bedrock::Diagnostics {
// functions
// NOLINTBEGIN
MCNAPI bool handleAssert(char const* msgFormat, char const* arg, int line, char const* file, char const* function, ...);

MCNAPI void
log(::BedrockLog::LogCategory category,
    ::std::bitset<3>          channelMask,
    ::BedrockLog::LogRule     rule,
    ::LogAreaID               area,
    uint                      priority,
    char const*               function,
    int                       line,
    char const*               pszFormat,
    ...);
// NOLINTEND

} // namespace Bedrock::Diagnostics
