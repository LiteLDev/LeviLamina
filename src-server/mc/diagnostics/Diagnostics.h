#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/diagnostics/bedrock_log/LogCategory.h"
#include "mc/diagnostics/bedrock_log/LogRule.h"

namespace Bedrock::Diagnostics {
// functions
// NOLINTBEGIN
MCNAPI bool handleAssert(char const*, char const*, int, char const*, char const*, ...);

MCNAPI void log(::BedrockLog::LogCategory, ::std::bitset<3>, ::BedrockLog::LogRule, ::LogAreaID, uint, char const*, int, char const*, ...);
// NOLINTEND

}
