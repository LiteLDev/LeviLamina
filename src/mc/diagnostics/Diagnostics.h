#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/platform/diagnostics/bedrock_log/LogCategory.h"
#include "mc/platform/diagnostics/bedrock_log/LogRule.h"

namespace Bedrock::Diagnostics {
// functions
// NOLINTBEGIN
MCNAPI void debugBreak();

MCNAPI bool handleAssert(char const*, char const*, int, char const*, char const*, ...);

#ifdef LL_PLAT_S
MCNAPI void
interceptAsserts(::std::function<void()> const& f, ::std::function<void(::std::string)> const& handleAssert);
#endif

MCNAPI void
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
