#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"

// auto generated forward declare list
// clang-format off
namespace LoadResultHelpers { struct ContentLogOptions; }
namespace Puv { class LoadResultAny; }
namespace Puv { class Logger; }
// clang-format on

namespace LoadResultHelpers {
// functions
// NOLINTBEGIN
MCAPI bool
validate(::Puv::LoadResultAny const& result, ::LogArea logArea, ::LoadResultHelpers::ContentLogOptions options);

MCAPI void
writeToContentLog(::Puv::Logger const& logger, ::LogArea logArea, ::LoadResultHelpers::ContentLogOptions options);
// NOLINTEND

} // namespace LoadResultHelpers
