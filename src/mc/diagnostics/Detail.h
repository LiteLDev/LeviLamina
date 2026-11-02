#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/platform/diagnostics/bedrock_log/LogCategory.h"
#include "mc/platform/diagnostics/bedrock_log/LogRule.h"

namespace Bedrock::Diagnostics::Detail {
// functions
// NOLINTBEGIN
MCNAPI void logFmt(
    ::BedrockLog::LogCategory                          category,
    ::std::bitset<3>                                   channelMask,
    ::BedrockLog::LogRule                              rule,
    ::LogAreaID                                        area,
    uint                                               priority,
    char const*                                        function,
    int                                                line,
    ::fmt::v11::basic_string_view<char>                format,
    ::fmt::v11::basic_format_args<::fmt::v11::context> args
);
// NOLINTEND

} // namespace Bedrock::Diagnostics::Detail
