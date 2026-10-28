#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
// clang-format on

namespace CryptoUtils {
// functions
// NOLINTBEGIN
MCNAPI ::Bedrock::Result<::std::string> getFileChecksum(::Core::PathView path);
// NOLINTEND

} // namespace CryptoUtils
