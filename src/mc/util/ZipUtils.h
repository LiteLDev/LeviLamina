#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/ZipResult.h"
#include "mc/util/UnzipResult.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
namespace Core::ZipUtils { class UnzipSettings; }
namespace Core::ZipUtils { class ZipProgress; }
namespace Core::ZipUtils { class ZipSettings; }
// clang-format on

namespace Core::ZipUtils {
// functions
// NOLINTBEGIN
MCAPI bool getFilenames(
    ::Core::PathView                                  zipPath,
    ::std::vector<::Core::PathBuffer<::std::string>>& result,
    ::Core::ZipUtils::UnzipSettings const&            unzipSettings
);

#ifdef LL_PLAT_C
MCAPI ::std::string readAssetFileZipped_DEPRECATED(::Core::PathView zippedFolder, ::Core::PathView filename);
#endif

MCAPI ::Core::ZipUtils::UnzipResult unzipInTransaction(
    ::Core::PathView                       zipInputPath,
    ::Core::PathView                       outputFolderPath,
    ::Core::ZipUtils::ZipProgress&         progress,
    bool                                   useLowMemMode,
    ::Core::ZipUtils::UnzipSettings const& unzipSettings
);

MCAPI ::Core::ZipUtils::ZipResult
zip(::Core::PathView                     inputPathIn,
    ::Core::PathView                     zipOutputPath,
    ::Core::ZipUtils::ZipProgress&       progress,
    bool                                 useLowMemMode,
    ::Core::ZipUtils::ZipSettings const& zipSettings);

#ifdef LL_PLAT_C
MCAPI ::Core::ZipUtils::ZipResult
zip(::std::vector<::Core::PathBuffer<::std::string>> const& filesToZip,
    ::Core::PathView                                        zipOutputPath,
    ::Core::ZipUtils::ZipProgress&                          progress,
    bool                                                    useLowMemMode,
    ::std::function<::std::string(::Core::PathView)>        overrideNameCallback,
    ::Core::ZipUtils::ZipSettings const&                    zipSettings);
#endif
// NOLINTEND

} // namespace Core::ZipUtils
