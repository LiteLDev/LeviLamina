#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/debug/LogCategory.h"
#include "mc/deps/core/common/debug/LogRule.h"
#include "mc/enums/LogAreaID.h"

namespace Bedrock::Diagnostics::Interface {
// NOLINTBEGIN
MCAPI bool handleAssert(char const*, char const*, int, char const*, char const*, char*);

MCAPI void
log(::BedrockLog::LogCategory,
    std::bitset<3>,
    ::BedrockLog::LogRule,
    ::LogAreaID,
    uint,
    char const*,
    int,
    char const*,
    char*);

MCAPI bool shouldDebugBreak();
// NOLINTEND

}; // namespace Bedrock::Diagnostics::Interface
