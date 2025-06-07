#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/UnzipResult.h"
#include "mc/deps/core/file/ZipResult.h"
#include "mc/deps/core/string/BasicStackString.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core::ZipUtils { class UnzipSettings; }
namespace Core::ZipUtils { class ZipProgress; }
namespace Core::ZipUtils { class ZipSettings; }
// clang-format on

namespace Core::ZipUtils {
// functions
// NOLINTBEGIN
MCNAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> _zipEncodedPathToUTF8(::Core::Path const& path);

MCNAPI bool exists(
    ::Core::Path const&                    zipPath,
    ::Core::Path const&                    relativePath,
    ::Core::ZipUtils::UnzipSettings const& unzipSettings
);

MCNAPI bool getFilenames(
    ::Core::Path const&                               zipPath,
    ::std::vector<::Core::PathBuffer<::std::string>>& result,
    ::Core::ZipUtils::UnzipSettings const&            unzipSettings
);

MCNAPI ::Core::ZipUtils::UnzipResult getTranslatedUnzipResult(int inputResult);

MCNAPI ::Core::ZipUtils::ZipResult getTranslatedZipResult(int inputResult);

MCNAPI ::Core::ZipUtils::UnzipResult unzipInTransaction(
    ::Core::Path const&                    zipInputPath,
    ::Core::Path const&                    outputFolderPath,
    ::Core::ZipUtils::ZipProgress&         progress,
    bool                                   useLowMemMode,
    ::Core::ZipUtils::UnzipSettings const& unzipSettings,
    ::Core::Result&                        transactionCommitResult
);

MCNAPI ::Core::ZipUtils::ZipResult
zip(::Core::Path const&                  inputPathIn,
    ::Core::Path const&                  zipOutputPath,
    ::Core::ZipUtils::ZipProgress&       progress,
    bool                                 useLowMemMode,
    ::Core::ZipUtils::ZipSettings const& zipSettings);
// NOLINTEND

} // namespace Core::ZipUtils
