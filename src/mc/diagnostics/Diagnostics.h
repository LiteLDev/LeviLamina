#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/diagnostics/bedrock_log/LogCategory.h"
#include "mc/diagnostics/bedrock_log/LogRule.h"

namespace Bedrock::Diagnostics {
// functions
// NOLINTBEGIN
MCAPI void debugBreak();

MCAPI bool handleAssert(char const*, char const*, int, char const*, char const*, ...);

MCAPI void interceptAsserts(::std::function<void()> const& f, ::std::function<void(::std::string)> const& handleAssert);

MCAPI void
log(::BedrockLog::LogCategory,
    ::std::bitset<3>,
    ::BedrockLog::LogRule,
    ::LogAreaID,
    uint,
    char const*,
    int,
    char const*,
    ...);
// NOLINTEND

} // namespace Bedrock::Diagnostics
