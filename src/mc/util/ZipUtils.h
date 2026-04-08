#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/ZipResult.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/platform/Result.h"
#include "mc/util/UnzipResult.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core::ZipUtils { class UnzipSettings; }
namespace Core::ZipUtils { class ZipProgress; }
namespace Core::ZipUtils { class ZipSettings; }
// clang-format on

namespace Core::ZipUtils {
// functions
// NOLINTBEGIN
MCAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> _zipEncodedPathToUTF8(::Core::PathView path);

MCAPI bool getFilenames(
    ::Core::PathView                                  zipPath,
    ::std::vector<::Core::PathBuffer<::std::string>>& result,
    ::Core::ZipUtils::UnzipSettings const&            unzipSettings
);

MCAPI ::Core::ZipUtils::UnzipResult getTranslatedUnzipResult(int inputResult);

MCAPI ::Core::ZipUtils::ZipResult getTranslatedZipResult(int inputResult);

MCAPI ::Core::Result
isFolderDepthValid(::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& filePath, uint64 maxFileDepth);

MCAPI ::std::error_code make_error_code(::Core::ZipUtils::UnzipResult e);

MCAPI ::std::error_code make_error_code(::Core::ZipUtils::ZipResult e);

#ifdef LL_PLAT_C
MCAPI ::std::string readAssetFileZipped_DEPRECATED(::Core::PathView zippedFolder, ::Core::PathView filename);

MCAPI ::Core::ZipUtils::UnzipResult unzipInTransaction(
    ::Core::PathView                       zipInputPath,
    ::Core::PathView                       outputFolderPath,
    ::Core::ZipUtils::ZipProgress&         progress,
    bool                                   useLowMemMode,
    ::Core::ZipUtils::UnzipSettings const& unzipSettings
);
#endif

MCAPI ::Core::ZipUtils::UnzipResult unzipInTransaction(
    ::Core::PathView                       zipInputPath,
    ::Core::PathView                       outputFolderPath,
    ::Core::ZipUtils::ZipProgress&         progress,
    bool                                   useLowMemMode,
    ::Core::ZipUtils::UnzipSettings const& unzipSettings,
    ::Bedrock::Result<void>&               transactionCommitResult
);

MCAPI ::Core::ZipUtils::UnzipResult unzipToFlatFile(
    ::Core::PathView                       zipInputPath,
    ::Core::PathView                       outputFolderPath,
    ::Core::ZipUtils::ZipProgress&         progress,
    ::Core::FileBufferingMode              bufferMode,
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

MCAPI ::Core::ZipUtils::ZipResult zipFromZip(
    ::Core::PathView                     zipInputPath,
    ::Core::PathView                     zipInputSubPath,
    ::Core::PathView                     zipOutputPath,
    ::Core::ZipUtils::ZipProgress&       progress,
    bool                                 useLowMemMode,
    ::Core::ZipUtils::ZipSettings const& zipSettings
);
// NOLINTEND

} // namespace Core::ZipUtils
