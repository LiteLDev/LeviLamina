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

#ifdef LL_PLAT_S
MCNAPI bool isCentennial();
#endif

#ifdef LL_PLAT_C
MCNAPI void setAppDataFolderName(::std::string_view folderName);
#endif
// NOLINTEND

} // namespace Bedrock::PlatformUtils
