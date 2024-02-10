#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/debug/LogCategory.h"
#include "mc/deps/core/common/debug/LogRule.h"
#include "mc/enums/LogAreaID.h"

namespace Bedrock::Diagnostics {
// NOLINTBEGIN
// symbol: ?debugBreak@Diagnostics@Bedrock@@YAXXZ
MCAPI void debugBreak();

// symbol: ?handleAssert@Diagnostics@Bedrock@@YA_NPEBD0H00ZZ
MCAPI bool handleAssert(char const* fmt, char const* assert, int areaId, char const* file, char const* function, ...);

// symbol: ?log@Diagnostics@Bedrock@@YAXW4LogCategory@BedrockLog@@V?$bitset@$02@std@@W4LogRule@4@W4LogAreaID@@IPEBDH4ZZ
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
