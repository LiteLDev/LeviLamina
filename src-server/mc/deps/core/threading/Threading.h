#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncErrc.h"

namespace Bedrock::Threading {
// functions
// NOLINTBEGIN
MCNAPI ::std::error_code MakeErrorCode(::Bedrock::Threading::AsyncErrc id);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::defer_lock_t const&& DeferLock();

MCNAPI ::std::try_to_lock_t const&& TryToLock();
// NOLINTEND

}
