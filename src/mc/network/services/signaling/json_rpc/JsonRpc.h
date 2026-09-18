#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/platform/Result.h"

namespace JsonRpc {
// functions
// NOLINTBEGIN
MCNAPI ::std::pair<::Bedrock::Threading::Async<::Bedrock::Result<void>>, ::Bedrock::Threading::Async<::std::error_code>>
makeErroredSendResult(::std::error_code error);
// NOLINTEND

} // namespace JsonRpc
