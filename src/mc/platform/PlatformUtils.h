#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

namespace Bedrock::PlatformUtils {
// functions
// NOLINTBEGIN
MCNAPI ::std::string createUUID();

MCNAPI ::Core::PathBuffer<::std::string> const& getExternalStoragePath();

MCNAPI ::std::string const& getPackageFamilyName();

#ifdef LL_PLAT_C
MCNAPI ::Core::PathBuffer<::std::string> getUWPInstallationPath();
#endif

MCNAPI void initializeDeviceIdForDev(::std::string& deviceId, bool isAnonymous);
// NOLINTEND

} // namespace Bedrock::PlatformUtils
