#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PlatformUtils { struct PlatformData; }
// clang-format on

namespace Bedrock::PlatformUtils {
// NOLINTBEGIN
MCAPI class Core::PathBuffer<std::string> const& getExternalStoragePath();

MCAPI std::string const& getPackageFamilyName();

MCAPI bool isCentennial();
// NOLINTEND

}; // namespace Bedrock::PlatformUtils
